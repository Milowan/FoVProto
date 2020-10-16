// Fill out your copyright notice in the Description page of Project Settings.


#include "FoVHUD.h"

void AFoVHUD::BeginPlay()
{
	APlayerController& pc = *GetOwningPlayerController();
	audioMenu = Cast<UAudioMenuWidget>(UUserWidget::CreateWidgetInstance(pc, audioMenuBP, FName(TEXT("AudioMenu"))));
	keybindMenu = Cast<UKeybindMenuWidget>(UUserWidget::CreateWidgetInstance(pc, keybindMenuBP, FName(TEXT("KeybindMenu"))));
	optionsMenu = Cast<UOptionsMenuWidget>(UUserWidget::CreateWidgetInstance(pc, optionsMenuBP, FName(TEXT("OptionsMenu"))));
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

void AFoVHUD::OpenVideoMenu()
{
	videoMenu->AddToViewport();
}

void AFoVHUD::CloseVideoMenu()
{
	videoMenu->RemoveFromViewport();
}