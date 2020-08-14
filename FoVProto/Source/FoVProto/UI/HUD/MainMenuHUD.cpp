// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuHUD.h"

void AMainMenuHUD::BeginPlay()
{
	Super::BeginPlay();

	APlayerController& pc = *GetOwningPlayerController();

	mainMenu = Cast<UMainMenuWidget>(UUserWidget::CreateWidgetInstance(pc, mainMenuBP, FName(TEXT("MainMenu"))));
	mainMenu->AddToViewport();

	details = Cast<UDetailsWidget>(UUserWidget::CreateWidgetInstance(pc, detailsBP, FName(TEXT("Details"))));

	instructions = Cast<UInstructionsWidget>(UUserWidget::CreateWidgetInstance(pc, instructionsBP, FName(TEXT("Instructions"))));

	gameMenu = Cast<UGameMenuWidget>(UUserWidget::CreateWidgetInstance(pc, gameMenuBP, FName(TEXT("Game Menu"))));

	FInputModeUIOnly inputMode;
	pc.SetInputMode(inputMode);
	pc.bShowMouseCursor = true;
}

void AMainMenuHUD::OpenDetails()
{
	mainMenu->RemoveFromViewport();
	details->AddToViewport();
}

void AMainMenuHUD::CloseDetails()
{
	details->RemoveFromViewport();
	mainMenu->AddToViewport();
}

void AMainMenuHUD::OpenInstructions()
{
	mainMenu->RemoveFromViewport();
	instructions->AddToViewport();
}

void AMainMenuHUD::CloseInstructions()
{
	instructions->RemoveFromViewport();
	mainMenu->AddToViewport();
}

void AMainMenuHUD::OpenGameMenu()
{
	mainMenu->RemoveFromViewport();
	gameMenu->AddToViewport();
}

void AMainMenuHUD::CloseGameMenu()
{
	gameMenu->RemoveFromViewport();
	mainMenu->AddToViewport();
}

void AMainMenuHUD::OpenOptions()
{

}

void AMainMenuHUD::CloseOptions()
{

}

void AMainMenuHUD::OpenFormationMenu()
{

}

void AMainMenuHUD::CloseFormationMenu()
{

}

void AMainMenuHUD::OpenSquadMenu()
{

}

void AMainMenuHUD::CloseSquadMenu()
{

}

void AMainMenuHUD::OpenShopMenu()
{

}

void AMainMenuHUD::CloseShopMenu()
{

}

void AMainMenuHUD::OpenTradeMenu()
{

}

void AMainMenuHUD::CloseTradeMenu()
{

}

void AMainMenuHUD::OpenTeamMenu()
{

}

void AMainMenuHUD::CloseTeamMenu()
{

}

void AMainMenuHUD::OpenFriendsMenu()
{

}

void AMainMenuHUD::CloseFriendsMenu()
{

}