#pragma once
#include "Context.h"
class BooleanExpression
{
public:
	virtual bool Evaluate(Context context) = 0;
};
