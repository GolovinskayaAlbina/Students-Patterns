#include "stdafx.h"
#include "VariableExpression.h"

const char * VariableExpression::GetName()
{
	return _name;
}

VariableExpression::VariableExpression(const char * name)
{
	_name = name;
}

bool VariableExpression::Evaluate(Context context)
{
	return context.Get(_name);
}
