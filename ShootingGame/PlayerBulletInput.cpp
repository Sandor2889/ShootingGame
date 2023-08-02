#include "PlayerBulletInput.h"

PlayerBulletInput::PlayerBulletInput(BulletManager* _mgr)
{
	bulletMgr = _mgr;
}

PlayerBulletInput::~PlayerBulletInput()
{
	bulletMgr = NULL;	// null을 안해주면 오류가뜸.. 왜?
	delete bulletMgr;
}

void PlayerBulletInput::Update(GameObject* _obj)
{
	if (GetAsyncKeyState(VK_SPACE))
	{
		// spawn bullet
		//std::cout << "＊";
		bulletMgr->Spawn(MyCoordinate(_obj->GetPosition().x, _obj->GetPosition().y - 1));
	}
}