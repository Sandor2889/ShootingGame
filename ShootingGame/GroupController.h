#pragma once

#include"IComp.h"
#include "GameObject.h"

#include <vector>


using namespace std;

class GroupController
{
public:
	vector<GameObject*> objList;

	virtual ~GroupController();
	void Update();
};