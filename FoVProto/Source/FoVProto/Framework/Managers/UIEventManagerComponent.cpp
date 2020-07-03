// Fill out your copyright notice in the Description page of Project Settings.


#include "UIEventManagerComponent.h"

UUIEventManagerComponent* UUIEventManagerComponent::instance = NULL;

// Called when the game starts
void UUIEventManagerComponent::BeginPlay()
{
	Super::BeginPlay();

	instance = this;
	
}

UUIEventManagerComponent* UUIEventManagerComponent::GetInstance()
{
	return instance;
}


// Called every frame
void UUIEventManagerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

