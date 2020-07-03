// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "FoVProtoGameMode.h"
#include "FoVProtoHUD.h"
#include "FoVProtoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFoVProtoGameMode::AFoVProtoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFoVProtoHUD::StaticClass();
}
