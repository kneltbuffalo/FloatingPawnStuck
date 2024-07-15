// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultBoxPawn.h"
#include "GameFramework/PawnMovementComponent.h"

ADefaultBoxPawn::ADefaultBoxPawn(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	BoxCollisionComponent = CreateDefaultSubobject<UBoxComponent>("BoxComp");
	BoxCollisionComponent->InitBoxExtent(FVector(20.0f, 20.0f, 20.0f));
	BoxCollisionComponent->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	RootComponent = BoxCollisionComponent;
	MovementComponent->UpdatedComponent = BoxCollisionComponent;
}