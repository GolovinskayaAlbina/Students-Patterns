#include "Point.h"

class ICompositeGraphic
{
public:
	virtual void Add(ICompositeGraphic* graphic) = 0;
	virtual void Remove(ICompositeGraphic* graphic) = 0;
	virtual void Draw(Point point1, Point point2) = 0;
};