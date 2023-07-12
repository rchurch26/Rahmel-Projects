// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"

// Sets default values
AWeapon::AWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mesh = CreateDefaultSubobject<UStaticMeshComponent>("Weapon Mesh");
	mesh->SetupAttachment(RootComponent);

	weaponComponent = CreateDefaultSubobject<UTP_WeaponComponent>("Weapon Component");
}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();

	//Assign Weapon Component Variables
	weaponComponent->fireSound = fireSound;
	weaponComponent->emptySound = emptySound;
	weaponComponent->environmentSounds = environmentSounds;
	weaponComponent->muzzleOffset = muzzleOffset;
	weaponComponent->muzzleFlash = muzzleFlash;
}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

