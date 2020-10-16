// Fill out your copyright notice in the Description page of Project Settings.


#include "CaptainStatsPanelWidget.h"

UCaptainStatsPanelWidget::UCaptainStatsPanelWidget(const FObjectInitializer& oi) :
	UUserWidget(oi)
{
	characterIDComponent = CreateDefaultSubobject<UCharacterIDComponent>(TEXT("Character ID Component"));
}

void UCaptainStatsPanelWidget::NativeOnInitialized()
{
	AMainMenuHUD* hud = Cast<AMainMenuHUD>(GetOwningPlayer()->GetHUD());
	hud->OnTargetCaptain.AddDynamic(this, &UCaptainStatsPanelWidget::SetTarget);
	hud->OnChangeTargetRank.AddDynamic(this, &UCaptainStatsPanelWidget::ToggleDisplay);
}

UCharacterIDComponent* UCaptainStatsPanelWidget::GetCharacterIDComponent()
{
	return characterIDComponent;
}

void UCaptainStatsPanelWidget::SetTarget(ACaptainID* captain)
{
	characterIDComponent->SetCharacterID(captain);
}

void UCaptainStatsPanelWidget::ToggleDisplay(TEnumAsByte<Rank> rank)
{
	if (rank == Rank::CAPTAIN)
	{
		if (!IsInViewport())
		{
			AddToViewport();
		}
	}
	else
	{
		RemoveFromViewport();
	}
}