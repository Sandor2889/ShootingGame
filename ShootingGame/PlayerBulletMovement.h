#pragma once

#include "IComp.h"
#include "GameObject.h"

class PlayerBulletMovement : public	IComp 
{
public:
	virtual void Update(GameObject* _obj);
};