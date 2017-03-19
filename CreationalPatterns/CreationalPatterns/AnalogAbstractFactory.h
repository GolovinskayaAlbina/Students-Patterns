#pragma once
#include "IAbstractFactory.h"

class AnalogAbstractFactory: public IAbstractFactory
{
	IChannel* _channel;
public:
	AnalogAbstractFactory();
	virtual ITransmitter* CreateTransmitter();
	virtual IReceiver* CreateReceiver();
};