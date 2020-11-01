// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "../Side.h"
#include "FoVGameMode.generated.h"

/**
 * 
 */
UCLASS()
class FOVPROTO_API AFoVGameMode : public AGameMode
{
private:

	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	ASide* sideA;
	UPROPERTY(EditAnywhere)
	ASide* sideB;

	TArray<ACharacter*> characters;
	TArray<AActor*> playerSpawns;
	
protected:

	virtual void BeginPlay() override;

public:

	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;

	void SetCharacters();
	UFUNCTION(BlueprintCallable)
	TArray<ACharacter*>& GetCharacters();
	UFUNCTION(BlueprintCallable)
	void SetPlayerSpawns(TArray<AActor*> spawns);
	UFUNCTION(BlueprintCallable)
	TArray<AActor*> GetPlayerSpawns();

};
