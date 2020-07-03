// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UIEventManagerComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FUIEvent);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FOVPROTO_API UUIEventManagerComponent : public UActorComponent
{
private:

	GENERATED_BODY()

	static UUIEventManagerComponent* instance;

public:	
	
	UPROPERTY(BlueprintAssignable)
	FUIEvent OpenMainMenu;

protected:

	// Called when the game starts
	virtual void BeginPlay() override;

public:	 

	static UUIEventManagerComponent* GetInstance();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
