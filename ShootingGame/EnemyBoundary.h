#pragma once

#include "IComp.h"
#include "GameObject.h"

#include <atltypes.h>

class EnemyBoundary : public IComp
{
public:
	CRect rect;
	EnemyBoundary(CRect _rect);
	virtual void Update(GameObject* _obj);

};
