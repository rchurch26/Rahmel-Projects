// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyController.generated.h"

/**
 * 
 */
UCLASS()
class EXCOMMUNICADO_API AEnemyController : public AAIController
{
	GENERATED_BODY()
	
public:
	AEnemyController(FObjectInitializer const& objectInit);

	//Overrides
	void BeginPlay() override;
	void OnPossess(APawn* pawn) override;

	//Get BlackBoard Method
	class UBlackboardComponent* GetBlackboard() const;

	//Tree Componenents
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "AI")
	class UBehaviorTreeComponent* behaviorTreeComponent;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "AI")
	class UBehaviorTree* behaviorTree;

private:
	class UBlackboardComponent* blackBoard;
};
