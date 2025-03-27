// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseBallGameModeBase.h"
#include "BaseballGameStateBase.h"

void ABaseBallGameModeBase::OnPostLogin(AController* NewPlayer)
{
	Super::OnPostLogin(NewPlayer);
	
	ABaseballGameStateBase* CXGameStateBase =  GetGameState<ABaseballGameStateBase>();
	if (IsValid(CXGameStateBase) == true)
	{
		CXGameStateBase->MulticastRPCBroadcastLoginMessage(TEXT("XXXXXXX"));
	}
}
