// Copyright Epic Games, Inc. All Rights Reserved.

#include "TaskGameMode.h"
#include "TaskCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATaskGameMode::ATaskGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
