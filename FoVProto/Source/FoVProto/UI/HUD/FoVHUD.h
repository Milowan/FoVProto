// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "../Menus/AudioMenuWidget.h"
#include "../Menus/FormationWidget.h"
#include "../Menus/KeybindMenuWidget.h"
#include "../Menus/OptionsMenuWidget.h"
#include "../Menus/PauseWidget.h"
#include "../Menus/SquadCommandWidget.h"
#include "../Menus/VideoMenuWidget.h"
#include "FoVHUD.generated.h"

/**
 * 
 */
UCLASS()
class FOVPROTO_API AFoVHUD : public AHUD
{
private:

	GENERATED_BODY()

	UAudioMenuWidget* audioMenu;
	UFormationWidget* formation;
	UKeybindMenuWidget* keybindMenu;
	UOptionsMenuWidget* optionsMenu;
	UPauseWidget* pause;
	USquadCommandWidget* squadCommand;
	UVideoMenuWidget* videoMenu;
	
public:

	UPROPERTY(EditAnywhere)
	TSubclassOf<UAudioMenuWidget> audioMenuBP;
	UPROPERTY(EditAnywhere)
	TSubclassOf<UFormationWidget> formationBP;
	UPROPERTY(EditAnywhere)
	TSubclassOf<UKeybindMenuWidget> keybindMenuBP;
	UPROPERTY(EditAnywhere)
	TSubclassOf<UOptionsMenuWidget> optionsMenuBP;
	UPROPERTY(EditAnywhere)
	TSubclassOf<UPauseWidget> pauseBP;
	UPROPERTY(EditAnywhere)
	TSubclassOf<USquadCommandWidget> squadCommandBP;
	UPROPERTY(EditAnywhere)
	TSubclassOf<UVideoMenuWidget> videoMenuBP;

protected:

	virtual void BeginPlay() override;

public:

	UFUNCTION(BlueprintCallable)
	void OpenAudioMenu();
	UFUNCTION(BlueprintCallable)
	void CloseAudioMenu();

	UFUNCTION(BlueprintCallable)
	void OpenFormation();
	UFUNCTION(BlueprintCallable)
	void CloseFormation();

	UFUNCTION(BlueprintCallable)
	void OpenKeybindMenu();
	UFUNCTION(BlueprintCallable)
	void CloseKeybindMenu();

	UFUNCTION(BlueprintCallable)
	void OpenOptionsMenu();
	UFUNCTION(BlueprintCallable)
	void CloseOptionsMenu();

	UFUNCTION(BlueprintCallable)
	void OpenPauseMenu();
	UFUNCTION(BlueprintCallable)
	void ClosePauseMenu();

	UFUNCTION(BlueprintCallable)
	void OpenSquadCommand();
	UFUNCTION(BlueprintCallable)
	void CloseSquadCommand();

	UFUNCTION(BlueprintCallable)
	void OpenVideoMenu();
	UFUNCTION(BlueprintCallable)
	void CloseVideoMenu();

};
