// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseballPlayerController.h"
#include "NumberBaseBall.h"
#include "ChatUserWidget.h"
#include "Kismet/KismetSystemLibrary.h"
#include "EngineUtils.h"




void ABaseballPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (IsLocalController() == false)
	{
		return;
	}
	
	FInputModeUIOnly InputModeUIOnly;
	SetInputMode(InputModeUIOnly);

	if (IsValid(ChatInputWidgetClass) == true)
	{
		ChatInputWidgetInstance = CreateWidget<UChatUserWidget>(this, ChatInputWidgetClass);
		if (IsValid(ChatInputWidgetInstance) == true)
		{
			ChatInputWidgetInstance->AddToViewport();
		}
	}
}

void ABaseballPlayerController::SetChatMessageString(const FString& InChatMessageString)
{
	ChatMessageString = InChatMessageString;
	if (IsLocalController() == true)
	{
		ServerRPCPrintChatMessageString(InChatMessageString);		
	}
}

void ABaseballPlayerController::PrintChatMessageString(const FString& InChatMessageString)
{
	BaseBallFunctionLibrary::MyPrintString(this, InChatMessageString, 10.f);}

void ABaseballPlayerController::ClientRPCPrintChatMessageString_Implementation(
   const FString& InChatMessageString)
{
	PrintChatMessageString(InChatMessageString);
}

void ABaseballPlayerController::ServerRPCPrintChatMessageString_Implementation(
   const FString& InChatMessageString)
{
	for (TActorIterator<ABaseballPlayerController> It(GetWorld()); It; ++It)
	{
		ABaseballPlayerController* CXPlayerController = *It;
		if (IsValid(CXPlayerController) == true)
		{
			CXPlayerController->ClientRPCPrintChatMessageString(InChatMessageString);
		}
	}
}