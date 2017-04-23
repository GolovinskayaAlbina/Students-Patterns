#pragma once
#include "stdafx.h"
#include "AnalogChannel.h"
#include "AnalogSignal.h"

void AnalogChannel::SendSignal(ISignal* signal)
{
	if (typeid(*signal) != typeid(AnalogSignal))
	{
		throw invalid_argument("should be analog signal");
	}
	_signal = signal;
}

ISignal* AnalogChannel::GetSignal()
{
	return _signal;
}
