// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "IsPlayerInRange.generated.h"

/**
 * 
 */
UCLASS()
class EXCOMMUNICADO_API UIsPlayerInRange : public UBTService_BlackboardBase
{
	GENERATED_BODY()
public:
	//Constructor
	UIsPlayerInRange();

	//CallService Method
	void OnBecomeRelevant(UBehaviorTreeComponent& treeComponent, uint8* nodeMem);

	//Range Field
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	float range;
};
