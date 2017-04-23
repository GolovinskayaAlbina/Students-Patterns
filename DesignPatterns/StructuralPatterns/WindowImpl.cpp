#include "stdafx.h"
#include "WindowImpl.h"

void WindowImpl::DrawBackground(byte* background, int weigth, int height)
{
	cout<<"background: "<<endl;;
	for(int i = 0; i < weigth; i++) {
		for(int j = 0; j < height; j++) {
			cout <<static_cast<int>(*(background + i*height + j)) << ' ';
		}
		cout<<endl;
	}
}
void WindowImpl::DrawTitle(string title)
{
	cout<<"title: "<<title<<endl;
}
void WindowImpl::DrawText(string text)
{
	cout<<"text: "<<text<<endl;
}
void WindowImpl::DrawRect(int x0, int y0, int x1, int y1)
{
	cout<<"x0:"<<x0<<"y0:"<<y0<<"x1:"<<x1<<"y1:"<<y1<<endl;
}