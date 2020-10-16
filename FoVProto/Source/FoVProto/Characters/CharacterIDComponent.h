// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "../Framework/FoVGameInstance.h"
#include "CharacterID.h"
#include "CharacterIDComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FOVPROTO_API UCharacterIDComponent : public UActorComponent
{
private:

	GENERATED_BODY()

	UPROPERTY()
	ACharacterID* characterID;
	UPROPERTY(EditAnywhere)
	TSubclassOf<ACharacterID> characterIDBP;

protected:

	// Called when the game starts
	virtual void BeginPlay() override;

public:	

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Sets default values for this component's properties
	UCharacterIDComponent();

	UFUNCTION(BlueprintCallable)
	ACharacterID* GetCharacterID();
	UFUNCTION(BlueprintCallable)
	void SetCharacterID(ACharacterID* ID);
		
};
