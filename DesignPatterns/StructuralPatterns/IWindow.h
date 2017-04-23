#include "stdafx.h"
#pragma once

class IWindow
{
public:
	virtual void DrawContent() = 0;
	virtual void DrawRect(int x0, int y0, int x1, int y1) = 0;
};