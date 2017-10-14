#pragma once
#include "HelpType.h"

class HelpRequest
{
public:
	HelpRequest(HelpType type)
	{
		Type = type;
	}
	HelpType Type;
};