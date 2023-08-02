#pragma once

#include "IComp.h"
#include "GameObject.h"
#include "GameManager.h"

#include <vector>

class CollisionController : public IComp 
{
public:
	vector<GameObject*>* targetList;
	virtual void Update(GameObject* _obj);

	virtual void PlayCollision(GameObject* _obj, GameObject* _target) = 0;
};