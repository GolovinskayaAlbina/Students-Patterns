#pragma once
#include "ITransmitter.h"

class AnalogTransmitter: public ITransmitter
{
	IChannel* _channel;
public:
	AnalogTransmitter(IChannel* channel);
	virtual void SendSignal(ISignal* signal);
};