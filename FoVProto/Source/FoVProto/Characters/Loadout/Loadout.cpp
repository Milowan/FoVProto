// Fill out your copyright notice in the Description page of Project Settings.


#include "Loadout.h"

// Sets default values
ALoadout::ALoadout()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	gear = CreateDefaultSubobject<UGearComponent>(TEXT("Gear"));
	weapons = CreateDefaultSubobject<UWeaponComponent>(TEXT("Weapons"));
}

// Called when the game starts or when spawned
void ALoadout::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALoadout::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

UGearComponent* ALoadout::GetGear()
{
	return gear;
}

UWeaponComponent* ALoadout::GetWeapon()
{
	return weapons;
}