#pragma once
#include "Context.h"
#include "BooleanExpression.h"
class VariableExpression: public BooleanExpression
{
	const char* _name;
public:
	VariableExpression(const char* name);
	const char* GetName();
	virtual bool Evaluate(Context context);
};
