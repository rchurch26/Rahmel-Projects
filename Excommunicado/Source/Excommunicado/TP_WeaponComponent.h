// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "TP_WeaponComponent.generated.h"

class AExcommunicadoCharacter;

UCLASS(Blueprintable, BlueprintType, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class EXCOMMUNICADO_API UTP_WeaponComponent : public UActorComponent
{
	GENERATED_BODY()

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
	FVector muzzleOffset;

	//Muzzle Flash
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SFX")
	UNiagaraSystem* muzzleFlash;

	/** Sets default values for this component's properties */
	UTP_WeaponComponent();

	/** Attaches the actor to a FirstPersonCharacter */
	UFUNCTION(BlueprintCallable, Category="Weapon")
	void AttachWeapon(AExcommunicadoCharacter* TargetCharacter);

	/** Make the weapon Fire a Projectile */
	UFUNCTION(BlueprintCallable, Category="Weapon")
	void Fire();

protected:
	/** Ends gameplay for this component. */
	UFUNCTION()
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
		

private:
	/** The Character holding this weapon*/
	AExcommunicadoCharacter* Character;
};
