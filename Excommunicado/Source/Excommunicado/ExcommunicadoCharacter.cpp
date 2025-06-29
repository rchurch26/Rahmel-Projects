// Copyright Epic Games, Inc. All Rights Reserved.

#include "ExcommunicadoCharacter.h"
#include "ExcommunicadoProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "TP_WeaponComponent.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "GlobalManager.h"


//////////////////////////////////////////////////////////////////////////
// AExcommunicadoCharacter

AExcommunicadoCharacter::AExcommunicadoCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	TurnRateGamepad = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

}

void AExcommunicadoCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Bind Events
	GetMesh1P()->GetAnimInstance()->OnMontageEnded.AddDynamic(this, &AExcommunicadoCharacter::HandleOnMontageEnd);

	//Equip Default Weapon
	EquipWeapon();

	if (cPlayerHUD != nullptr)
	{
		//Add HUD to Viewport
		UUserWidget* HUD = CreateWidget<UUserWidget>(Cast<APlayerController>(GetController()), cPlayerHUD);
		HUD->AddToViewport(9999);
	}
}

//////////////////////////////////////////////////////////////////////////// Input

void AExcommunicadoCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	//Bind Reload Event
	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &AExcommunicadoCharacter::Reload);

	//Bind Interact Event
	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &AExcommunicadoCharacter::Interact);

	// Bind fire event
	PlayerInputComponent->BindAction("PrimaryAction", IE_Pressed, this, &AExcommunicadoCharacter::OnPrimaryAction);

	// Enable touchscreen input
	EnableTouchscreenMovement(PlayerInputComponent);

	// Bind movement events
	PlayerInputComponent->BindAxis("Move Forward / Backward", this, &AExcommunicadoCharacter::MoveForward);
	PlayerInputComponent->BindAxis("Move Right / Left", this, &AExcommunicadoCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "Mouse" versions handle devices that provide an absolute delta, such as a mouse.
	// "Gamepad" versions are for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn Right / Left Mouse", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Look Up / Down Mouse", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Turn Right / Left Gamepad", this, &AExcommunicadoCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("Look Up / Down Gamepad", this, &AExcommunicadoCharacter::LookUpAtRate);
}

void AExcommunicadoCharacter::Reload()
{
	//Check if reloading is neccessary
	if (currentAmmo < equippedWeapon->magSize && totalAmmo > 0)
	{
		//Get Anim Instance and Be sure it Exists
		UAnimInstance* animInstance = GetMesh1P()->GetAnimInstance();
		if (animInstance != nullptr)
		{
			if (reloadMontage != nullptr)
			{
				//Play Reload Montage
				animInstance->Montage_Play(reloadMontage, 1.0f);
			}
		}
	}
}

void AExcommunicadoCharacter::EquipWeapon()
{
	//Get Player Controller
	APlayerController* pController = Cast<APlayerController>(GetController());

	//Get Controller Spawn Location and Rotation
	const FRotator pRotation = pController->PlayerCameraManager->GetCameraRotation();
	const FVector pLocation = GetOwner()->GetActorLocation();

	//Define Spawn Params
	FActorSpawnParameters pSpawnParams;
	pSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	//Spawn Pistol
	AActor* pPistol = GetWorld()->SpawnActor<AWeapon>(cPistol, pLocation, pRotation, pSpawnParams);

	//Set Equipped Weapon
	equippedWeapon = Cast<AWeapon>(pPistol);

	//Set Ammo
	currentAmmo = equippedWeapon->magSize;
	totalAmmo = equippedWeapon->maxAmmo;

	//Equip Pistol
	UTP_WeaponComponent* pWeapon = equippedWeapon->weaponComponent;
	pWeapon->AttachWeapon(this);
}

void AExcommunicadoCharacter::TakeDamage(float damage)
{
	//Deal Damage
	health -= damage;

	//Death Handle
	if (health <= 0)
	{
		UGameplayStatics::OpenLevel(GetWorld(), FName(GetWorld()->GetName()), true);
	}
}

void AExcommunicadoCharacter::Interact()
{
	//Ensure Player can Interact
	if (canInteract)
	{
		//Get Global Manager
		UGlobalManager* mngr = Cast<UGlobalManager>(UGameplayStatics::GetGameInstance(GetWorld()));
		if (mngr->points >= 1000) //Ensure the player has at least 1000 points to refill ammo
		{
			//Negate Points
			mngr->points -= 1000;

			//Refill Ammo
			currentAmmo = equippedWeapon->magSize;
			totalAmmo = equippedWeapon->maxAmmo;
		}
	}
}

void AExcommunicadoCharacter::OnPrimaryAction()
{
	// Trigger the OnItemUsed Event
	OnUseItem.Broadcast();

	UAnimInstance* animInstance = GetMesh1P()->GetAnimInstance();
	if (animInstance != nullptr)
	{
		if (reloadMontage != nullptr)
		{
			//Interrupt Reload Montage
			animInstance->Montage_Stop(0.2f, reloadMontage);
		}

		if (shootMontage != nullptr)
		{
			//Play Shoot Montage
			animInstance->Montage_Play(shootMontage, 1.0f);
		}
	}
}

void AExcommunicadoCharacter::BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == true)
	{
		return;
	}
	if ((FingerIndex == TouchItem.FingerIndex) && (TouchItem.bMoved == false))
	{
		OnPrimaryAction();
	}
	TouchItem.bIsPressed = true;
	TouchItem.FingerIndex = FingerIndex;
	TouchItem.Location = Location;
	TouchItem.bMoved = false;
}

void AExcommunicadoCharacter::EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == false)
	{
		return;
	}
	TouchItem.bIsPressed = false;
}

void AExcommunicadoCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AExcommunicadoCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AExcommunicadoCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

void AExcommunicadoCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

bool AExcommunicadoCharacter::EnableTouchscreenMovement(class UInputComponent* PlayerInputComponent)
{
	if (FPlatformMisc::SupportsTouchInput() || GetDefault<UInputSettings>()->bUseMouseForTouch)
	{
		PlayerInputComponent->BindTouch(EInputEvent::IE_Pressed, this, &AExcommunicadoCharacter::BeginTouch);
		PlayerInputComponent->BindTouch(EInputEvent::IE_Released, this, &AExcommunicadoCharacter::EndTouch);

		return true;
	}
	
	return false;
}

void AExcommunicadoCharacter::HandleOnMontageEnd(UAnimMontage* montage, bool interrupted)
{
	//Get Reload Montage Logic
	if (montage->GetName().Contains("reload") && !interrupted)
	{
		//Check Weapon is Equipped
		if (equippedWeapon == nullptr)
		{
			return;
		}
		//Check How Much Needs to be Reloaded
		if (totalAmmo >= equippedWeapon->magSize)
		{
			totalAmmo -= equippedWeapon->magSize;
			int reloadAmmount = equippedWeapon->magSize - currentAmmo;
			currentAmmo += reloadAmmount;
		}
		else 
		{
			int reloadAmmount = abs(totalAmmo - currentAmmo);
			currentAmmo += reloadAmmount;
			totalAmmo = 0;
		}
	}
}
