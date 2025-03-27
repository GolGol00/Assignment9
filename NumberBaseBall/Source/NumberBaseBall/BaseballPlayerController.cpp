// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseballPlayerController.h"

#include "BaseBallGameModeBase.h"
#include "NumberBaseBall.h"
#include "ChatUserWidget.h"
#include "Kismet/KismetSystemLibrary.h"
#include "BBPlayerState.h"
#include "EngineUtils.h"
#include "Net/UnrealNetwork.h"
#include "Kismet/GameplayStatics.h"


ABaseballPlayerController::ABaseballPlayerController()
{
	bReplicates = true;
}

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
	if (IsValid(NotificationTextWidgetClass) == true)
	{
		NotificationTextWidgetInstance = CreateWidget<UUserWidget>(this, NotificationTextWidgetClass);
		if (IsValid(NotificationTextWidgetInstance) == true)
		{
			NotificationTextWidgetInstance->AddToViewport();
		}
	}
}

void ABaseballPlayerController::SetChatMessageString(const FString& InChatMessageString)
{
	ChatMessageString = InChatMessageString;
	if (IsLocalController() == true)
	{
		//ServerRPCPrintChatMessageString(InChatMessageString);
		
		ABBPlayerState* CXPS = GetPlayerState<ABBPlayerState>();
		if (IsValid(CXPS) == true)
		{
			FString CombinedMessageString = CXPS->GetPlayerInfoString() + TEXT(": ") + InChatMessageString;

			ServerRPCPrintChatMessageString(CombinedMessageString);
		}
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
	// for (TActorIterator<ABaseballPlayerController> It(GetWorld()); It; ++It)
	// {
	// 	ABaseballPlayerController* CXPlayerController = *It;
	// 	if (IsValid(CXPlayerController) == true)
	// 	{
	// 		CXPlayerController->ClientRPCPrintChatMessageString(InChatMessageString);
	// 	}
	// }
	AGameModeBase* GM = UGameplayStatics::GetGameMode(this);
	if (IsValid(GM) == true)
	{
		ABaseBallGameModeBase* BBGM = Cast<ABaseBallGameModeBase>(GM);
		if (IsValid(BBGM) == true)
		{
			BBGM->PrintChatMessageString(this, InChatMessageString);
		}
	}
}
void ABaseballPlayerController::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, NotificationText);
}

void ABaseballPlayerController::SetNotificationText(const FText& InNotificationText)
{
	NotificationText = InNotificationText;
}