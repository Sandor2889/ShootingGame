#pragma once

#include "IComp.h"

class PlayerInput : public IComp
{
public:
	virtual void Update(GameObject* _obj);
};