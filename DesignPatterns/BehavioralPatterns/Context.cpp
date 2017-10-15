#include "stdafx.h"
#include "Context.h"

bool Context::Get(const char * variable)
{
	return _context.at(variable);
}

void Context::Assign(const char* variable, bool value)
{
	_context.insert(make_pair(variable, value));
}
