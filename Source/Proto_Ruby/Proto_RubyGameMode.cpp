// Copyright Epic Games, Inc. All Rights Reserved.

#include "Proto_RubyGameMode.h"
#include "Proto_RubyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProto_RubyGameMode::AProto_RubyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
