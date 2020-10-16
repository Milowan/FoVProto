// Fill out your copyright notice in the Description page of Project Settings.


#include "GearComponent.h"

// Sets default values for this component's properties
UGearComponent::UGearComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGearComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UGearComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

AGearItem* UGearComponent::GetGear1()
{
	return gear1;
}

void UGearComponent::SetGear1(AGearItem* gear)
{
	gear1 = gear;
}

AGearItem* UGearComponent::GetGear2()
{
	return gear2;
}

void UGearComponent::SetGear2(AGearItem* gear)
{
	gear2 = gear;
}

AGearItem* UGearComponent::GetGear3()
{
	return gear3;
}

void UGearComponent::SetGear3(AGearItem* gear)
{
	gear3 = gear;
}

AGearItem* UGearComponent::GetGear4()
{
	return gear4;
}

void UGearComponent::SetGear4(AGearItem* gear)
{
	gear4 = gear;
}