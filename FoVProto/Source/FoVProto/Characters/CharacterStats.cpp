// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterStats.h"

// Sets default values
ACharacterStats::ACharacterStats()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACharacterStats::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharacterStats::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int ACharacterStats::GetStrength()
{
	return strength;
}

int ACharacterStats::GetDexterity()
{
	return dexterity;
}

int ACharacterStats::GetEndurance()
{
	return endurance;
}

int ACharacterStats::GetIntelligence()
{
	return intelligence;
}

int ACharacterStats::GetPerception()
{
	return perception;
}