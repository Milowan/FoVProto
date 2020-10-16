// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "../../../Types.h"
#include "../../HUD/MainMenuHUD.h"
#include "CharacterScrollWidget.generated.h"

/**
 * 
 */
UCLASS()
class FOVPROTO_API UCharacterScrollWidget : public UUserWidget
{
private:

	GENERATED_BODY()

	Rank targetRank;

protected:

	virtual void NativeOnInitialized() override;

public:

	TEnumAsByte<Rank> GetTargetRank();
	void SetTargetRank(TEnumAsByte<Rank> rank);
	UFUNCTION()
	void ToggleDisplay(TEnumAsByte<Rank> rank);

};
