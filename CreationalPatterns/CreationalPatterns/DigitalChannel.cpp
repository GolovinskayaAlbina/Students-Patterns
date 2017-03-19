#pragma once
#include "stdafx.h"
#include "DigitalChannel.h"

void DigitalChannel::SendSignal(ISignal* signal)
{
	if (typeid(*signal) != typeid(DigitalSignal))
	{
		throw invalid_argument("should be digital signal");
	}
	_signal = signal;
}

ISignal* DigitalChannel::GetSignal()
{
	return _signal;
}