// Fill out your copyright notice in the Description page of Project Settings.


#include "SubordinateStatsPanelWidget.h"

USubordinateStatsPanelWidget::USubordinateStatsPanelWidget(const FObjectInitializer& oi) :
	UUserWidget(oi)
{
	characterIDComponent = CreateDefaultSubobject<UCharacterIDComponent>(TEXT("Character ID Component"));
}

void USubordinateStatsPanelWidget::NativeOnInitialized()
{
	AMainMenuHUD* hud = Cast<AMainMenuHUD>(GetOwningPlayer()->GetHUD());
	hud->OnTargetSubordinate.AddDynamic(this, &USubordinateStatsPanelWidget::SetTargetCharacter);
	hud->OnChangeTargetRank.AddDynamic(this, &USubordinateStatsPanelWidget::ToggleDisplay);
}

UCharacterIDComponent* USubordinateStatsPanelWidget::GetCharacterIDComponent()
{
	return characterIDComponent;
}

void USubordinateStatsPanelWidget::SetTargetCharacter(ASubordinateID* ID)
{
	characterIDComponent->SetCharacterID(ID);
}

void USubordinateStatsPanelWidget::ToggleDisplay(TEnumAsByte<Rank> rank)
{
	if (rank == Rank::SUBORDINATE)
	{
		if (!IsInViewport())
		{
			SetColorAndOpacity(FLinearColor(FVector4(1.0f, 1.0f, 1.0f, 1.0f)));
		}
	}
	else
	{
		SetColorAndOpacity(FLinearColor(FVector4(0.0f, 1.0f, 1.0f, 1.0f)));
	}
}