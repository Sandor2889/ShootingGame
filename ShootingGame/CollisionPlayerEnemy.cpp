#include "CollisionPlayerEnemy.h"

using namespace ShootingGame;

CollisionPlayerEnemy::CollisionPlayerEnemy(vector<GameObject*>* _list)
{
	targetList = _list;
}

void CollisionPlayerEnemy::PlayCollision(GameObject* _obj, GameObject* _target)
{
	_target->isActive = false; // 충돌한 적기 제거
	
	GameManager* gameMgr = GameManager::GetInstance();
	gameMgr->SetLife(-1);

	// 목숨이 없으면 게임오버
	if (gameMgr->GetLife() <= 0)
	{
		gameMgr->SetGameState(GameState::Scene_LoseEnding);
	}
}
