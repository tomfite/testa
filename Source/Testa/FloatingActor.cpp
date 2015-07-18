// Fill out your copyright notice in the Description page of Project Settings.

#include "Testa.h"
#include "FloatingActor.h"


// Sets default values
AFloatingActor::AFloatingActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	HoverSpeed = 1.0f;
	HoverHeight = 20.0f;
	Offset = 1.0f;
}

// Called when the game starts or when spawned
void AFloatingActor::BeginPlay()
{
	Super::BeginPlay();
	RunningTime += Offset;
	
}

// Called every frame
void AFloatingActor::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

	FVector NewLocation = GetActorLocation();
	float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime * HoverSpeed) - FMath::Sin(RunningTime));
	NewLocation.Z += DeltaHeight * HoverHeight;       //Scale our height by a factor of HoverHeight
	RunningTime += DeltaTime;
	SetActorLocation(NewLocation);
}

