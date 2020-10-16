// Fill out your copyright notice in the Description page of Project Settings.


#include "SquadMenuWidget.h"

USquadMenuWidget::USquadMenuWidget(const FObjectInitializer& oi) :
	UUserWidget(oi)
{
	squadComponent = CreateDefaultSubobject<USquadComponent>(TEXT("Squad Component"));
}

USquadComponent* USquadMenuWidget::GetSquadComponent()
{
	return squadComponent;
}

UCharacterIDComponent* USquadMenuWidget::GetSelectedCharacter()
{
	return selectedCharacter;
}

TEnumAsByte<Rank> USquadMenuWidget::GetCurrentList()
{
	return currentList;
}

void USquadMenuWidget::SetCurrentList(TEnumAsByte<Rank> list)
{
	currentList = list;
}