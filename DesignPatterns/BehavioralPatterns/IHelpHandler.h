#pragma once
#include "HelpRequest.h"

class IHelpHandler
{
public:
	virtual void HandleHelp(HelpRequest request) = 0;
};