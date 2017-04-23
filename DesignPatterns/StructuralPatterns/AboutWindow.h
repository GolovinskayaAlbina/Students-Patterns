#pragma once
#include "IWindow.h"
#include "IBackgroundTheme.h"

class AboutWindow: public IWindow
{
private:
	IBackgroundTheme* _backgroud;
public:
	AboutWindow(IBackgroundTheme* backgroud);
	virtual void DrawBackground(byte* background, int weigth, int height);
	virtual void DrawContent();
	virtual void DrawRect(int x0, int y0, int x1, int y1);
};