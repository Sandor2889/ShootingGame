#pragma once

#include "GroupController.h"


class BulletManager : public GroupController 
{
public:
	BulletManager(int _size);

	void Spawn(MyCoordinate _pos); 
};