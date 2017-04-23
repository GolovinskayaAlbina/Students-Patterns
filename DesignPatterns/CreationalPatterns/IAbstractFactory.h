#pragma once
#include "ITransmitter.h";
#include "IChannel.h";
#include "IReceiver.h";

class IAbstractFactory
{
public:
	virtual ITransmitter* CreateTransmitter() = 0;
	virtual IReceiver* CreateReceiver() = 0;
};

