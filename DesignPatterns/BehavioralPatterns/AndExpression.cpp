#include "stdafx.h"
#include "AndExpression.h"

AndExpression::AndExpression(BooleanExpression * expression1, BooleanExpression * expression2)
{
	_expression1 = expression1;
	_expression2 = expression2;
}

bool AndExpression::Evaluate(Context context)
{
	return _expression1->Evaluate(context)
		&& _expression2->Evaluate(context);
}
