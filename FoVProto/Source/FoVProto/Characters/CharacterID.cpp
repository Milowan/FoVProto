// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterID.h"

ACharacterID::ACharacterID()
{
	loadout = CreateDefaultSubobject<ULoadoutComponent>(TEXT("Loadout"));
	statsComponent = CreateDefaultSubobject<UStatsComponent>(TEXT("Stats"));
}

void ACharacterID::BeginPlay()
{
	Super::BeginPlay();

	statsComponent->SetStats(Cast<ACharacterStats>(GetGameInstance()->GetWorld()->SpawnActor(statsBP)));

}

ACharacter* ACharacterID::GetCharacter()
{
	if (character == NULL)
	{
		character = Cast<ACharacter>(GetGameInstance()->GetWorld()->SpawnActor(characterBP));
	}
	return character;
}

ULoadoutComponent* ACharacterID::GetLoadout()
{
	return loadout;
}

UStatsComponent* ACharacterID::GetStatsComponent()
{
	return statsComponent;
}

FString ACharacterID::GetName()
{
	return characterName;
}

void ACharacterID::SetName(FString name)
{
	characterName = name;
}

TEnumAsByte<Rank> ACharacterID::GetRank()
{
	return characterRank;
}

void ACharacterID::SetRank(TEnumAsByte<Rank> rank)
{
	characterRank = rank;
}