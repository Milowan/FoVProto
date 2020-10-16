// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CharacterGroupComponent.h"
#include "Team.generated.h"

/**
 * 
 */
UCLASS()
class FOVPROTO_API ATeam : public AActor
{
private:

	GENERATED_BODY()

	int teamID;
	UCharacterGroupComponent* characters;
	FString teamName;

public:

	ATeam();

	int GetID();
	void SetID(int value);
	UFUNCTION(BlueprintCallable)
	UCharacterGroupComponent* GetCharacters();
	UFUNCTION(BlueprintCallable)
	FString GetTeamName();
	UFUNCTION(BlueprintCallable)
	void SetTeamName(FString name);

};
