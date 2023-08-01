#include "PlayerBulletInput.h"

PlayerBulletInput::PlayerBulletInput(BulletManager* _mgr)
{
	bulletMgr = _mgr;
}

PlayerBulletInput::~PlayerBulletInput()
{
	delete bulletMgr;
}

void PlayerBulletInput::Update(GameObject* _obj)
{
	if (GetAsyncKeyState(VK_SPACE))
	{
		// spawn bullet
		//std::cout << "£ª";
		bulletMgr->Spawn(MyCoordinate(_obj->GetPosition().x, _obj->GetPosition().y - 1));
	}
}