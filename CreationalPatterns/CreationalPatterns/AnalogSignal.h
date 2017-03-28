#pragma once
#include "stdafx.h"
#include "ISignal.h"

class AnalogSignal: public ISignal
{
private:
	string _code;
public:
	AnalogSignal(string code);
	virtual string GetCode();
	virtual string ToString();
};