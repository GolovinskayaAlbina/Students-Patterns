#pragma once
#include "stdafx.h"
#include "DigitalReceiver.h"

DigitalReceiver::DigitalReceiver(IChannel* channel)
{
	_channel = channel;
}

void DigitalReceiver::PrintSignal()
{
	ISignal* signal = _channel->GetSignal();
	cout<<"Digital receiver: "<<signal->ToString()<<endl;
}