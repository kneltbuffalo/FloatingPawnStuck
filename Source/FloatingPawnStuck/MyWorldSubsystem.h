// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "MyWorldSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class FLOATINGPAWNSTUCK_API UMyWorldSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()
	virtual void OnWorldBeginPlay(UWorld& InWorld) override;

};
