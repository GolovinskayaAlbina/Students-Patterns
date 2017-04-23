#pragma once
#include "IReceiver.h"

class DigitalReceiver: public IReceiver
{
IChannel* _channel;
public:
	DigitalReceiver(IChannel* channel);
	virtual void PrintSignal();
};