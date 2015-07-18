// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "Testa.h"
#include "TestaGameMode.h"
#include "TestaHUD.h"
#include "TestaCharacter.h"

ATestaGameMode::ATestaGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATestaHUD::StaticClass();
}
