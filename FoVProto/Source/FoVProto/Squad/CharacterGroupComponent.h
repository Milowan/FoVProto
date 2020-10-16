// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterGroup.h"
#include "CharacterGroupComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FOVPROTO_API UCharacterGroupComponent : public UActorComponent
{
private:

	GENERATED_BODY()

	ACharacterGroup* group;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Sets default values for this component's properties
	UCharacterGroupComponent();

	ACharacterGroup* GetGroup();
	void SetGroup(ACharacterGroup* aGroup);
		
};
