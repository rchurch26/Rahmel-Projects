// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyManager.h"
#include "Enemy.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AEnemyManager::AEnemyManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void AEnemyManager::SpawnFirstWave()
{
	//Check if there are enemies
	if (enemies.Num() > 0)
	{
		//Initialize Spawn Count
		int spawnCount = 0;

		//Go Through Enemies
		for (int i = 0; i < enemies.Num(); i++)
		{
			//Break when firstWaveCount is reached
			if (spawnCount == firstWaveCount)
			{
				break;
			}
			//Cast Actor to Enemy
			AEnemy* enemy = Cast<AEnemy>(enemies[i]);

			//Delay Collisions
			enemy->SetActorEnableCollision(false);
			enemy->TeleportTo(spawnLocation[FMath::RandRange(0, spawnLocation.Num() - 1)], enemy->GetActorRotation());
			enemy->SetActorEnableCollision(true);

			//Set Combat Status
			enemy->inCombat = true;

			//Update Spawn Count
			spawnCount++;
		}
	}
}

void AEnemyManager::UpdateWaveParameters()
{
	//Update wave info
	currentWave += 1;
	waveKills = 0;
	waveSize += 4;
	maxEnemies += 2;
	if (maxEnemies >= enemies.Num())
	{
		maxEnemies = enemies.Num() - 1;
	}

	//Update Walk Speeds
	maxWalkSpeed += 100.0f;
	if (maxWalkSpeed > 400.0f)
	{
		maxWalkSpeed = 400.0f;
	}
	minWalkSpeed += 50.0f;
	if (minWalkSpeed > 350.0f)
	{
		minWalkSpeed = 350.0f;
	}
}

void AEnemyManager::StartNextWave()
{
	//Initialize Spawn Count
	int spawnCount = 0;

	//Go through enemies
	for (int i = 0; i < enemies.Num(); i++)
	{
		//Break when max enemies reached or full wave spawned
		if (spawnCount == maxEnemies || spawnCount == waveSize)
		{
			break;
		}

		//Cast to enemy
		AEnemy* enemy = Cast<AEnemy>(enemies[i]);

		//Check if enemy is in combat
		if (!enemy->inCombat)
		{
			//Delay Collisions
			enemy->SetActorEnableCollision(false);
			enemy->TeleportTo(spawnLocation[FMath::RandRange(0, spawnLocation.Num() - 1)], enemy->GetActorRotation());
			enemy->SetActorEnableCollision(true);

			//Set Combat Status
			enemy->inCombat = true;

			//Update Spawn Count
			spawnCount++;
		}
	}

	//Update Wave Speeds
	ModifyWaveSpeeds();
}

void AEnemyManager::SpawnEnemies()
{
	//Check if necessary kills are reached
	int neededKills = waveSize - waveKills;
	if (neededKills > 0)
	{
		if (GetAllEnemiesInCombat().Num() < neededKills)
		{
			//Check if Arena is Full
			if (GetAllEnemiesInCombat().Num() < maxEnemies)
			{
				//Go through enemies
				for (int i = 0; i < enemies.Num(); i++)
				{
					//Cast to enemy
					AEnemy* enemy = Cast<AEnemy>(enemies[i]);

					//Check if enemy is in combat
					if (!enemy->inCombat)
					{
						//Delay Collisions
						enemy->SetActorEnableCollision(false);
						enemy->TeleportTo(spawnLocation[FMath::RandRange(0, spawnLocation.Num() - 1)], enemy->GetActorRotation());
						enemy->SetActorEnableCollision(true);

						//Set Combat Status
						enemy->inCombat = true;
						break;
					}
				}
			}
		}
	}
}

TArray<AActor*> AEnemyManager::GetAllEnemiesInCombat()
{
	//Go through enemies and add to new list of all enemies in combat
	TArray<AActor*> enemiesInCombat = TArray<AActor*>();
	for (AActor* actor : enemies)
	{
		//Cast to enemy
		AEnemy* enemy = Cast<AEnemy>(actor);
		
		//Add to list if inCombat
		if (enemy->inCombat)
		{
			enemiesInCombat.Add(actor);
		}
	}
	return enemiesInCombat;
}

void AEnemyManager::ModifyWaveSpeeds()
{
	//Go through enemies
	for (int i = 0; i < enemies.Num(); i++)
	{
		//Cast to enemy
		AEnemy* enemy = Cast<AEnemy>(enemies[i]);

		//Update Speed
		enemy->GetCharacterMovement()->MaxWalkSpeed = FMath::RandRange(minWalkSpeed, maxWalkSpeed);
	}
}

// Called when the game starts or when spawned
void AEnemyManager::BeginPlay()
{
	Super::BeginPlay();
	
	//Get Enemy Actors and Store them
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnemy::StaticClass(), enemies);

	//Delay Enemy Spawn
	FTimerHandle timerHandle;
	GetWorld()->GetTimerManager().SetTimer(timerHandle, [&]()
		{
			//Spawn Enemy Default Count
			SpawnFirstWave();

			//Modify Wave Speed
			ModifyWaveSpeeds();
		}, 3, false);

	//Initialize Wave Size
	waveSize = firstWaveCount;
}

// Called every frame
void AEnemyManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

