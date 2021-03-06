// Fill out your copyright notice in the Description page of Project Settings.


#include "SquadComponent.h"

// Sets default values for this component's properties
USquadComponent::USquadComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	
	// ...
}


// Called when the game starts
void USquadComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void USquadComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

ASquad* USquadComponent::GetSquad()
{
	return squad;
}

void USquadComponent::SetSquad(ASquad* aSquad)
{
	squad = aSquad;
}