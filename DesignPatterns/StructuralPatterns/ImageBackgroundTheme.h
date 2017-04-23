#include "stdafx.h"
#include "IBackgroundTheme.h"

class ImageBackgroundTheme: public IBackgroundTheme
{
private:
	string _imageFile; 
public:
	ImageBackgroundTheme(string imageFile)
	{
		_imageFile = imageFile;
	}
	virtual void Fill(IWindowImpl* window)
	{
		//create byte array from image, not it is just emulation
		byte imageByteArray[2][2]  = {{0,2},{4,6}};

		window->DrawBackground(&imageByteArray[0][0], 2, 2);
	}
};