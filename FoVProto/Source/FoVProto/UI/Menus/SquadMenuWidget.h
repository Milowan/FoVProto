// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "../../Squad/SquadComponent.h"
#include "../../Types.h"
#include "SquadMenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class FOVPROTO_API USquadMenuWidget : public UUserWidget
{
private:

	GENERATED_BODY()

	USquadComponent* squadComponent;

	static const int MAXCHARACTERS = 1;
	UPROPERTY(EditAnywhere)
	TSubclassOf<ACharacterID> characters[MAXCHARACTERS];

	UCharacterIDComponent* selectedCharacter;

	Rank currentList;

public:

	USquadMenuWidget(const FObjectInitializer& oi);

	UFUNCTION(BlueprintCallable)
	USquadComponent* GetSquadComponent();
	UFUNCTION(BlueprintCallable)
	UCharacterIDComponent* GetSelectedCharacter();

	UFUNCTION(BlueprintCallable)
	TEnumAsByte<Rank> GetCurrentList();
	UFUNCTION(BlueprintCallable)
	void SetCurrentList(TEnumAsByte<Rank> list);
	
};
