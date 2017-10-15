#pragma once
#include "BooleanExpression.h"
class AndExpression : public BooleanExpression
{
	BooleanExpression* _expression1;
	BooleanExpression* _expression2;
public:
	AndExpression(BooleanExpression* expression1, BooleanExpression* expression2);
	virtual bool Evaluate(Context context);
};
