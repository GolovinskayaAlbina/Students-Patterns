#include "stdafx.h"
#include "AboutWindow.h"
#include "WindowImpl.h"

AboutWindow::AboutWindow(IBackgroundTheme* background)
{
	if (background == NULL)
	{
		throw invalid_argument("background");
	}
	_background = background;
	_window = new WindowImpl();
}
void AboutWindow::DrawContent()
{
	_window->DrawTitle("About");
	_background->Fill(_window);
	_window->DrawText("This project was created for learning patterns");
}
void AboutWindow::DrawRect(int x0, int y0, int x1, int y1)
{
	_window->DrawRect(x0, y0, x1, y1);
}