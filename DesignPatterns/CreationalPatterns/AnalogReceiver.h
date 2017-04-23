#pragma once
#include "IReceiver.h"

class AnalogReceiver: public IReceiver
{
	IChannel* _channel;
public:
	AnalogReceiver(IChannel* channel);
	virtual void PrintSignal();
};