#pragma once
#include "stdafx.h"
#include"ICommand.h"

class MenuItem
{
	ICommand* _command;
public:
	MenuItem(ICommand* command)
	{
		_command = command;
	}
	void Click()
	{
		_command->Execute();
	}
};