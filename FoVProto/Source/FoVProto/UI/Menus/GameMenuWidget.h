// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameMenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class FOVPROTO_API UGameMenuWidget : public UUserWidget
{
private:

	GENERATED_BODY()

public:

	void PlayDemo();
	void PlayConquest();
	void PlayAnnihilation();
	void PlaySabotage();
	
};
