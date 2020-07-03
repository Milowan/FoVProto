// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "../Menus/MainMenuWidget.h"
#include "../Menus/DetailsWidget.h"
#include "../Menus/InstructionsWidget.h"
#include "MainMenuHUD.generated.h"

/**
 * 
 */
UCLASS()
class FOVPROTO_API AMainMenuHUD : public AHUD
{
private:

	GENERATED_BODY()

	UMainMenuWidget* mainMenu;
	UDetailsWidget* details;
	UInstructionsWidget* instructions;
	

public:

	UPROPERTY(EditAnywhere)
	TSubclassOf<UMainMenuWidget> mainMenuBP;
	UPROPERTY(EditAnywhere)
	TSubclassOf<UDetailsWidget> detailsBP;
	UPROPERTY(EditAnywhere)
	TSubclassOf<UInstructionsWidget> instructionsBP;

protected:

	virtual void BeginPlay() override;

public:

	void OpenDetails();
	void CloseDetails();
	void OpenInstructions();
	void CloseInstructions();
	
};
