#include "stdafx.h"
#include "NotExpression.h"

NotExpression::NotExpression(BooleanExpression* expression)
{
	_expression = expression;
}

bool NotExpression::Evaluate(Context context)
{
	return !_expression->Evaluate(context);
}
