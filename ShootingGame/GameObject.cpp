#include "GameObject.h"
#include <iostream>


using namespace std;


GameObject::GameObject()
{
	isActive = false;
	coordinate = MyCoordinate(0, 0);
}

GameObject::GameObject(const MyCoordinate& _coord, const bool& _active)
{
	isActive = _active;
	coordinate = _coord;
}

GameObject::~GameObject()
{
	// 소멸 타이밍 확인 필요 (소멸이후 complist가 사용되는것으로 확인됨)

	for (size_t i = 0; i < compList.size(); i++)
	{
		delete compList[i];
	}
}

void GameObject::Update()
{
	if (isActive == false)
	{
		return;
	}

	for (int i = 0; i < compList.size(); i++)
	{
		compList[i]->Update(this);
	}
}

void GameObject::AddComp(IComp* _comp)
{
	compList.push_back(_comp);
}

void GameObject::ClearComp()
{
	compList.clear();
}

void GameObject::SetPosition(const MyCoordinate& _pos)
{
	coordinate = _pos;
}

MyCoordinate& GameObject::GetPosition()
{
	return coordinate;
}

void GameObject::SetSize(const MyCoordinate& _size)
{
	size = _size;
}

MyCoordinate& GameObject::GetSize()
{
	return size;
}
