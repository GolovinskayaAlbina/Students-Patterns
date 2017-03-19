#pragma once
#include "ISchemeBuilder.h"
#include "Factory.h"

class SimpleSchemeBuilder: public ISchemeBuilder
{
	Factory _factory;
public:
	virtual Scheme CreateScheme(SignalType type);
};