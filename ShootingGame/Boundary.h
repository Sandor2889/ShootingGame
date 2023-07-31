#pragma once

#include "IComp.h"
#include "Rect.h"

class Boundary : public IComp
{
public:
	Rect rect;
	
public:
	Boundary(const Rect& _rect);
	virtual void Update(GameObject* _obj);
};