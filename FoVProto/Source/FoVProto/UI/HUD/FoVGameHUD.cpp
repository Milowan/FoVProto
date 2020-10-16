// Fill out your copyright notice in the Description page of Project Settings.


#include "FoVGameHUD.h"

void AFoVGameHUD::BeginPlay()
{
	Super::BeginPlay();
	APlayerController& pc = *GetOwningPlayerController();
	formation = Cast<UFormationWidget>(UUserWidget::CreateWidgetInstance(pc, formationBP, FName(TEXT("Formation"))));
	pause = Cast<UPauseWidget>(UUserWidget::CreateWidgetInstance(pc, pauseBP, FName(TEXT("PauseMenu"))));
	squadCommand = Cast<USquadCommandWidget>(UUserWidget::CreateWidgetInstance(pc, squadCommandBP, FName(TEXT("SquadCommand"))));
}

void AFoVGameHUD::OpenFormation()
{
	formation->AddToViewport();
}

void AFoVGameHUD::CloseFormation()
{
	formation->RemoveFromViewport();
}

void AFoVGameHUD::OpenPauseMenu()
{
	pause->AddToViewport();
}

void AFoVGameHUD::ClosePauseMenu()
{
	pause->RemoveFromViewport();
}

void AFoVGameHUD::OpenSquadCommand()
{
	squadCommand->AddToViewport();
}

void AFoVGameHUD::CloseSquadCommand()
{
	squadCommand->RemoveFromViewport();
}