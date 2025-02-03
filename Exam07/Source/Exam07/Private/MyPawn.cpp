#include "MyPawn.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "EnhancedInputComponent.h"
#include "MyPlayerController.h"

AMyPawn::AMyPawn()
{
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<UCapsuleComponent>(TEXT("RootComponent"));
	Root->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	Root->SetupAttachment(RootComponent);

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArmComp->SetupAttachment(Root);
	SpringArmComp->TargetArmLength = 300.0f;
	SpringArmComp->bUsePawnControlRotation = false;

	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComp->SetupAttachment(SpringArmComp, USpringArmComponent::SocketName);
	CameraComp->bUsePawnControlRotation = false;

	SkeletalMeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	SkeletalMeshComp->SetupAttachment(Root);
}

void AMyPawn::BeginPlay()
{
	Super::BeginPlay();
}

void AMyPawn::Tick(float Deltatime)
{
	Super::Tick(Deltatime);

	FVector dir = (GetActorForwardVector() * MoveInput.X) + (GetActorRightVector() * MoveInput.Y);
	if (!dir.IsNearlyZero()) dir.Normalize();
	FVector newLocation = GetActorLocation() + dir * 300.0f * Deltatime;
	SetActorLocation(newLocation, true);
	MoveInput = FVector2D::Zero();

	FRotator newRotation = FRotator(0.0f, LookInput.X * 50.0f * Deltatime, 0.0f);
	AddActorLocalRotation(newRotation);
	LookInput = FVector2D::Zero();
}

void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		if (AMyPlayerController* PlayerController = Cast<AMyPlayerController>(GetController()))
		{
			if (PlayerController->MoveAction)
			{
				EnhancedInput->BindAction(
					PlayerController->MoveAction,
					ETriggerEvent::Triggered,
					this,
					&AMyPawn::Move
				);
			}

			if (PlayerController->LookAction)
			{
				EnhancedInput->BindAction(
					PlayerController->LookAction,
					ETriggerEvent::Triggered,
					this,
					&AMyPawn::Look
				);
			}
		}
	}

}

void AMyPawn::Move(const FInputActionValue& value)
{
	if (!Controller) return;
	MoveInput = value.Get<FVector2D>();
}

void AMyPawn::Look(const FInputActionValue& value)
{ 
	LookInput = value.Get<FVector2D>();
}
