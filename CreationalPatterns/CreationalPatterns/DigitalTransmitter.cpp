#pragma once
#include "stdafx.h"
#include "DigitalTransmitter.h"

DigitalTransmitter::DigitalTransmitter(IChannel* channel)
{
	_channel = channel;
}

void DigitalTransmitter::SendSignal(ISignal* signal)
{
	cout<<"Digital transmitter: "<<signal->ToString()<<endl;
	_channel->SendSignal(signal);
}