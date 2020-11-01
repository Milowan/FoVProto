// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "Engine/GameInstance.h"
#include "Engine/World.h"
#include "Loadout/LoadoutComponent.h"
#include "StatsComponent.h"
#include "../Types.h"
#include "CharacterID.generated.h"

/**
 * 
 */
UCLASS()
class FOVPROTO_API ACharacterID : public AActor
{
private:

	GENERATED_BODY()

	ACharacter* character;
	ULoadoutComponent* loadout;
	UStatsComponent* statsComponent;

	Rank characterRank;

protected:

	UPROPERTY(EditAnywhere)
	TSubclassOf<ACharacter> characterBP;

	UPROPERTY(EditAnywhere)
	FString characterName;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ACharacterStats> statsBP;

protected:

	virtual void BeginPlay() override;

public:

	ACharacterID();

	ACharacter* GetCharacter();
	ULoadoutComponent* GetLoadout();
	UStatsComponent* GetStatsComponent();
	FString GetName();
	void SetName(FString name);

	TSubclassOf<ACharacter> GetBP();

	UFUNCTION(BlueprintCallable)
	TEnumAsByte<Rank> GetRank();
	void SetRank(TEnumAsByte<Rank> rank);

};
