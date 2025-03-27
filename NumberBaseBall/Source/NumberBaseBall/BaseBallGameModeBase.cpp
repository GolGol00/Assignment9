// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseBallGameModeBase.h"
#include "BaseballPlayerController.h"
#include "BBPlayerState.h"
#include "EngineUtils.h"
#include "BaseballGameStateBase.h"



void ABaseBallGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	SecretNumberString = GenerateSecretNumber();
	GetWorldTimerManager().SetTimer(MainTimerHandle, this, &ABaseBallGameModeBase::OnMainTimerElapsed, 15.f, true);

}

void ABaseBallGameModeBase::OnPostLogin(AController* NewPlayer)
{
	Super::OnPostLogin(NewPlayer);
	
	
	ABaseballPlayerController* CXPlayerController = Cast<ABaseballPlayerController>(NewPlayer);
	if (IsValid(CXPlayerController) == true)
	{
		//CXPlayerController->NotificationText = FText::FromString(TEXT("Connected to the game server."));
		
		AllPlayerControllers.Add(CXPlayerController);
		
		if (CurrentTurnIndex == AllPlayerControllers.Num() - 1)
		{
			CXPlayerController->NotificationText = FText::FromString(TEXT("It's your turn!"));
		}
		else
		{
			CXPlayerController->NotificationText = FText::FromString(TEXT("Waiting for other player..."));			
		}
		
		ABBPlayerState* BBPS = CXPlayerController->GetPlayerState<ABBPlayerState>();
		if (IsValid(BBPS) == true)
		{
			BBPS->PlayerNameString = TEXT("Player") + FString::FromInt(AllPlayerControllers.Num());
		}

		ABaseballGameStateBase* BBGS =  GetGameState<ABaseballGameStateBase>();
		if (IsValid(BBGS) == true)
		{
			BBGS->MulticastRPCBroadcastLoginMessage(BBPS->PlayerNameString);
		}
	}
}

FString ABaseBallGameModeBase::GenerateSecretNumber()
{
	TArray<int32> Numbers;
	for (int32 i = 1; i <= 9; ++i)
	{
		Numbers.Add(i);
	}

	FMath::RandInit(FDateTime::Now().GetTicks());
	Numbers = Numbers.FilterByPredicate([](int32 Num) { return Num > 0; });
	
	FString Result;
	for (int32 i = 0; i < 3; ++i)
	{
		int32 Index = FMath::RandRange(0, Numbers.Num() - 1);
		Result.Append(FString::FromInt(Numbers[Index]));
		Numbers.RemoveAt(Index);
	}

	return Result;
}

bool ABaseBallGameModeBase::IsGuessNumberString(const FString& InNumberString)
{
	bool bCanPlay = false;

	do {

		if (InNumberString.Len() != 3)
		{
			break;
		}

		bool bIsUnique = true;
		TSet<TCHAR> UniqueDigits;
		for (TCHAR C : InNumberString)
		{
			if (FChar::IsDigit(C) == false || C == '0')
			{
				bIsUnique = false;
				break;
			}
			
			UniqueDigits.Add(C);
		}

		if (bIsUnique == false)
		{
			break;
		}

		bCanPlay = true;
		
	} while (false);	

	return bCanPlay;
}

FString ABaseBallGameModeBase::JudgeResult(const FString& InSecretNumberString, const FString& InGuessNumberString)
{
	int32 StrikeCount = 0, BallCount = 0;

	for (int32 i = 0; i < 3; ++i)
	{
		if (InSecretNumberString[i] == InGuessNumberString[i])
		{
			StrikeCount++;
		}
		else 
		{
			FString PlayerGuessChar = FString::Printf(TEXT("%c"), InGuessNumberString[i]);
			if (InSecretNumberString.Contains(PlayerGuessChar))
			{
				BallCount++;				
			}
		}
	}

	if (StrikeCount == 0 && BallCount == 0)
	{
		return TEXT("OUT");
	}

	return FString::Printf(TEXT("%dS%dB"), StrikeCount, BallCount);
}

void ABaseBallGameModeBase::IncreaseGuessCount(ABaseballPlayerController* InChattingPlayerController)
{
	ABBPlayerState* CXPS = InChattingPlayerController->GetPlayerState<ABBPlayerState>();
	if (IsValid(CXPS) == true)
	{
		CXPS->CurrentGuessCount++;
	}
}


