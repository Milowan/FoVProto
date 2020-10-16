// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "../../../Characters/CharacterIDComponent.h"
#include "../../HUD/MainMenuHUD.h"
#include "CaptainStatsPanelWidget.generated.h"

/**
 * 
 */
UCLASS()
class FOVPROTO_API UCaptainStatsPanelWidget : public UUserWidget
{
private:

	GENERATED_BODY()

	UCharacterIDComponent* characterIDComponent;

protected:

	virtual void NativeOnInitialized();

public:

	UCaptainStatsPanelWidget(const FObjectInitializer& oi);

	UCharacterIDComponent* GetCharacterIDComponent();
	UFUNCTION()
	void SetTarget(ACaptainID* captain);
	UFUNCTION()
	void ToggleDisplay(TEnumAsByte<Rank> rank);

};
