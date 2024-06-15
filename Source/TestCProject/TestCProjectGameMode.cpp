// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestCProjectGameMode.h"
#include "TestCProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestCProjectGameMode::ATestCProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
