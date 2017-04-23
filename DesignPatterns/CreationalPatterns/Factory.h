#pragma once
#include "IAbstractFactory.h"
#include "SignalType.h"

class Factory
{
public:
	IAbstractFactory* CreateAbstractFactory(SignalType type);
};