// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FoVCharacter.h"
#include "SubordinateCharacter.generated.h"

/**
 * 
 */
UCLASS()
class FOVPROTO_API ASubordinateCharacter : public AFoVCharacter
{
private:

	GENERATED_BODY()

	FVector positionInFormation;
	AFoVCharacter* target;

public:

	ASubordinateCharacter();

	UFUNCTION(BlueprintCallable)
	FVector GetPositionInFormation();
	UFUNCTION(BlueprintCallable)
	void SetPositionInFormation(FVector position);
	UFUNCTION(BlueprintCallable)
	AFoVCharacter* GetTarget();
	UFUNCTION(BlueprintCallable)
	void SetTarget(AFoVCharacter* aTarget);
	
};
