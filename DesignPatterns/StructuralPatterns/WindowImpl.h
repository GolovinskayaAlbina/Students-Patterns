#pragma once
#include "IWindowImpl.h"

class WindowImpl: public IWindowImpl
{
public:
	virtual void DrawBackground(byte* background, int weigth, int height);
	virtual void DrawTitle(string title);
	virtual void DrawText(string text);
	virtual void DrawRect(int x0, int y0, int x1, int y1);
};