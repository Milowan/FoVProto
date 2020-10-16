// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../Characters/CharacterIDComponent.h"
#include "CharacterGroup.generated.h"

/**
 * 
 */
UCLASS()
class FOVPROTO_API ACharacterGroup : public AActor
{
private:

	GENERATED_BODY()

	UCharacterIDComponent* character1;
	UCharacterIDComponent* character2;
	UCharacterIDComponent* character3;
	UCharacterIDComponent* character4;
	UCharacterIDComponent* character5;
	UCharacterIDComponent* character6;
	UCharacterIDComponent* character7;
	UCharacterIDComponent* character8;

public:

	ACharacterGroup();

	UFUNCTION(BlueprintCallable)
	UCharacterIDComponent* GetCharacter(int index);
};
