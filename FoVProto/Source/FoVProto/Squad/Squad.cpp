// Fill out your copyright notice in the Description page of Project Settings.


#include "Squad.h"

ASquad::ASquad()
{
	formations = CreateDefaultSubobject<UFormationComponent>(TEXT("FormationComponent"));
	characters = CreateDefaultSubobject<UCharacterGroupComponent>(TEXT("CharacterGroupComponent"));
	teams = CreateDefaultSubobject<UTeamComponent>(TEXT("TeamComponent"));
	captain = CreateDefaultSubobject<UCharacterIDComponent>(TEXT("CaptainComponent"));
}

UFormationComponent* ASquad::GetFormations()
{
	return formations;
}

UCharacterGroupComponent* ASquad::GetCharacters()
{
	return characters;
}

UTeamComponent* ASquad::GetTeams()
{
	return teams;
}

UCharacterIDComponent* ASquad::GetCaptainComponent()
{
	return captain;
}

TArray<ACharacter*> ASquad::GetAllCharacters()
{
	TArray<ACharacter*> squad;

	squad.Add(characters->GetGroup()->GetCharacter(0)->GetCharacterID()->GetCharacter());

	squad.Add(captain->GetCharacterID()->GetCharacter());

	return squad;
}