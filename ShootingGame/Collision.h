#pragma once

#include "IComp.h"
#include "GameObject.h"

class Collision : public IComp {
public:
	int width;
	int hight;

	Collision(const int& _width, const int& _hight);

	virtual void Update(GameObject* _obj);

};