#include "stdafx.h"
#include "IconWindow.h"
#include "WindowImpl.h"
#include "ImageBackgroundTheme.h"

IconWindow::IconWindow(string imageFile)
{
	_window = new WindowImpl();
	_background = new ImageBackgroundTheme(imageFile);
}
void IconWindow::DrawContent()
{
	_background->Fill(_window);
}
void IconWindow::DrawRect(int x0, int y0, int x1, int y1)
{
	_window->DrawRect(x0, y0, x1, y1);
}