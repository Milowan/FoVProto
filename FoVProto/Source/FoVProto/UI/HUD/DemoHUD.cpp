// Fill out your copyright notice in the Description page of Project Settings.


#include "DemoHUD.h"

void ADemoHUD::BeginPlay()
{
	APlayerController& pc = *GetOwningPlayerController();
	squadCommand = Cast<USquadCommandWidget>(UUserWidget::CreateWidgetInstance(pc, squadCommandBP, FName(TEXT("SquadCommand"))));
	pause = Cast<UPauseWidget>(UUserWidget::CreateWidgetInstance(pc, pauseBP, FName(TEXT("PauseMenu"))));
	formation = Cast<UFormationWidget>(UUserWidget::CreateWidgetInstance(pc, formationBP, FName(TEXT("Formation"))));
}