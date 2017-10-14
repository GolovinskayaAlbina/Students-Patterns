#pragma once
#include "stdafx.h"
#include "IHelpHandler.h"

class Application :public IHelpHandler
{
public:
	virtual void HandleHelp(HelpRequest request)
	{
		if (request.Type == ApplicationHelp)
		{
			cout << "Application help" << endl;
		}
		else
		{
			cout << "There is no help information" << endl;
		}
	}
};