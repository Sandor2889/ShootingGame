#pragma once

#include"IComp.h"
#include "GameObject.h"

#include <vector>


using namespace std;

class GroupController
{
public:
	vector<GameObject*> objList;

public:
	virtual ~GroupController();
	virtual void AddComp(IComp* _comp);
	virtual void ClearList();
	virtual void Update();
};