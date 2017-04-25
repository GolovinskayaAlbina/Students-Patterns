#include "stdafx.h"
#include "ISingleGraphic.h"

class Rectangle: public ISingleGraphic
{
	virtual void Draw(Point point1, Point point2)
	{
		cout<<"("<<point1.X<<","<<point1.Y<<")------"<<endl;

		cout<<"------("<<point2.X<<","<<point2.Y<<")"<<endl;
	}
};