void ABaseBallGameModeBase::PrintChatMessageString(ABaseballPlayerController* InChattingPlayerController,
                                                   const FString& InChatMessageString)
{
	FString ChatMessageString = InChatMessageString;
	int Index = InChatMessageString.Len() - 3;
	FString GuessNumberString = InChatMessageString.RightChop(Index);
	if (IsGuessNumberString(GuessNumberString) == true && InChattingPlayerController == GetCurrentTurnPlayerController())
	{
		FString JudgeResultString = JudgeResult(SecretNumberString, GuessNumberString);

		IncreaseGuessCount(InChattingPlayerController);
		
		for (TActorIterator<ABaseballPlayerController> It(GetWorld()); It; ++It)
		{
			
			ABaseballPlayerController* BBPlayerController = *It;
			if (IsValid(BBPlayerController) == true)
			{
				FString CombinedMessageString = InChatMessageString + TEXT(" -> ") + JudgeResultString;
				BBPlayerController->ClientRPCPrintChatMessageString(CombinedMessageString);
				int32 StrikeCount = FCString::Atoi(*JudgeResultString.Left(1));
				JudgeGame(InChattingPlayerController, StrikeCount);
			}
		}
	}
	else
	{
		for (TActorIterator<ABaseballPlayerController> It(GetWorld()); It; ++It)
		{
			ABaseballPlayerController* BBPlayerController = *It;
			if (IsValid(BBPlayerController) == true)
			{
				BBPlayerController->ClientRPCPrintChatMessageString(InChatMessageString);
			}
		}
	}
}

ABaseballPlayerController* ABaseBallGameModeBase::GetCurrentTurnPlayerController() const
{
	if (AllPlayerControllers.IsEmpty() == true)
	{
		return nullptr;
	}
	
	if (AllPlayerControllers.IsValidIndex(CurrentTurnIndex))
	{
		return AllPlayerControllers[CurrentTurnIndex];
	}
	
	return nullptr;
}

void ABaseBallGameModeBase::OnMainTimerElapsed()
{
	if (AllPlayerControllers.Num() == 0)
	{
		return;
	}

	CurrentTurnIndex = (CurrentTurnIndex + 1) % AllPlayerControllers.Num();

	for (int32 i = 0; i < AllPlayerControllers.Num(); ++i)
	{
		if (IsValid(AllPlayerControllers[i]) == true)
		{
			if (i == CurrentTurnIndex)
			{
				AllPlayerControllers[i]->NotificationText = FText::FromString(TEXT("It's your turn!"));
			}
			else
			{
				AllPlayerControllers[i]->NotificationText = FText::FromString(TEXT("Waiting for other player..."));
			}
		}
	}
}

void ABaseBallGameModeBase::ResetGame()
{
	SecretNumberString = GenerateSecretNumber();

	for (const auto& BBPlayerController : AllPlayerControllers)
	{
		ABBPlayerState* BBPS = BBPlayerController->GetPlayerState<ABBPlayerState>();
		if (IsValid(BBPS) == true)
		{
			BBPS->CurrentGuessCount = 0;
		}
	}
	CurrentTurnIndex = 0;
}

void ABaseBallGameModeBase::JudgeGame(ABaseballPlayerController* InChattingPlayerController, int InStrikeCount)
{
	if (3 == InStrikeCount)
	{
		ABBPlayerState* BBPS = InChattingPlayerController->GetPlayerState<ABBPlayerState>();
		for (const auto& CXPlayerController : AllPlayerControllers)
		{
			if (IsValid(BBPS) == true)
			{
				FString CombinedMessageString = BBPS->PlayerNameString + TEXT(" has won the game.");
				CXPlayerController->NotificationText = FText::FromString(CombinedMessageString);

				ResetGame();
			}
		}
	}
	else
	{
		bool bIsDraw = true;
		for (const auto& CXPlayerController : AllPlayerControllers)
		{
			ABBPlayerState* BBPS = CXPlayerController->GetPlayerState<ABBPlayerState>();
			if (IsValid(BBPS) == true)
			{
				if (BBPS->CurrentGuessCount < BBPS->MaxGuessCount)
				{
					bIsDraw = false;
					break;
				}
			}
		}

		if (true == bIsDraw)
		{
			for (const auto& BBPlayerController : AllPlayerControllers)
			{
				BBPlayerController->NotificationText = FText::FromString(TEXT("Draw..."));

				ResetGame();
			}
		}
	}
}