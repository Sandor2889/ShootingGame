#pragma once

#include "IComp.h"
#include "windows.h"
#include "BulletManager.h"

class PlayerBulletInput : public IComp
{
public:
	BulletManager* bulletMgr;

	PlayerBulletInput(BulletManager* _mgr);
	~PlayerBulletInput();
	virtual void Update(GameObject* _obj);
};