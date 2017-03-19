#pragma once
#include "stdafx.h"

class ISignal
{
public:
	virtual string GetCode() = 0;
	virtual string ToString() = 0;
};

class AnalogSignal: public ISignal
{
private:
	string _code;
public:
	AnalogSignal(string code)
	{
		_code = code;
	}
	virtual string GetCode()
	{
		return _code;
	}
	virtual string ToString()
	{
		return "Analog signal" + _code;
	}
};

class DigitalSignal: public ISignal
{
private:
	string _code;
public:
	DigitalSignal(string code)
	{
		_code = code;
	}
	virtual string GetCode()
	{
		return _code;
	}
	virtual string ToString()
	{
		return "Digital signal" + _code;
	}
};
