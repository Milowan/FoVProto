// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Squad.h"
#include "Engine/World.h"
#include "DefaultSquad.generated.h"

/**
 * 
 */
UCLASS()
class FOVPROTO_API ADefaultSquad : public ASquad
{
private:

	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TSubclassOf<ACharacterID> character1BP;
	UPROPERTY(EditAnywhere)
	TSubclassOf<ACharacterID> character2BP;
	UPROPERTY(EditAnywhere)
	TSubclassOf<ACharacterID> character3BP;
	UPROPERTY(EditAnywhere)
	TSubclassOf<ACharacterID> character4BP;
	UPROPERTY(EditAnywhere)
	TSubclassOf<ACharacterID> character5BP;
	UPROPERTY(EditAnywhere)
	TSubclassOf<ACharacterID> character6BP;
	UPROPERTY(EditAnywhere)
	TSubclassOf<ACharacterID> character7BP;
	UPROPERTY(EditAnywhere)
	TSubclassOf<ACharacterID> character8BP;
	UPROPERTY(EditAnywhere)
	TSubclassOf<ACharacterID> captainBP;

protected:

	virtual void BeginPlay() override;

};
