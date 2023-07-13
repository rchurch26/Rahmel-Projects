// Fill out your copyright notice in the Description page of Project Settings.


#include "BTT_FindPlayerLocation.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationSystem.h"
#include "EnemyController.h"
#include "EnemyKeys.h"
#include "Kismet/GameplayStatics.h"

UBTT_FindPlayerLocation::UBTT_FindPlayerLocation(FObjectInitializer const& objectInit)
{
	NodeName = TEXT("Find Player Location");
}

EBTNodeResult::Type UBTT_FindPlayerLocation::ExecuteTask(UBehaviorTreeComponent& treeComponent, uint8* nodeMemory)
{
	//Get AI Controller
	auto const aiController = Cast<AEnemyController>(treeComponent.GetAIOwner());

	//Get Nav System
	UNavigationSystemV1* navSystem = UNavigationSystemV1::GetCurrent(GetWorld());

	//Player Reference
	APlayerController* playerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	APawn* player = playerController->GetPawn();

	if (navSystem)
	{
		//Set Target Location as Player Location
		aiController->GetBlackboard()->SetValueAsVector(EnemyKeys::targetLocation, player->GetActorLocation());
	}

	//Finish Execution
	FinishLatentTask(treeComponent, EBTNodeResult::Succeeded);
	return EBTNodeResult::Succeeded;
}
