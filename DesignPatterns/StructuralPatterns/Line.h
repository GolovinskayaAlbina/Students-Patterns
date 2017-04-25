#include "stdafx.h"
#include "ISingleGraphic.h"

class Line: public ISingleGraphic
{
	virtual void Draw(Point point1, Point point2)
	{
		cout<<"("<<point1.X<<","<<point1.Y<<")------("<<point2.X<<","<<point2.Y<<")"<<endl;
	}
};