// Fill out your copyright notice in the Description page of Project Settings.


#include "BTT_Attack.h"
#include "EnemyController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "EnemyKeys.h"

UBTT_Attack::UBTT_Attack(FObjectInitializer const& objectInit)
{
	NodeName = TEXT("Attack");
}

EBTNodeResult::Type UBTT_Attack::ExecuteTask(UBehaviorTreeComponent& treeComponent, uint8* nodeMemory)
{
	//Get AI Controller and Enemy Pawn
	AEnemyController* aiController = Cast<AEnemyController>(treeComponent.GetAIOwner());
	AEnemy* enemy = Cast<AEnemy>(aiController->GetPawn());

	//Check Attack Montage Complete
	if (attackMontageFinished(enemy))
	{
		//Get Key Value
		bool canAttack = aiController->GetBlackboard()->GetValueAsBool(EnemyKeys::IsPlayerInRange);
		if (canAttack)
		{
			//Call Attack Method
			enemy->Attack();
		}
	}

	return EBTNodeResult::Type();
}

bool UBTT_Attack::attackMontageFinished(AEnemy* enemy)
{
	UAnimInstance* animInstance = enemy->GetMesh()->GetAnimInstance();
	if (animInstance != nullptr)
	{
		return animInstance->Montage_GetIsStopped(enemy->attackMontage);
	}
	return false;
}
