#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"

class UCapsuleComponent;
class UCameraComponent;
class USpringArmComponent;
struct FInputActionValue;

UCLASS()
class EXAM07_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	AMyPawn();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character | Component")
	UCapsuleComponent* Root;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character | Camera")
	UCameraComponent* CameraComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character | Camera")
	USpringArmComponent* SpringArmComp;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Character | Component")
	USkeletalMeshComponent* SkeletalMeshComp;

	virtual void BeginPlay() override;
	virtual void Tick(float Deltatime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void Move(const FInputActionValue& value);
	UFUNCTION()
	void Look(const FInputActionValue& value);

	FVector2D MoveInput;
	FVector2D LookInput;
};
