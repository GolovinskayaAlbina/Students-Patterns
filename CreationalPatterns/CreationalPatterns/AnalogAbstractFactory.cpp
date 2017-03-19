#pragma once
#include "stdafx.h"
#include "AnalogAbstractFactory.h"
#include "AnalogChannel.h"
#include "AnalogTransmitter.h"
#include "AnalogReceiver.h"

AnalogAbstractFactory::AnalogAbstractFactory()
{
	_channel = new AnalogChannel();
}

ITransmitter* AnalogAbstractFactory::CreateTransmitter()
{
	return new AnalogTransmitter(_channel);
}

IReceiver* AnalogAbstractFactory::CreateReceiver()
{
	return new AnalogReceiver(_channel);
}