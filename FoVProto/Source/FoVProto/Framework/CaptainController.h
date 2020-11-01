// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Engine/LocalPlayer.h"
#include "FoVGameInstance.h"
#include "../Squad/Squad.h"
#include "CaptainController.generated.h"

/**
 * 
 */
UCLASS()
class FOVPROTO_API ACaptainController : public APlayerController
{
private:

	GENERATED_BODY()

protected:

	virtual void BeginPlay() override;

public:

	TSubclassOf<ACharacter> GetSelectedCharacter();

};
