#pragma once
#include "stdafx.h"
#include "DigitalSignal.h"

DigitalSignal::DigitalSignal(string code)
{
	_code = code;
}
string DigitalSignal::GetCode()
{
	return _code;
}
string DigitalSignal::ToString()
{
	return "Digital signal" + _code;
}