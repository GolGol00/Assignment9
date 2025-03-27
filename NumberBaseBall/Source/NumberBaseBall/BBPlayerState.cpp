// Fill out your copyright notice in the Description page of Project Settings.


#include "BBPlayerState.h"
#include "Net/UnrealNetwork.h"


ABBPlayerState::ABBPlayerState()
: PlayerNameString(TEXT("None"))
, CurrentGuessCount(0)
, MaxGuessCount(3)
{
	bReplicates = true;
}

FString ABBPlayerState::GetPlayerInfoString()
{
	FString PlayerInfoString = PlayerNameString + TEXT("(") + FString::FromInt(CurrentGuessCount) + TEXT("/") + FString::FromInt(MaxGuessCount) + TEXT(")");
	return PlayerInfoString;
}

void ABBPlayerState::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, PlayerNameString);
	DOREPLIFETIME(ThisClass, CurrentGuessCount);
	DOREPLIFETIME(ThisClass, MaxGuessCount);
}
