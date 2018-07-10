// Fill out your copyright notice in the Description page of Project Settings.

#include "GlobalOrigin.h"
#include "IPAddress.h"
#include "SocketSubsystem.h"

AGlobalOrigin::AGlobalOrigin()
{
	FString IpAddress = GetIpAddress();

	ServerAddress = IpAddress;
	ClientAddress = IpAddress;
}

FString AGlobalOrigin::GetIpAddress()
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
