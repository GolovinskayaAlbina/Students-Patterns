#include "stdafx.h"
#include "AboutWindow.h"

AboutWindow::AboutWindow(IBackgroundTheme* backgroud)
{
	if (backgroud == NULL)
	{
		throw invalid_argument("backgroud");
	}
	_backgroud = backgroud;
}
void AboutWindow::DrawBackground(byte* background, int weigth, int height)
{
	cout<<"background: "<<endl;;
	for(int i = 0; i < weigth; i++) {
		for(int j = 0; j < height; j++) {
			cout <<static_cast<int>(*(background + i*height + j)) << ' ';
		}
		cout<<endl;
	}
}
void AboutWindow::DrawContent()
{
	//title
	cout<<"About"<<endl;
	//fill background
	_backgroud->Fill(static_cast<IWindow*>(this));
	//add text
	cout<<"This project was created for learning patterns"<<endl;
}
void AboutWindow::DrawRect(int x0, int y0, int x1, int y1)
{
	cout<<"x0:"<<x0<<"y0:"<<y0<<"x1:"<<x1<<"y1:"<<y1<<endl;
}