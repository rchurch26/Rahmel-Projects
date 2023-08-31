// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GlobalManager.generated.h"

/**
 * 
 */
UCLASS()
class EXCOMMUNICADO_API UGlobalManager : public UGameInstance
{
	GENERATED_BODY()
public:
	//Total Player Point Tracker
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int points = 0;
};
