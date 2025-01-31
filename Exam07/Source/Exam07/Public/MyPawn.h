#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"

class USphereComponent;
class UCameraComponent;
class USpringArmComponent;

UCLASS()
class EXAM07_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	AMyPawn();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character | Component")
	USphereComponent* Collision;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character | Camera")
	UCameraComponent* CameraComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character | Camera")
	USpringArmComponent* SpringArmComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character | Component")
	USkeletalMeshComponent* SkeletalMeshComp;
protected:
	virtual void BeginPlay() override;
};
