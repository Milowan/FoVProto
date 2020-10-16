// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "../../../Squad/Team.h"
#include "TeamSlotWidget.generated.h"

/**
 * 
 */
UCLASS()
class FOVPROTO_API UTeamSlotWidget : public UUserWidget
{
private:

	GENERATED_BODY()

	ATeam* team;

public:

	UFUNCTION(BlueprintCallable)
	void SetTeam(ATeam* aTeam);
	UFUNCTION(BlueprintCallable)
	ATeam* GetTeam();
	
};
