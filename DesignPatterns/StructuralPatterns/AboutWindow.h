#pragma once
#include "IWindow.h"
#include "IBackgroundTheme.h"

class AboutWindow: public IWindow
{
private:
	IBackgroundTheme* _background;
	IWindowImpl* _window;
public:
	AboutWindow(IBackgroundTheme* backgroud);
	virtual void DrawContent();
	virtual void DrawRect(int x0, int y0, int x1, int y1);
};