// Fill out your copyright notice in the Description page of Project Settings.


#include "Side.h"

// Sets default values
ASide::ASide()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASide::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASide::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

TArray<ACharacter*> ASide::GetAllCharacters()
{
	TArray<ACharacter*> characters;

	for (int i = 0; i < MAXSQUADS; ++i)
	{
		if (IsValid(squads[i]))
		{
			TArray<ACharacter*> squadCharacters = squads[i]->GetAllCharacters();
			for (int j = 0; j < squadCharacters.Num(); ++j)
			{
				characters.Add(squadCharacters[j]);
			}
		}
	}

	return characters;
}