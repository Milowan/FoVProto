// Fill out your copyright notice in the Description page of Project Settings.


#include "CaptainsScrollWidget.h"

UCaptainsScrollWidget::UCaptainsScrollWidget(const FObjectInitializer& oi) :
	UCharacterScrollWidget(oi)
{
	SetTargetRank(Rank::CAPTAIN);
}