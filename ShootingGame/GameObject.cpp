#include "GameObject.h"
#include <iostream>


using namespace std;


GameObject::GameObject()
{
	active = false;
	coordinate = MyCoordinate(0, 0);
}

GameObject::GameObject(MyCoordinate _coord, bool _active)
{
	active = _active;
	coordinate = _coord;
}

void GameObject::Update()
{
	if (active == false)
	{
		return;
	}

	for (int ix = 0; ix < compList.size(); ix++)
	{
		compList[ix]->Update(this);
	}
}

void GameObject::AddComp(IComp* _comp)
{
	compList.push_back(_comp);
}

void GameObject::SetPosition(MyCoordinate _pos)
{
	coordinate = _pos;
}

MyCoordinate GameObject::GetPosition()
{
	return coordinate;
}