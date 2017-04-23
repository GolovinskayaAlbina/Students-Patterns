#include "stdafx.h"
#include "IconWindow.h"

IconWindow::IconWindow(IBackgroundTheme* backgroud, string imageFile)
{
	if (backgroud == NULL)
	{
		throw invalid_argument("backgroud");
	}
	_backgroud = backgroud;
	_imageFile = imageFile;
}
void IconWindow::DrawBackground(byte* background, int weigth, int height)
{
	cout<<"background: "<<endl;;
	for(int i = 0; i < weigth; i++) {
		for(int j = 0; j < height; j++) {
			cout <<static_cast<int>(*(background + i*height + j)) << ' ';
		}
		cout<<endl;
	}
}
void IconWindow::DrawContent()
{
	//fill background
	_backgroud->Fill(static_cast<IWindow*>(this));
	//add icon image
	cout<<"icon: "<<_imageFile<<endl;
}
void IconWindow::DrawRect(int x0, int y0, int x1, int y1)
{
	cout<<"x0:"<<x0<<"y0:"<<y0<<"x1:"<<x1<<"y1:"<<y1<<endl;
}