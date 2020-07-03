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