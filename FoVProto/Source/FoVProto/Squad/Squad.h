// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SquadInterface.h"
#include "FormationComponent.h"
#include "TeamComponent.h"
#include "CharacterGroupComponent.h"
#include "Containers/Array.h"
#include "Squad.generated.h"

/**
 * 
 */
UCLASS()
class FOVPROTO_API ASquad : public AActor, public ISquadInterface
{
private:

	GENERATED_BODY()

	UFormationComponent* formations;
	UCharacterGroupComponent* characters;
	UTeamComponent* teams;
	UCharacterIDComponent* captain;

public:

	ASquad();

	UFUNCTION(BlueprintCallable)
	UFormationComponent* GetFormations();
	UFUNCTION(BlueprintCallable)
	UCharacterGroupComponent* GetCharacters();
	UFUNCTION(BlueprintCallable)
	UTeamComponent* GetTeams();
	UFUNCTION(BlueprintCallable)
	UCharacterIDComponent* GetCaptainComponent();

	TArray<ACharacter*> GetAllCharacters();
	
};
