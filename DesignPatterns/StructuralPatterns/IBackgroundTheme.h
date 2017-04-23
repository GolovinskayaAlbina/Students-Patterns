#pragma once
#include "IWindow.h"

class IBackgroundTheme
{
public:
	virtual void Fill(IWindow* window) = 0;
};