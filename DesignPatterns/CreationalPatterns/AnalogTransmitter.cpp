#pragma once
#include "stdafx.h"
#include "AnalogTransmitter.h"

AnalogTransmitter::AnalogTransmitter(IChannel* channel)
{
	_channel = channel;
}

void AnalogTransmitter::SendSignal(ISignal* signal)
{
	cout<<"Analog transmitter: "<<signal->ToString()<<endl;
	_channel->SendSignal(signal);
}