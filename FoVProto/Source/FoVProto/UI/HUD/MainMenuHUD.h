// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "../Menus/MainMenuWidget.h"
#include "../Menus/DetailsWidget.h"
#include "../Menus/InstructionsWidget.h"
#include "../Menus/GameMenuWidget.h"
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
	UGameMenuWidget* gameMenu;
	

public:

	UPROPERTY(EditAnywhere)
	TSubclassOf<UMainMenuWidget> mainMenuBP;
	UPROPERTY(EditAnywhere)
	TSubclassOf<UDetailsWidget> detailsBP;
	UPROPERTY(EditAnywhere)
	TSubclassOf<UInstructionsWidget> instructionsBP;
	UPROPERTY(EditAnywhere)
	TSubclassOf<UGameMenuWidget> gameMenuBP;

protected:

	virtual void BeginPlay() override;

public:

	UFUNCTION(BlueprintCallable)
	void OpenDetails();
	UFUNCTION(BlueprintCallable)
	void CloseDetails();
	UFUNCTION(BlueprintCallable)
	void OpenInstructions();
	UFUNCTION(BlueprintCallable)
	void CloseInstructions();
	UFUNCTION(BlueprintCallable)
	void OpenGameMenu();
	UFUNCTION(BlueprintCallable)
	void CloseGameMenu();
	UFUNCTION(BlueprintCallable)
	void OpenOptions();
	UFUNCTION(BlueprintCallable)
	void CloseOptions();
	UFUNCTION(BlueprintCallable)
	void OpenFormationMenu();
	UFUNCTION(BlueprintCallable)
	void CloseFormationMenu();
	UFUNCTION(BlueprintCallable)
	void OpenSquadMenu();
	UFUNCTION(BlueprintCallable)
	void CloseSquadMenu();
	UFUNCTION(BlueprintCallable)
	void OpenShopMenu();
	UFUNCTION(BlueprintCallable)
	void CloseShopMenu();
	UFUNCTION(BlueprintCallable)
	void OpenTradeMenu();
	UFUNCTION(BlueprintCallable)
	void CloseTradeMenu();
	UFUNCTION(BlueprintCallable)
	void OpenTeamMenu();
	UFUNCTION(BlueprintCallable)
	void CloseTeamMenu();
	UFUNCTION(BlueprintCallable)
	void OpenFriendsMenu();
	UFUNCTION(BlueprintCallable)
	void CloseFriendsMenu();
	
};
