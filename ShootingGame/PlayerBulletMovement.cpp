#include "PlayerBulletMovement.h"

void PlayerBulletMovement::Update(GameObject* _obj)
{
	_obj->GetPosition().y--;

	if (_obj->GetPosition().y < 1)
	{
		_obj->GetPosition().y = 1;
		_obj->isActive = false;
	}
}