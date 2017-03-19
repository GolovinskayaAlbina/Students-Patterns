#pragma once
#include "IChannel.h"

class ITransmitter
{
public:
	virtual void SendSignal(ISignal* signal) = 0;
};

