// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OptitrackClientOrigin.h"
#include "GlobalOrigin.generated.h"

/**
 * 
 */
UCLASS()
class CATARACT_FINAL_API AGlobalOrigin : public AOptitrackClientOrigin
{
	GENERATED_BODY()

public:
	AGlobalOrigin();
	
public:
	UFUNCTION(BlueprintPure)
	FString GetIpAddress();
};
