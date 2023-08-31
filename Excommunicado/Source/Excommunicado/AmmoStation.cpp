// Fill out your copyright notice in the Description page of Project Settings.


#include "AmmoStation.h"
#include "Components/CapsuleComponent.h"
#include "ExcommunicadoCharacter.h"

// Sets default values
AAmmoStation::AAmmoStation()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Create Mesh
	mesh = CreateDefaultSubobject<UStaticMeshComponent>("Box Mesh");
	mesh->SetupAttachment(RootComponent);

	//Create Capsule Component
	capsuleComponent = CreateDefaultSubobject<UCapsuleComponent>("Collider");
	capsuleComponent->InitCapsuleSize(55.0f, 96.0f);
	capsuleComponent->SetupAttachment(mesh);

	//Register Overlap Events
	capsuleComponent->OnComponentBeginOverlap.AddDynamic(this, &AAmmoStation::OnCapsuleBeginOverlap);
	capsuleComponent->OnComponentEndOverlap.AddDynamic(this, &AAmmoStation::OnCapsuleEndOverlap);
}

// Called when the game starts or when spawned
void AAmmoStation::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAmmoStation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAmmoStation::OnCapsuleBeginOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComponent, int32 otherBodyIndex, bool fromSweep, const FHitResult& sweepResult)
{
	//Set player to being able to interact with station
	AExcommunicadoCharacter* player = Cast<AExcommunicadoCharacter>(otherActor);
	player->canInteract = true;
}

void AAmmoStation::OnCapsuleEndOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComponent, int32 otherBodyIndex)
{
	//Set player to not being able to interact with station
	AExcommunicadoCharacter* player = Cast<AExcommunicadoCharacter>(otherActor);
	player->canInteract = false;
}

