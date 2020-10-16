// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FoVHUD.h"
#include "../../Framework/FoVGameInstance.h"
#include "../Menus/DetailsWidget.h"
#include "../Menus/FormationMenuWidget.h"
#include "../Menus/GameMenuWidget.h"
#include "../Menus/InstructionsWidget.h"
#include "../Menus/MainMenuWidget.h"
#include "../Menus/ShopMenuWidget.h"
#include "../Menus/SquadMenuWidget.h"
#include "../Menus/TeamMenuWidget.h"
#include "../Menus/TradeMenuWidget.h"
#include "../../Characters/CaptainID.h"
#include "../../Characters/SubordinateID.h"
#include "MainMenuHUD.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangeTargetRank, TEnumAsByte<Rank>, rank);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTargetSubordinate, ASubordinateID*, subordinate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTargetCaptain, ACaptainID*, captain);

/**
 * 
 */
UCLASS()
class FOVPROTO_API AMainMenuHUD : public AFoVHUD
{
private:

	GENERATED_BODY()

	UDetailsWidget* details;
	UFormationMenuWidget* formationMenu;
	UGameMenuWidget* gameMenu;
	UInstructionsWidget* instructions;
	UMainMenuWidget* mainMenu;
	UShopMenuWidget* shopMenu;
	USquadMenuWidget* squadMenu;
	UTeamMenuWidget* teamMenu;
	UTradeMenuWidget* tradeMenu;
	

public:

	UPROPERTY(EditAnywhere)
	TSubclassOf<UDetailsWidget> detailsBP;
	UPROPERTY(EditAnywhere)
	TSubclassOf<UFormationMenuWidget> formationMenuBP;
	UPROPERTY(EditAnywhere)
	TSubclassOf<UGameMenuWidget> gameMenuBP;
	UPROPERTY(EditAnywhere)
	TSubclassOf<UInstructionsWidget> instructionsBP;
	UPROPERTY(EditAnywhere)
	TSubclassOf<UMainMenuWidget> mainMenuBP;
	UPROPERTY(EditAnywhere)
	TSubclassOf<UShopMenuWidget> shopMenuBP;
	UPROPERTY(EditAnywhere)
	TSubclassOf<USquadMenuWidget> squadMenuBP;
	UPROPERTY(EditAnywhere)
	TSubclassOf<UTeamMenuWidget> teamMenuBP;
	UPROPERTY(EditAnywhere)
	TSubclassOf<UTradeMenuWidget> tradeMenuBP;
	UPROPERTY(BlueprintAssignable)
	FChangeTargetRank OnChangeTargetRank;
	UPROPERTY(BlueprintAssignable)
	FTargetSubordinate OnTargetSubordinate;
	UPROPERTY(BlueprintAssignable)
	FTargetCaptain OnTargetCaptain;

protected:

	virtual void BeginPlay() override;

public:

	UFUNCTION(BlueprintCallable)
	void OpenDetails();
	UFUNCTION(BlueprintCallable)
	void CloseDetails();
	UFUNCTION(BlueprintCallable)
	void OpenFormationMenu();
	UFUNCTION(BlueprintCallable)
	void CloseFormationMenu();
	UFUNCTION(BlueprintCallable)
	void OpenFriendsMenu();
	UFUNCTION(BlueprintCallable)
	void CloseFriendsMenu();
	UFUNCTION(BlueprintCallable)
	void OpenGameMenu();
	UFUNCTION(BlueprintCallable)
	void CloseGameMenu();
	UFUNCTION(BlueprintCallable)
	void OpenInstructions();
	UFUNCTION(BlueprintCallable)
	void CloseInstructions();
	UFUNCTION(BlueprintCallable)
	void OpenMainMenu();
	UFUNCTION(BlueprintCallable)
	void CloseMainMenu();
	UFUNCTION(BlueprintCallable)
	void OpenShopMenu();
	UFUNCTION(BlueprintCallable)
	void CloseShopMenu();
	UFUNCTION(BlueprintCallable)
	void OpenSquadMenu();
	UFUNCTION(BlueprintCallable)
	void CloseSquadMenu();
	UFUNCTION(BlueprintCallable)
	USquadMenuWidget* GetSquadMenu();
	UFUNCTION(BlueprintCallable)
	void BroadcastChangeTargetRank(TEnumAsByte<Rank> rank);
	UFUNCTION(BlueprintCallable)
	void TargetSubordinate(ASubordinateID* subordinate);
	UFUNCTION(BlueprintCallable)
	void TargetCaptain(ACaptainID* captain);
	UFUNCTION(BlueprintCallable)
	void OpenTeamMenu();
	UFUNCTION(BlueprintCallable)
	void CloseTeamMenu();
	UFUNCTION(BlueprintCallable)
	void OpenTradeMenu();
	UFUNCTION(BlueprintCallable)
	void CloseTradeMenu();
	
};
