#include "stdafx.h"
#include "IBackgroundTheme.h"

class ColorBackgroundTheme: public IBackgroundTheme
{
private:
	byte _colorCode; 
public:
	ColorBackgroundTheme(byte colorCode)
	{
		_colorCode = colorCode;
	}
	virtual void Fill(IWindowImpl* window)
	{
		//create byte array from color, not it is just emulation
		byte colorByteArray[2][2]  = {{_colorCode,_colorCode},{_colorCode,_colorCode}};

		window->DrawBackground(&colorByteArray[0][0], 2, 2);
	}
};