#include "EnemyBoundary.h"

EnemyBoundary::EnemyBoundary(CRect _rect) : rect(_rect) { }

void EnemyBoundary::Update(GameObject* _obj)
{
	if (_obj->GetPosition().x <= rect.left)
	{
		_obj->GetPosition().x = rect.left;
	}
	if (_obj->GetPosition().x >= rect.right - 1)
	{
		_obj->GetPosition().x = rect.right - 1;
	}
	if (_obj->GetPosition().y >= rect.bottom + 1)
	{
		_obj->GetPosition().y = rect.bottom;
		_obj->isActive = false;
	}
}