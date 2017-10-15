#pragma once
#include "stdafx.h"
class Context
{
	map<const char*, bool> _context;
public:
	bool Get(const char* variable);
	void Assign(const char* variable, bool value);
};
