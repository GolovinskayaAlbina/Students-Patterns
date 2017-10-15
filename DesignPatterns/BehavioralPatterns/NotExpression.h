#pragma once
#include "VariableExpression.h"
class NotExpression : public BooleanExpression
{
	BooleanExpression* _expression;
public:
	NotExpression(BooleanExpression* expression);
	virtual bool Evaluate(Context context);
};