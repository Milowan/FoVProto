// Fill out your copyright notice in the Description page of Project Settings.


#include "FoVHUD.h"

void AFoVHUD::BeginPlay()
{
	APlayerController& pc = *GetOwningPlayerController();
	audioMenu = Cast<UAudioMenuWidget>(UUserWidget::CreateWidgetInstance(pc, audioMenuBP, FName(TEXT("AudioMenu"))));
	formation = Cast<UFormationWidget>(UUserWidget::CreateWidgetInstance(pc, formationBP, FName(TEXT("Formation"))));
	keybindMenu = Cast<UKeybindMenuWidget>(UUserWidget::CreateWidgetInstance(pc, keybindMenuBP, FName(TEXT("KeybindMenu"))));
	optionsMenu = Cast<UOptionsMenuWidget>(UUserWidget::CreateWidgetInstance(pc, optionsMenuBP, FName(TEXT("OptionsMenu"))));
	pause = Cast<UPauseWidget>(UUserWidget::CreateWidgetInstance(pc, pauseBP, FName(TEXT("PauseMenu"))));
	squadCommand = Cast<USquadCommandWidget>(UUserWidget::CreateWidgetInstance(pc, squadCommandBP, FName(TEXT("SquadCommand"))));
	videoMenu = Cast<UVideoMenuWidget>(UUserWidget::CreateWidgetInstance(pc, videoMenuBP, FName(TEXT("VideoMenu"))));
}

void AFoVHUD::OpenAudioMenu()
{
	audioMenu->AddToViewport();
}

void AFoVHUD::CloseAudioMenu()
{
	audioMenu->RemoveFromViewport();
}

void AFoVHUD::OpenFormation()
{
	formation->AddToViewport();
}

void AFoVHUD::CloseFormation()
{
	formation->RemoveFromViewport();
}

void AFoVHUD::OpenKeybindMenu()
{
	keybindMenu->AddToViewport();
}

void AFoVHUD::CloseKeybindMenu()
{
	keybindMenu->RemoveFromViewport();
}

void AFoVHUD::OpenOptionsMenu()
{
	optionsMenu->AddToViewport();
}

void AFoVHUD::CloseOptionsMenu()
{
	optionsMenu->RemoveFromViewport();
}

void AFoVHUD::OpenPauseMenu()
{
	pause->AddToViewport();
}

void AFoVHUD::ClosePauseMenu()
{
	pause->RemoveFromViewport();
}

void AFoVHUD::OpenSquadCommand()
{
	squadCommand->AddToViewport();
}

void AFoVHUD::CloseSquadCommand()
{
	squadCommand->RemoveFromViewport();
}

void AFoVHUD::OpenVideoMenu()
{
	videoMenu->AddToViewport();
}

void AFoVHUD::CloseVideoMenu()
{
	videoMenu->RemoveFromViewport();
}