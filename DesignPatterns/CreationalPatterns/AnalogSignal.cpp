#pragma once
#include "stdafx.h"
#include "AnalogSignal.h"

AnalogSignal::AnalogSignal(string code)
{
	_code = code;
}
string AnalogSignal::GetCode()
{
	return _code;
}
string AnalogSignal::ToString()
{
	return "Analog signal" + _code;
}