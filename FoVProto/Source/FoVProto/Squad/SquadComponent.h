// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Squad.h"
#include "SquadComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FOVPROTO_API USquadComponent : public UActorComponent
{
private:

	GENERATED_BODY()

	ASquad* squad;

protected:

	// Called when the game starts
	virtual void BeginPlay() override;

public:	

	// Sets default values for this component's properties
	USquadComponent();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	ASquad* GetSquad();
	void SetSquad(ASquad* squad);
		
};
