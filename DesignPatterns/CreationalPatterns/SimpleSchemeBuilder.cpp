#pragma once
#include "stdafx.h"
#include "Factory.h"
#include "SimpleSchemeBuilder.h"

Scheme SimpleSchemeBuilder::CreateScheme(SignalType type)
{
	IAbstractFactory* abstractFactory = _factory.CreateAbstractFactory(type);

	Scheme scheme;
	scheme.SetTransmitter(abstractFactory->CreateTransmitter());
	scheme.SetReceiver(abstractFactory->CreateReceiver());

	return scheme;
}
