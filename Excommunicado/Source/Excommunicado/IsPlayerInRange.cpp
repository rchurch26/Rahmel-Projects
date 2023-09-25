// Fill out your copyright notice in the Description page of Project Settings.


#include "IsPlayerInRange.h"
#include "Kismet/GAmeplayStatics.h"
#include "EnemyController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "EnemyKeys.h"

UIsPlayerInRange::UIsPlayerInRange()
{
	range = 100.0f;
	bNotifyBecomeRelevant = true;
	NodeName = TEXT("Is Player In Range");
}

void UIsPlayerInRange::OnBecomeRelevant(UBehaviorTreeComponent& treeComponent, uint8* nodeMem)
{
	//Super Call
	Super::OnBecomeRelevant(treeComponent, nodeMem);

	//Get AI Controller and Pawn
	AEnemyController* aiController = Cast<AEnemyController>(treeComponent.GetAIOwner());
	APawn* enemy = aiController->GetPawn();

	//Get Player Controller and Pawn
	APlayerController* playerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);

	//Set Blackboard Key
	aiController->GetBlackboard()->SetValueAsBool(EnemyKeys::IsPlayerInRange, enemy->GetDistanceTo(playerController->GetPawn()) <= range);
}
