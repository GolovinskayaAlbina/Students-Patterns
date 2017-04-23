#pragma once
#include "ITransmitter.h"

class DigitalTransmitter: public ITransmitter
{
	IChannel* _channel;
public:
	DigitalTransmitter(IChannel* channel);
	virtual void SendSignal(ISignal* signal);
};