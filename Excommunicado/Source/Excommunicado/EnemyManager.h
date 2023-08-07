// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyManager.generated.h"

UCLASS()
class EXCOMMUNICADO_API AEnemyManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyManager();

	//Enemy Container
	TArray<AActor*> enemies;

	//Fields
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Management")
	TArray<FVector> spawnLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Management")
	int firstWaveCount = 5;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Management")
	int currentWave = 1;

	int waveSize;
	int waveKills = 0;

	//Spawn Method
	void SpawnFirstWave();
	void UpdateWaveParameters();
	void StartNextWave();
	void SpawnEnemies();
	TArray<AActor*> GetAllEnemiesInCombat();
	void ModifyWaveSpeeds();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//Fields
	float minWalkSpeed = 70.0f;
	float maxWalkSpeed = 120.0f;
	int maxEnemies = 5;
};
