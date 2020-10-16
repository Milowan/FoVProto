// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "../../../Characters/CharacterIDComponent.h"
#include "../../HUD/MainMenuHUD.h"
#include "SubordinateStatsPanelWidget.generated.h"

/**
 * 
 */
UCLASS()
class FOVPROTO_API USubordinateStatsPanelWidget : public UUserWidget
{
private:

	GENERATED_BODY()

	UCharacterIDComponent* characterIDComponent;

protected:

	virtual void NativeOnInitialized() override;

public:

	USubordinateStatsPanelWidget(const FObjectInitializer& oi);

	UCharacterIDComponent* GetCharacterIDComponent();
	UFUNCTION()
	void SetTargetCharacter(ASubordinateID* ID);
	UFUNCTION()
	void ToggleDisplay(TEnumAsByte<Rank> rank);

};
