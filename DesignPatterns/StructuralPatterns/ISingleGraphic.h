#include "ICompositeGraphic.h"

class ISingleGraphic: public ICompositeGraphic
{
public:
	virtual void Add(ICompositeGraphic* graphic) {}
	virtual void Remove(ICompositeGraphic* graphic) {}
};