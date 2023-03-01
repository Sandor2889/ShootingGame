#include <windows.h>

#include "PlayerInput.h"
#include "MyCoordinate.h"
#include "GameObject.h"


void PlayerInput::Update(GameObject* _obj)
{
	if (GetAsyncKeyState(VK_UP))
	{
		MyCoordinate coord = _obj->GetPosition() + MyCoordinate{ -1, 0 };
		_obj->SetPosition(coord);
	}
	if (GetAsyncKeyState(VK_LEFT))
	{
		MyCoordinate coord = _obj->GetPosition() + MyCoordinate{ 1, 0 };
		_obj->SetPosition(coord);
	}
	if (GetAsyncKeyState(VK_RIGHT))
	{
		MyCoordinate coord = _obj->GetPosition() + MyCoordinate{ 0, -1 };
		_obj->SetPosition(coord);
	}
	if (GetAsyncKeyState(VK_DOWN)) 
	{
		MyCoordinate coord = _obj->GetPosition() + MyCoordinate{ 0, 1 };
		_obj->SetPosition(coord);
	}
}