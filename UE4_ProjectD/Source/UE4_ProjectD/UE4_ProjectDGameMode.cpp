// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "UE4_ProjectD.h"
#include "UE4_ProjectDGameMode.h"
#include "UE4_ProjectDCharacter.h"

AUE4_ProjectDGameMode::AUE4_ProjectDGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
