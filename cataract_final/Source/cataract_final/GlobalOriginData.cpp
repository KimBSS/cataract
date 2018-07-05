// Fill out your copyright notice in the Description page of Project Settings.

#include "GlobalOriginData.h"
#include "IPAddress.h"
#include "SocketSubsystem.h"

// Sets default values
AGlobalOriginData::AGlobalOriginData()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGlobalOriginData::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGlobalOriginData::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FString AGlobalOriginData::GetIpAddress()
{
	FString IpAddr("NONE");
	bool canBind = false;
	TSharedRef<FInternetAddr> LocalIp = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->GetLocalHostAddr(*GLog, canBind);
	if (LocalIp->IsValid())
	{
		IpAddr = LocalIp->ToString(false);
	}
	return IpAddr;
}