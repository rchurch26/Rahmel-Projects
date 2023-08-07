// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnemyManager.h"
#include "Enemy.generated.h"

UCLASS()
class EXCOMMUNICADO_API AEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Montage References
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UAnimMontage* attackMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
	UAnimMontage* deathMontage;

	//Sound References
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound")
	TArray<USoundBase*> attackSounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound")
	TArray<USoundBase*> deathSounds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound")
	USoundBase* enemyDamageSound;

	//Combat Fields
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float health = 30.0f;
	FVector worldSpawnLocation;
	bool inCombat = false;

	//Combat Methods
	void Attack();
	void TakeDamage(float damage);

	//Death Handling Methods
	void Die();
	void Reset();

	//Montage End Event Handler
	UFUNCTION()
		void HandleOnMontageEnded(UAnimMontage* montage, bool interrupted);

private:
	//Reference Enemy Manager
	AEnemyManager* enemyManger;
};
