#pragma once
#include "stdafx.h"

class ISignal
{
public:
	virtual string GetCode() = 0;
	virtual string ToString() = 0;
};

