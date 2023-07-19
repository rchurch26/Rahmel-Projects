// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "Enemy.h"
#include "BTT_Attack.generated.h"

/**
 * 
 */
UCLASS()
class EXCOMMUNICADO_API UBTT_Attack : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	UBTT_Attack(FObjectInitializer const& objectInit);
	EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& treeComponent, uint8* nodeMemory);
	bool attackMontageFinished(AEnemy* enemy);
};
