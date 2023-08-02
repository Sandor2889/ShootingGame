#pragma once

#include "CollisionController.h"

#include <vector>


class CollisionPlayerBulletEnemy : public CollisionController
{
public:
	CollisionPlayerBulletEnemy(vector<GameObject*>* _list);

	virtual void PlayCollision(GameObject* _obj, GameObject* _target) override;
};