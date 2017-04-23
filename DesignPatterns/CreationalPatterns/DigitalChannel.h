#pragma once
#include "IChannel.h"

class DigitalChannel: public IChannel
{
private:
	ISignal* _signal;
public:
	virtual void SendSignal(ISignal* signal);
	virtual ISignal* GetSignal();
};