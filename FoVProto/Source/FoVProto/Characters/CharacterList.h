// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FoVCharacter.h"
#include "CharacterList.generated.h"

/**
 * 
 */
UCLASS()
class FOVPROTO_API ACharacterList : public AActor
{
private:

	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TArray<AFoVCharacter*> characters;

public:

	UFUNCTION(BlueprintCallable)
	TArray<AFoVCharacter*>& GetCharacters();
	
};
