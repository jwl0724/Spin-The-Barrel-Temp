// Copyright Epic Games, Inc. All Rights Reserved.

#include "SpinTheBarrelGameMode.h"
#include "SpinTheBarrelCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASpinTheBarrelGameMode::ASpinTheBarrelGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
