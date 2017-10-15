#pragma once
#include "BooleanExpression.h"
class Constant : public BooleanExpression
{
	bool _value;
public:
	Constant(bool value);
	virtual bool Evaluate(Context context);
};
