#pragma once
#include "IAbstractFactory.h"

class DigitalAbstractFactory: public IAbstractFactory
{
	IChannel* _channel;
public:
	DigitalAbstractFactory();
	virtual ITransmitter* CreateTransmitter();
	virtual IReceiver* CreateReceiver();
};