#pragma once
#include "IWindow.h"
#include "IBackgroundTheme.h"

class IconWindow: public IWindow
{
private:
	string _imageFile;
	IBackgroundTheme* _backgroud;
public:
	IconWindow(IBackgroundTheme* backgroud, string imageFile);
	virtual void DrawBackground(byte* background, int weigth, int height);
	virtual void DrawContent();
	virtual void DrawRect(int x0, int y0, int x1, int y1);
};