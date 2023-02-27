#pragma once

class GameObject;

__interface IComp
{
public:
	virtual void Update(GameObject* _obj) = 0;
};