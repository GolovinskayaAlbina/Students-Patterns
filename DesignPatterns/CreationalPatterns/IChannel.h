#pragma once
#include "ISignal.h"

class IChannel
{
public:
	virtual void SendSignal(ISignal* signal) = 0;
	virtual ISignal* GetSignal() = 0;
};


