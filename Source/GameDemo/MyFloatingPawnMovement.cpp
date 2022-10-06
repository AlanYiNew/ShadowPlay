// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFloatingPawnMovement.h"

void UMyFloatingPawnMovement::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
    //UE_LOG(LogTemp, Warning, TEXT("TickComponent %d, %d, %d, %s"), !PawnOwner , !UpdatedComponent , ShouldSkipUpdate(DeltaTime), *PawnOwner->GetHumanReadableName());
    
    if (!PawnOwner || !UpdatedComponent || ShouldSkipUpdate(DeltaTime))
    {
        return;
    }

   
    FVector DesiredMovementThisFrame = ConsumeInputVector().GetClampedToMaxSize(1.0f) * DeltaTime * 150.0f;
    //UE_LOG(LogTemp, Warning, TEXT("Nearly zero %d, %s"), DesiredMovementThisFrame.IsNearlyZero(), *DesiredMovementThisFrame.ToString());
    if (!DesiredMovementThisFrame.IsNearlyZero())
    {
        //UE_LOG(LogTemp, Warning, TEXT("DesiredMovementThisFrame %s"), *DesiredMovementThisFrame.ToString());
        FHitResult Hit;
        SafeMoveUpdatedComponent(DesiredMovementThisFrame, UpdatedComponent->GetComponentRotation(), true, Hit);

        
        if (Hit.IsValidBlockingHit())
        {
            SlideAlongSurface(DesiredMovementThisFrame, 1.f - Hit.Time, Hit.Normal, Hit);
        }
    }
};