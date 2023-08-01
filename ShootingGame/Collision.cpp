#include "Collision.h"

Collision::Collision(const int& _width, const int& _hight)
{
	width = _width;
	hight = _hight;
};

void Collision::Update(GameObject* _obj)
{
	_obj->GetSize().x = width;
	_obj->GetSize().y = hight;
}