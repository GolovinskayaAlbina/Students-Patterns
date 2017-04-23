#pragma once
#include "IWindowImpl.h"

class IBackgroundTheme
{
public:
	virtual void Fill(IWindowImpl* window) = 0;
};