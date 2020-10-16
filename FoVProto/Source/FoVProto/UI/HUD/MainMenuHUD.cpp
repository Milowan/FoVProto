// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuHUD.h"

void AMainMenuHUD::BeginPlay()
{
	Super::BeginPlay();

	APlayerController& pc = *GetOwningPlayerController();

	details = Cast<UDetailsWidget>(UUserWidget::CreateWidgetInstance(pc, detailsBP, FName(TEXT("Details"))));
	details->AddToViewport();
	CloseDetails();
	formationMenu = Cast<UFormationMenuWidget>(UUserWidget::CreateWidgetInstance(pc, formationMenuBP, FName(TEXT("Formation Menu"))));
	formationMenu->AddToViewport();
	CloseFormationMenu();
	gameMenu = Cast<UGameMenuWidget>(UUserWidget::CreateWidgetInstance(pc, gameMenuBP, FName(TEXT("Game Menu"))));
	gameMenu->AddToViewport();
	CloseGameMenu();
	instructions = Cast<UInstructionsWidget>(UUserWidget::CreateWidgetInstance(pc, instructionsBP, FName(TEXT("Instructions"))));
	instructions->AddToViewport();
	CloseInstructions();
	mainMenu = Cast<UMainMenuWidget>(UUserWidget::CreateWidgetInstance(pc, mainMenuBP, FName(TEXT("Main Menu"))));
	mainMenu->AddToViewport();
	shopMenu = Cast<UShopMenuWidget>(UUserWidget::CreateWidgetInstance(pc, shopMenuBP, FName(TEXT("Shop Menu"))));
	shopMenu->AddToViewport();
	CloseShopMenu();
	squadMenu = Cast<USquadMenuWidget>(UUserWidget::CreateWidgetInstance(pc, squadMenuBP, FName(TEXT("Squad Menu"))));
	squadMenu->GetSquadComponent()->SetSquad(Cast<ASquad>(Cast<UFoVGameInstance>(GetGameInstance())->GetSquadInterface()));
	squadMenu->AddToViewport();
	CloseSquadMenu();
	OnChangeTargetRank.AddDynamic(squadMenu, &USquadMenuWidget::SetCurrentList);
	OnChangeTargetRank.Broadcast(Rank::SUBORDINATE);
	teamMenu = Cast<UTeamMenuWidget>(UUserWidget::CreateWidgetInstance(pc, teamMenuBP, FName(TEXT("Team Menu"))));
	teamMenu->AddToViewport();
	CloseTeamMenu();
	tradeMenu = Cast<UTradeMenuWidget>(UUserWidget::CreateWidgetInstance(pc, tradeMenuBP, FName(TEXT("Trade Menu"))));
	tradeMenu->AddToViewport();
	CloseTradeMenu();

	FInputModeUIOnly inputMode;
	pc.SetInputMode(inputMode);
	pc.bShowMouseCursor = true;
}

void AMainMenuHUD::OpenDetails()
{
	details->SetColorAndOpacity(FLinearColor(FVector4(1.0f, 1.0f, 1.0f, 1.0f)));
}

void AMainMenuHUD::CloseDetails()
{
	details->SetColorAndOpacity(FLinearColor(FVector4(1.0f, 1.0f, 1.0f, 0.0f)));
}

void AMainMenuHUD::OpenFormationMenu()
{
	formationMenu->SetColorAndOpacity(FLinearColor(FVector4(1.0f, 1.0f, 1.0f, 1.0f)));
}

void AMainMenuHUD::CloseFormationMenu()
{
	formationMenu->SetColorAndOpacity(FLinearColor(FVector4(1.0f, 1.0f, 1.0f, 0.0f)));
}

void AMainMenuHUD::OpenFriendsMenu()
{

}

void AMainMenuHUD::CloseFriendsMenu()
{

}

void AMainMenuHUD::OpenGameMenu()
{
	gameMenu->SetColorAndOpacity(FLinearColor(FVector4(1.0f, 1.0f, 1.0f, 1.0f)));
}

void AMainMenuHUD::CloseGameMenu()
{
	gameMenu->SetColorAndOpacity(FLinearColor(FVector4(1.0f, 1.0f, 1.0f, 0.0f)));
}

void AMainMenuHUD::OpenInstructions()
{
	instructions->SetColorAndOpacity(FLinearColor(FVector4(1.0f, 1.0f, 1.0f, 1.0f)));
}

void AMainMenuHUD::CloseInstructions()
{
	instructions->SetColorAndOpacity(FLinearColor(FVector4(1.0f, 1.0f, 1.0f, 0.0f)));
}

void AMainMenuHUD::OpenMainMenu()
{
	mainMenu->SetColorAndOpacity(FLinearColor(FVector4(1.0f, 1.0f, 1.0f, 1.0f)));
}

void AMainMenuHUD::CloseMainMenu()
{
	mainMenu->SetColorAndOpacity(FLinearColor(FVector4(1.0f, 1.0f, 1.0f, 0.0f)));
}

void AMainMenuHUD::OpenShopMenu()
{
	shopMenu->SetColorAndOpacity(FLinearColor(FVector4(1.0f, 1.0f, 1.0f, 1.0f)));
}

void AMainMenuHUD::CloseShopMenu()
{
	shopMenu->SetColorAndOpacity(FLinearColor(FVector4(1.0f, 1.0f, 1.0f, 0.0f)));
}

void AMainMenuHUD::OpenSquadMenu()
{
	squadMenu->SetColorAndOpacity(FLinearColor(FVector4(1.0f, 1.0f, 1.0f, 1.0f)));
}

void AMainMenuHUD::CloseSquadMenu()
{
	squadMenu->SetColorAndOpacity(FLinearColor(FVector4(1.0f, 1.0f, 1.0f, 0.0f)));
}

USquadMenuWidget* AMainMenuHUD::GetSquadMenu()
{
	return squadMenu;
}

void AMainMenuHUD::BroadcastChangeTargetRank(TEnumAsByte<Rank> rank)
{
	OnChangeTargetRank.Broadcast(rank);
}

void AMainMenuHUD::TargetSubordinate(ASubordinateID* subordinate)
{
	OnTargetSubordinate.Broadcast(subordinate);
}

void AMainMenuHUD::TargetCaptain(ACaptainID* captain)
{
	OnTargetCaptain.Broadcast(captain);
}

void AMainMenuHUD::OpenTeamMenu()
{
	teamMenu->SetColorAndOpacity(FLinearColor(FVector4(1.0f, 1.0f, 1.0f, 1.0f)));
}

void AMainMenuHUD::CloseTeamMenu()
{
	teamMenu->SetColorAndOpacity(FLinearColor(FVector4(1.0f, 1.0f, 1.0f, 0.0f)));
}

void AMainMenuHUD::OpenTradeMenu()
{
	tradeMenu->SetColorAndOpacity(FLinearColor(FVector4(1.0f, 1.0f, 1.0f, 1.0f)));
}

void AMainMenuHUD::CloseTradeMenu()
{
	tradeMenu->SetColorAndOpacity(FLinearColor(FVector4(1.0f, 1.0f, 1.0f, 0.0f)));
}