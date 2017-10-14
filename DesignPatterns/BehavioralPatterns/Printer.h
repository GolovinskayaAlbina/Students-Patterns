#pragma once
#include "stdafx.h"
#include "IHelpHandler.h"

class Printer :public IHelpHandler
{
	IHelpHandler* _redirectHelp;
public:
	Printer(IHelpHandler* helpHandler)
	{
		_redirectHelp = helpHandler;
	}
	virtual void HandleHelp(HelpRequest request)
	{
		if (request.Type == PrinterHelp)
		{
			cout << "Printer help" << endl;
		}
		else if (_redirectHelp)
		{
			_redirectHelp->HandleHelp(request);
		}
	}
};
