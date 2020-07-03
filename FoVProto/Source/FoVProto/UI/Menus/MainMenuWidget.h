// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainMenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class FOVPROTO_API UMainMenuWidget : public UUserWidget
{
private:

	GENERATED_BODY()
	
public:

	UMainMenuWidget(const FObjectInitializer& OI);
	virtual void NativeConstruct() override;

};
