// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "FloatingActor.generated.h"

UCLASS()
class TESTA_API AFloatingActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFloatingActor();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	float RunningTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Variables)
	float HoverSpeed;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Variables)
	float HoverHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Variables)
	float Offset;
};
