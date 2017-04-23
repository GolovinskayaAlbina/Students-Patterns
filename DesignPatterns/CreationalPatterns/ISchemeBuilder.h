#pragma once
#include "Scheme.h"
#include "SignalType.h"

class ISchemeBuilder
{
public:
	virtual Scheme CreateScheme(SignalType type) = 0;
};