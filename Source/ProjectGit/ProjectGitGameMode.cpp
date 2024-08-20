// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectGitGameMode.h"
#include "ProjectGitCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectGitGameMode::AProjectGitGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
