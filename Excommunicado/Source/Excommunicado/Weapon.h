// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TP_WeaponComponent.h"
#include "Weapon.generated.h"

UCLASS()
class EXCOMMUNICADO_API AWeapon : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly, Category = "Mesh")
	UStaticMeshComponent* mesh;
	
public:	
	//Weapon Sounds
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound")
	USoundBase* fireSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound")
	USoundBase* emptySound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sound")
	TArray<USoundBase*> environmentSounds;

	//Muzzle Offset
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
	FVector muzzleOffset = FVector(100.0f, 0.0f, 10.0f);

	//Muzzle Flash
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SFX")
	UNiagaraSystem* muzzleFlash;

	// Sets default values for this actor's properties
	AWeapon();

	//Weapon Component
	UTP_WeaponComponent* weaponComponent;

	//Magazine Size
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
	int magSize = 8;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Gameplay")
	int maxAmmo = 80;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
