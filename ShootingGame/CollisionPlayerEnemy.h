#pragma once

#include "CollisionController.h"

class CollisionPlayerEnemy : public CollisionController 
{
public:
	CollisionPlayerEnemy(vector<GameObject*>* _list);

	virtual void PlayCollision(GameObject* _obj, GameObject* _target) override;
};