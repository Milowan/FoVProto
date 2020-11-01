// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionComponent.h"
#include "SubordinateController.generated.h"

/**
 * 
 */
UCLASS()
class FOVPROTO_API ASubordinateController : public AAIController
{
private:

	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	UAIPerceptionComponent* perception;

public:

	ASubordinateController(const FObjectInitializer& oi);

};
