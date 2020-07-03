// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "../Menus/SquadCommandWidget.h"
#include "../Menus/PauseWidget.h"
#include "../Menus/FormationWidget.h"
#include "DemoHUD.generated.h"

/**
 * 
 */
UCLASS()
class FOVPROTO_API ADemoHUD : public AHUD
{
private:

	GENERATED_BODY()

	USquadCommandWidget* squadCommand;
	UPauseWidget* pause;
	UFormationWidget* formation;
	
public:

	TSubclassOf<USquadCommandWidget> squadCommandBP;
	TSubclassOf<UPauseWidget> pauseBP;
	TSubclassOf<UFormationWidget> formationBP;

protected:

	virtual void BeginPlay() override;

};
