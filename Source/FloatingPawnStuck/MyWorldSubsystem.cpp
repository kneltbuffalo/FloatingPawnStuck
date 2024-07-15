// Fill out your copyright notice in the Description page of Project Settings.


#include "MyWorldSubsystem.h"

void UMyWorldSubsystem::OnWorldBeginPlay(UWorld& InWorld)
{
	// Configure parameters
	FCollisionShape Shape = FCollisionShape::MakeBox(FVector(20.f, 20.f, 20.f));
	FHitResult Hit;
	FVector Start(1928.2414174442110, -179.97662676113086, 118.11355409796413);
	FVector End(1918.2624895856081, -180.62846921403863, 118.11826933565959);
	// Do sweep
	InWorld.SweepSingleByChannel(Hit, Start, End, FQuat::Identity, ECollisionChannel::ECC_Pawn, Shape);
	// Draw arrows and box
	DrawDebugDirectionalArrow(&InWorld, Hit.ImpactPoint, Hit.ImpactPoint + Hit.Normal * 5.f, 5.f, FColor(255, 0, 0), false, 999.f);
	DrawDebugBox(&InWorld, Hit.Location, FVector(20.f, 20.f, 20.f), FColor(255, 255, 0), false, 999.f);
	// The items in Hit should have these values:
	// Hit.Distance 0.0563494712
	// Hit.Normal {X=0.0086652328207955810 Y=0.41484802490446343 Z=-0.90984945456543920}
}