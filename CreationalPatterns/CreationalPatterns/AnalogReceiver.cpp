#pragma once
#include "stdafx.h"
#include "AnalogReceiver.h"


AnalogReceiver::AnalogReceiver(IChannel* channel)
{
	_channel = channel;
}

void AnalogReceiver::PrintSignal()
{
	ISignal* signal = _channel->GetSignal();
	cout<<"Analog receiver: "<<signal->ToString()<<endl;
}