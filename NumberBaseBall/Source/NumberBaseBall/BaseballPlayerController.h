// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BaseballPlayerController.generated.h"

class UChatUserWidget;
class UUserWidget;

UCLASS()
class NUMBERBASEBALL_API ABaseballPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	ABaseballPlayerController();
	virtual void BeginPlay() override;

	void SetChatMessageString(const FString& InChatMessageString);
	
	void PrintChatMessageString(const FString& InChatMessageString);

	UFUNCTION(Client, Reliable)
	void ClientRPCPrintChatMessageString(const FString& InChatMessageString);

	UFUNCTION(Server, Reliable)
	void ServerRPCPrintChatMessageString(const FString& InChatMessageString);

	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

	UFUNCTION(BlueprintCallable)
	void SetNotificationText(const FText& InNotificationText);
	
protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UChatUserWidget> ChatInputWidgetClass;
	
	UPROPERTY()
	TObjectPtr<UChatUserWidget> ChatInputWidgetInstance;
	
	FString ChatMessageString;
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UUserWidget> NotificationTextWidgetClass;
	
	UPROPERTY()
	TObjectPtr<UUserWidget> NotificationTextWidgetInstance;
	
public:
	UPROPERTY(Replicated, BlueprintReadWrite)
	FText NotificationText;
	
};

