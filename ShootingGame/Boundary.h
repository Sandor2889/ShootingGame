#pragma once

#include "IComp.h"
#include <atltypes.h>

class Boundary : public IComp
{
public:
	CRect rect;
	
public:
	Boundary(const CRect& _rect);
	virtual void Update(GameObject* _obj);
};