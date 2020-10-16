// Fill out your copyright notice in the Description page of Project Settings.


#include "Team.h"

ATeam::ATeam()
{
	characters = CreateDefaultSubobject<UCharacterGroupComponent>(TEXT("TeamMembers"));
}

int ATeam::GetID()
{
	return teamID;
}

void ATeam::SetID(int value)
{
	teamID = value;
}

UCharacterGroupComponent* ATeam::GetCharacters()
{
	return characters;
}

FString ATeam::GetTeamName()
{
	return teamName;
}

void ATeam::SetTeamName(FString name)
{
	teamName = name;
}