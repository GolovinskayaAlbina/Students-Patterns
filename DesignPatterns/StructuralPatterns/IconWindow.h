#pragma once
#include "IWindow.h"
#include "IWindowImpl.h"
#include "IBackgroundTheme.h"

class IconWindow: public IWindow
{
private:
	IBackgroundTheme* _background;
	IWindowImpl* _window;
public:
	IconWindow(string imageFile);
	virtual void DrawContent();
	virtual void DrawRect(int x0, int y0, int x1, int y1);
};