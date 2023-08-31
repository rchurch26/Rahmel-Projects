// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExcommunicadoCharacter.h"
#include "AmmoStation.generated.h"

UCLASS()
class EXCOMMUNICADO_API AAmmoStation : public AActor
{
	GENERATED_BODY()

	//Ammo Station Mesh
	UPROPERTY(VisibleDefaultsOnly, Category = "Mesh")
	UStaticMeshComponent* mesh;

	//Trigger Capsule Collider
	UPROPERTY(VisibleAnywhere, Category = "Trigger Capsule")
	UCapsuleComponent* capsuleComponent;
	
public:	
	// Sets default values for this actor's properties
	AAmmoStation();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//BeginOverlap Event Handler
	UFUNCTION()
	void OnCapsuleBeginOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComponent,
		int32 otherBodyIndex, bool fromSweep, const FHitResult& sweepResult);

	//EndOverlap Event Handler
	UFUNCTION()
	void OnCapsuleEndOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComponent, int32 otherBodyIndex);
};
