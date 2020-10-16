// Fill out your copyright notice in the Description page of Project Settings.


#include "FoVCharacter.h"

// Sets default values
AFoVCharacter::AFoVCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	loadoutComponent = CreateDefaultSubobject<ULoadoutComponent>(FName(TEXT("Loadout Component")));
	statsComponent = CreateDefaultSubobject<UStatsComponent>(FName(TEXT("Stats Component")));
	equipedWeapon = CreateDefaultSubobject<UWeaponComponent>(FName(TEXT("Equiped Weapon Component")));

}

// Called when the game starts or when spawned
void AFoVCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFoVCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFoVCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

ULoadoutComponent* AFoVCharacter::GetLoadoutComponent()
{
	return loadoutComponent;
}

UStatsComponent* AFoVCharacter::GetStatsComponent()
{
	return statsComponent;
}

UWeaponComponent* AFoVCharacter::GetEquipedWeaponComponent()
{
	return equipedWeapon;
}

TEnumAsByte<Rank> AFoVCharacter::GetRank()
{
	return characterRank;
}

void AFoVCharacter::SetRank(TEnumAsByte<Rank> rank)
{
	characterRank = rank;
}