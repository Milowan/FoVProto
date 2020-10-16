// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "../../Items/Gear/GearItem.h"
#include "GearComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FOVPROTO_API UGearComponent : public UActorComponent
{
private:

	GENERATED_BODY()

	AGearItem* gear1;
	AGearItem* gear2;
	AGearItem* gear3;
	AGearItem* gear4;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	

	// Sets default values for this component's properties
	UGearComponent();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	AGearItem* GetGear1();
	void SetGear1(AGearItem* gear);
	AGearItem* GetGear2();
	void SetGear2(AGearItem* gear);
	AGearItem* GetGear3();
	void SetGear3(AGearItem* gear);
	AGearItem* GetGear4();
	void SetGear4(AGearItem* gear);
		
};
