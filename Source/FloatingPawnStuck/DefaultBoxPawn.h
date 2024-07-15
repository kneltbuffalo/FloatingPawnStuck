// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/DefaultPawn.h"
#include "Components/BoxComponent.h"
#include "DefaultBoxPawn.generated.h"

/**
 * 
 */
UCLASS()
class FLOATINGPAWNSTUCK_API ADefaultBoxPawn : public ADefaultPawn
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(Category = Pawn, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UBoxComponent> BoxCollisionComponent;
};
