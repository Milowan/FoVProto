// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterScrollWidget.h"

void UCharacterScrollWidget::NativeOnInitialized()
{
	Cast<AMainMenuHUD>(GetOwningPlayer()->GetHUD())->OnChangeTargetRank.AddDynamic(this, &UCharacterScrollWidget::ToggleDisplay);
}

TEnumAsByte<Rank> UCharacterScrollWidget::GetTargetRank()
{
	return targetRank;
}

void UCharacterScrollWidget::SetTargetRank(TEnumAsByte<Rank> rank)
{
	targetRank = rank;
}

void UCharacterScrollWidget::ToggleDisplay(TEnumAsByte<Rank> rank)
{
	if (rank == targetRank)
	{
		SetColorAndOpacity(FLinearColor(FVector4(1.0f, 1.0f, 1.0f, 1.0f)));
	}
	else
	{
		SetColorAndOpacity(FLinearColor(FVector4(1.0f, 1.0f, 1.0f, 0.0f)));
	}
}