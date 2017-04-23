#pragma once
#include "stdafx.h"
#include "DigitalAbstractFactory.h"
#include "DigitalChannel.h"
#include "DigitalTransmitter.h"
#include "DigitalReceiver.h"

DigitalAbstractFactory::DigitalAbstractFactory()
{
	_channel = new DigitalChannel();
}

ITransmitter* DigitalAbstractFactory::CreateTransmitter()
{
	return new DigitalTransmitter(_channel);
}

IReceiver* DigitalAbstractFactory::CreateReceiver()
{
	return new DigitalReceiver(_channel);
}