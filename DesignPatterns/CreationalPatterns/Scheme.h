#pragma once
#include "ISignal.h"
#include "DigitalSignal.h"
#include "AnalogSignal.h"
#include "ITransmitter.h"
#include "IReceiver.h"
#include "IChannel.h"

class IConverter
{
public:
	virtual ISignal* Convert(ISignal* signal) = 0;
};

class ADConvarter: IConverter
{
public:
	virtual ISignal* Convert(ISignal* signal)
	{
		return new DigitalSignal(signal->GetCode());
	}
};

class DAConvarter
{                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
public:
	virtual ISignal* Convert(ISignal* signal)
	{
		return new AnalogSignal(signal->GetCode());
	}
};

class Scheme
{
private:
	ITransmitter* _transmitter;
	IReceiver* _receiver;
public:
	virtual void Send(ISignal* signal)
	{
		_transmitter->SendSignal(signal);
		_receiver->PrintSignal();
	}

	void SetTransmitter(ITransmitter* transmitter)
	{
		_transmitter = transmitter;
	}

	void SetReceiver(IReceiver* receiver)
	{
		_receiver = receiver;
	}
};