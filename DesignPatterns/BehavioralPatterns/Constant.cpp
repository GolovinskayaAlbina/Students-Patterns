#include "stdafx.h"
#include "Constant.h"

Constant::Constant(bool value)
{
	_value = value;
}

bool Constant::Evaluate(Context context)
{
	return _value;
}
