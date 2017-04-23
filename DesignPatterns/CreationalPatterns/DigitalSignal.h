#pragma once
#include "stdafx.h"
#include "ISignal.h"

class DigitalSignal: public ISignal
{
private:
	string _code;
public:
	DigitalSignal(string code);
	virtual string GetCode();
	virtual string ToString();
};