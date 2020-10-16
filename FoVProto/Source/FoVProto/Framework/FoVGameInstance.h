// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Engine/World.h"
#include "../Squad/SquadInterface.h"
#include "FoVGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class FOVPROTO_API UFoVGameInstance : public UGameInstance
{
private:

	GENERATED_BODY()

	ISquadInterface* squadInterface;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> squadBP;

	static UFoVGameInstance* instance;

public:

	virtual void Init();

	static UFoVGameInstance* GetInstance();

	ISquadInterface* GetSquadInterface();
	
};
