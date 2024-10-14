// Copyright Epic Games, Inc. All Rights Reserved.

#include "olaGameMode.h"
#include "olaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AolaGameMode::AolaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
