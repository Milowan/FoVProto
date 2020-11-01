// Fill out your copyright notice in the Description page of Project Settings.


#include "FoVGameMode.h"

void AFoVGameMode::BeginPlay()
{
	Super::BeginPlay();

	SetCharacters();

}

void AFoVGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	sideA = Cast<ASide>(GetWorld()->SpawnActor<ASide>(ASide::StaticClass()));
	sideB = Cast<ASide>(GetWorld()->SpawnActor<ASide>(ASide::StaticClass()));
	int players = GetNumPlayers();
}

void AFoVGameMode::SetCharacters()
{
	TArray<ACharacter*> sideCharacters;

	sideCharacters = sideA->GetAllCharacters();
	for (int i = 0; i < sideCharacters.Num(); ++i)
	{
		characters.Add(sideCharacters[i]);
	}

	sideCharacters = sideB->GetAllCharacters();
	for (int i = 0; i < sideCharacters.Num(); ++i)
	{
		characters.Add(sideCharacters[i]);
	}
}

TArray<ACharacter*>& AFoVGameMode::GetCharacters()
{
	return characters;
}

void AFoVGameMode::SetPlayerSpawns(TArray<AActor*> spawns)
{
	playerSpawns = spawns;
}

TArray<AActor*> AFoVGameMode::GetPlayerSpawns()
{
	return playerSpawns;
}