// Copyright Epic Games, Inc. All Rights Reserved.


#include "TP_WeaponComponent.h"
#include "ExcommunicadoCharacter.h"
#include "ExcommunicadoProjectile.h"
#include "GameFramework/PlayerController.h"
#include "Camera/PlayerCameraManager.h"
#include "Kismet/GameplayStatics.h"
#include "Enemy.h"
#include "GlobalManager.h"

// Sets default values for this component's properties
UTP_WeaponComponent::UTP_WeaponComponent()
{
	
}


void UTP_WeaponComponent::Fire()
{
	if(Character == nullptr || Character->GetController() == nullptr)
	{
		return;
	}

	//Check Mag Count
	if (Character->currentAmmo <= 0)
	{
		return;
	}

	// Try and line trace
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			APlayerController* PlayerController = Cast<APlayerController>(Character->GetController());
			const FRotator SpawnRotation = PlayerController->PlayerCameraManager->GetCameraRotation();
			// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
			const FVector SpawnLocation = GetOwner()->GetActorLocation() + SpawnRotation.RotateVector(muzzleOffset);
	
			//Set Collision Query Params
			FCollisionQueryParams params;
			params.AddIgnoredActor(PlayerController->GetPawn());

			//Hit Result
			FHitResult outHit;
			//Line Trace
			World->LineTraceSingleByChannel(outHit, 
				SpawnLocation, 
				SpawnLocation + (SpawnRotation.Vector() * 3000), 
				ECollisionChannel::ECC_Pawn, 
				params);
			DrawDebugLine(World, SpawnLocation, SpawnLocation + (SpawnRotation.Vector() * 3000), FColor::Red, false, 5.0f, 5, 5.0f);

			//Try to Cast Hit to Enemy
			AEnemy* enemy = Cast<AEnemy>(outHit.GetActor());
			if (enemy)
			{
				enemy->TakeDamage(10.0f);
				Cast<UGlobalManager>(UGameplayStatics::GetGameInstance(GetWorld()))->points += 10;
			}
			else //Play Environmental Sounds
			{
				//Check for Sounds
				if (environmentSounds.Num() > 0)
				{
					UGameplayStatics::PlaySoundAtLocation(
						GetWorld(), 
						environmentSounds[FMath::RandRange(0, environmentSounds.Num() - 1)], 
						Character->GetActorLocation());
				}
			}

			//Update Ammo Count
			Character->currentAmmo = Character->currentAmmo - 1;
		}
	
	// Try and play the sound if specified
	if (fireSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(this, fireSound, Character->GetActorLocation());
	}
	
	//Try and Spawn Particle System
	if (muzzleFlash != nullptr)
	{
		APlayerController* PlayerController = Cast<APlayerController>(Character->GetController());
		const FRotator SpawnRotation = PlayerController->PlayerCameraManager->GetCameraRotation();
		// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
		const FVector SpawnLocation = GetOwner()->GetActorLocation() + SpawnRotation.RotateVector(muzzleOffset);

		UNiagaraFunctionLibrary::SpawnSystemAtLocation(World, muzzleFlash, SpawnLocation, SpawnRotation);
	}
}

void UTP_WeaponComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if(Character != nullptr)
	{
		// Unregister from the OnUseItem Event
		Character->OnUseItem.RemoveDynamic(this, &UTP_WeaponComponent::Fire);
	}
}

void UTP_WeaponComponent::AttachWeapon(AExcommunicadoCharacter* TargetCharacter)
{
	Character = TargetCharacter;
	if(Character != nullptr)
	{
		// Attach the weapon to the First Person Character
		FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, true);
		GetOwner()->AttachToComponent(Character->GetMesh1P(),AttachmentRules, FName(TEXT("WeaponSocket")));

		// Register so that Fire is called every time the character tries to use the item being held
		Character->OnUseItem.AddDynamic(this, &UTP_WeaponComponent::Fire);
	}
}

