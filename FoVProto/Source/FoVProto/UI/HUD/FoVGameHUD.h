// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FoVHUD.h"
#include "../Menus/FormationWidget.h"
#include "../Menus/PauseWidget.h"
#include "../Menus/SquadCommandWidget.h"
#include "FoVGameHUD.generated.h"

/**
 * 
 */
UCLASS()
class FOVPROTO_API AFoVGameHUD : public AFoVHUD
{
private:

	GENERATED_BODY()

	UFormationWidget* formation;
	UPauseWidget* pause;
	USquadCommandWidget* squadCommand;

public:

	UPROPERTY(EditAnywhere)
		TSubclassOf<UFormationWidget> formationBP;
	UPROPERTY(EditAnywhere)
		TSubclassOf<UPauseWidget> pauseBP;
	UPROPERTY(EditAnywhere)
		TSubclassOf<USquadCommandWidget> squadCommandBP;

protected:

	virtual void BeginPlay() override;

public:

	UFUNCTION(BlueprintCallable)
	void OpenFormation();
	UFUNCTION(BlueprintCallable)
	void CloseFormation();

	UFUNCTION(BlueprintCallable)
	void OpenPauseMenu();
	UFUNCTION(BlueprintCallable)
	void ClosePauseMenu();

	UFUNCTION(BlueprintCallable)
	void OpenSquadCommand();
	UFUNCTION(BlueprintCallable)
	void CloseSquadCommand();
};
