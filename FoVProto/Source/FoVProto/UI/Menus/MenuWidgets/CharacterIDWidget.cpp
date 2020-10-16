// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterIDWidget.h"

UCharacterIDWidget::UCharacterIDWidget(const FObjectInitializer& oi) :
	UUserWidget(oi)
{
	characterIDComponent = CreateDefaultSubobject<UCharacterIDComponent>(TEXT("Character"));
}

FString UCharacterIDWidget::GetCharacterName()
{
	FString retVal;

	if (characterIDComponent->GetCharacterID() != NULL)
	{
		retVal = characterIDComponent->GetCharacterID()->GetName();
	}
	else
	{
		retVal = FString("Unattached character");
	}

	return retVal;
}

FString UCharacterIDWidget::GetImagePath()
{
	return imagePath;
}

void UCharacterIDWidget::SetImagePath(FString path)
{
	imagePath = path;
}

UCharacterIDComponent* UCharacterIDWidget::GetCharacterIDComponent()
{
	return characterIDComponent;
}