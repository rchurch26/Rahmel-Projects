// Fill out your copyright notice in the Description page of Project Settings.


#include "BTT_ChasePlayer.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationSystem.h"
#include "EnemyController.h"
#include "EnemyKeys.h"
#include "Kismet/GameplayStatics.h"

UBTT_ChasePlayer::UBTT_ChasePlayer(FObjectInitializer const& objectInit)
{
	NodeName = TEXT("Chase Player");
}

EBTNodeResult::Type UBTT_ChasePlayer::ExecuteTask(UBehaviorTreeComponent& treeComponent, uint8* nodeMemory)
{
	//Get AI Controller
	auto const aiController = Cast<AEnemyController>(treeComponent.GetAIOwner());

	//Get Nav System
	UNavigationSystemV1* navSystem = UNavigationSystemV1::GetCurrent(GetWorld());

	if (navSystem)
	{
		//Get Player Location
		FVector location = aiController->GetBlackboard()->GetValueAsVector(EnemyKeys::targetLocation);

		//Move AI
		aiController->MoveToLocation(location);
	}

	//Finish Execution
	FinishLatentTask(treeComponent, EBTNodeResult::Succeeded);
	return EBTNodeResult::Succeeded;
}
