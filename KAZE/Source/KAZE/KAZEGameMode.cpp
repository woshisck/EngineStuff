// Copyright Epic Games, Inc. All Rights Reserved.

#include "KAZEGameMode.h"
#include "KAZECharacter.h"
#include "UObject/ConstructorHelpers.h"

AKAZEGameMode::AKAZEGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
