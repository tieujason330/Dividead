// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/GameMode.h"
#include "UE4_ProjectDGameMode.generated.h"

UCLASS(minimalapi)
class AUE4_ProjectDGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	AUE4_ProjectDGameMode();

	virtual void BeginPlay() override;

protected:
	/** The Widget class to use for HUD */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Health", Meta = (BlueprintProtected = "true"))
	TSubclassOf<class UUserWidget> HUDWidgetClass;

	/** instance of HUD */
	UPROPERTY()
	class UUserWidget* CurrentWidget;

};



