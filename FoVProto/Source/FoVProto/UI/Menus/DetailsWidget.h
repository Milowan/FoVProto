// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DetailsWidget.generated.h"

/**
 * 
 */
UCLASS()
class FOVPROTO_API UDetailsWidget : public UUserWidget
{
private:

	GENERATED_BODY()
	
public:

	UDetailsWidget(const FObjectInitializer& OI);
	virtual void NativeConstruct() override;

};
