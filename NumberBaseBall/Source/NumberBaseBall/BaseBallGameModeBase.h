// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BaseballPlayerController.h"
#include "BaseBallGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class NUMBERBASEBALL_API ABaseBallGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	virtual void OnPostLogin(AController* NewPlayer) override;	
	
	FString GenerateSecretNumber();
    
	bool IsGuessNumberString(const FString& InNumberString);
    
	FString JudgeResult(const FString& InSecretNumberString, const FString& InGuessNumberString);
	
	void IncreaseGuessCount(ABaseballPlayerController* InChattingPlayerController);

	void ResetGame();

	void JudgeGame(ABaseballPlayerController* InChattingPlayerController, int InStrikeCount);

	
	virtual void BeginPlay() override;
	
	void PrintChatMessageString(ABaseballPlayerController* InChattingPlayerController, const FString& InChatMessageString);
	ABaseballPlayerController* GetCurrentTurnPlayerController() const;


private:
	UFUNCTION()
	void OnMainTimerElapsed();
	
protected:
	
	FString SecretNumberString;

	FTimerHandle MainTimerHandle;
	
	TArray<TObjectPtr<ABaseballPlayerController>> AllPlayerControllers;
	int32 CurrentTurnIndex = 0;
	
};

