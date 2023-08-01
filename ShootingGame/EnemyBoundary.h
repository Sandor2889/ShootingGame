#pragma once

#include "IComp.h"
#include "Rect.h"
#include "GameObject.h"

class EnemyBoundary : public IComp
{
public:
	Rect rect;
	EnemyBoundary(Rect _rect);
	virtual void Update(GameObject* _obj);

};
