// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy.h"
#include "Kismet/GameplayStatics.h"
#include "ExcommunicadoCharacter.h"

// Sets default values
AEnemy::AEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemy::BeginPlay()
{
	Super::BeginPlay();
	
	//Bind Events
	GetMesh()->GetAnimInstance()->OnMontageEnded.AddDynamic(this, &AEnemy::HandleOnMontageEnded);
}

// Called every frame
void AEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AEnemy::Attack()
{
	UAnimInstance* animInstance = GetMesh()->GetAnimInstance();
	if (animInstance != nullptr)
	{
		//Play Attack Montage
		if (attackMontage != nullptr)
		{
			animInstance->Montage_Play(attackMontage);
			
			//Get Player Reference
			AExcommunicadoCharacter* player = Cast<AExcommunicadoCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
			player->TakeDamage(10.0f);

			//Play Attack Sounds
			if (attackSounds.Num() > 0)
			{
				UGameplayStatics::PlaySoundAtLocation(GetWorld(), attackSounds[FMath::RandRange(0, attackSounds.Num() - 1)], GetActorLocation());
			}
		}
	}
}

void AEnemy::TakeDamage(float damage)
{
	//Check if Dead
	UAnimInstance* animInstance = GetMesh()->GetAnimInstance();
	if (animInstance != nullptr)
	{
		if (animInstance->Montage_IsPlaying(deathMontage))
		{
			return;
		}
	}

	//Play Damage Indicator
	if (enemyDamageSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), enemyDamageSound, GetActorLocation());
	}

	//Deal Damage
	health -= damage;

	//Handle Death
	if (health <= 0)
	{
		Die();
	}
}

void AEnemy::Die()
{
	//Play Death Sounds
	if (deathSounds.Num() > 0)
	{
		UGameplayStatics::PlaySoundAtLocation(GetWorld(), deathSounds[FMath::RandRange(0, deathSounds.Num() - 1)], GetActorLocation());
	}

	//Play Death Montage
	UAnimInstance* animInstance = GetMesh()->GetAnimInstance();
	if (animInstance != nullptr)
	{
		if (deathMontage != nullptr)
		{
			animInstance->Montage_Play(deathMontage);
		}
	}
}

void AEnemy::Reset()
{
	//TODO After Enemy Manager
}

void AEnemy::HandleOnMontageEnded(UAnimMontage* montage, bool interrupted)
{
	//Check Death Montage
	if (montage->GetName().Contains("Death"))
	{
		//Reset();
		Destroy();
	}
}

