#pragma once
#include "stdafx.h"
#include "Factory.h"
#include "AnalogAbstractFactory.h"
#include "DigitalAbstractFactory.h"

IAbstractFactory* Factory::CreateAbstractFactory(SignalType type)
{
	switch (type)
	{
	case Analog:
		return new AnalogAbstractFactory();
	case Digital:
		return new DigitalAbstractFactory();
	default:
		throw invalid_argument("invalid signal type");
	}
}