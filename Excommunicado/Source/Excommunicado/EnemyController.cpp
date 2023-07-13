// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyController.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "UObject/ConstructorHelpers.h"

AEnemyController::AEnemyController(FObjectInitializer const& objectInit)
{
	//Get Behavior Tree
	static ConstructorHelpers::FObjectFinder<UBehaviorTree> treeFinder(TEXT("BehaviorTree'/Game/Game/AI/BT_EnemyBT.BT_EnemyBT'"));
	if (treeFinder.Succeeded())
	{
		behaviorTree = treeFinder.Object;
	}

	//Initialize Tree and BlackBoard Components
	behaviorTreeComponent = objectInit.CreateDefaultSubobject<UBehaviorTreeComponent>(this, TEXT("BehaviorTree Component"));
	blackBoard = objectInit.CreateDefaultSubobject<UBlackboardComponent>(this, TEXT("BlackBoard Component"));
}

void AEnemyController::BeginPlay()
{
	Super::BeginPlay();

	//Run Behavior Tree
	RunBehaviorTree(behaviorTree);
	behaviorTreeComponent->StartTree(*behaviorTree);
}

void AEnemyController::OnPossess(APawn* pawn)
{
	//Run Default Possess Method
	Super::OnPossess(pawn);

	//Initialize BlackBoard
	if (blackBoard)
	{
		blackBoard->InitializeBlackboard(*behaviorTree->BlackboardAsset);
	}
}

UBlackboardComponent* AEnemyController::GetBlackboard() const
{
	return blackBoard;
}
