// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Types.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum Rank
{
	CAPTAIN UMETA(DisplayName = "Captain"),
	SUBORDINATE UMETA(DisplayName = "Subordinate")
};