// Copyright Epic Games, Inc. All Rights Reserved.

#include "SteamTestGameMode.h"
#include "SteamTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASteamTestGameMode::ASteamTestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
