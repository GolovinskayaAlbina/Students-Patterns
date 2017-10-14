#pragma once
#include "stdafx.h"
#include "IHelpHandler.h"

class Dialog :public IHelpHandler
{
	IHelpHandler* _redirectHelp;
public:
	Dialog(IHelpHandler* helpHandler)
	{
		_redirectHelp = helpHandler;
	}
	virtual void HandleHelp(HelpRequest request)
	{
		if (_redirectHelp)
		{
			_redirectHelp->HandleHelp(request);
		}
	}
};
