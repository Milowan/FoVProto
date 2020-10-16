// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "../../../Characters/CharacterIDComponent.h"
#include "CharacterIDWidget.generated.h"

/**
 * 
 */
UCLASS()
class FOVPROTO_API UCharacterIDWidget : public UUserWidget
{
private:

	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	FString imagePath;
	UPROPERTY(EditAnywhere)
	FString name;
	UPROPERTY(EditAnywhere)
	UCharacterIDComponent* characterIDComponent;

public:

	UCharacterIDWidget(const FObjectInitializer& oi);

	UFUNCTION(BlueprintCallable)
	FString GetCharacterName();
	UFUNCTION(BlueprintCallable)
	FString GetImagePath();
	UFUNCTION(BlueprintCallable)
	void SetImagePath(FString path);

	UFUNCTION(BlueprintCallable)
	UCharacterIDComponent* GetCharacterIDComponent();

	UFUNCTION(BlueprintImplementableEvent)
	void WidgetSetup();
	
};
