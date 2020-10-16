// Fill out your copyright notice in the Description page of Project Settings.


#include "SubordinatesScrollWidget.h"

USubordinatesScrollWidget::USubordinatesScrollWidget(const FObjectInitializer& oi) :
	UCharacterScrollWidget(oi)
{
	SetTargetRank(Rank::SUBORDINATE);
}