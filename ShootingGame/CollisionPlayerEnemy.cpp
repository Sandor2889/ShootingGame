#include "CollisionPlayerEnemy.h"

using namespace ShootingGame;

CollisionPlayerEnemy::CollisionPlayerEnemy(vector<GameObject*>* _list)
{
	targetList = _list;
}

void CollisionPlayerEnemy::PlayCollision(GameObject* _obj, GameObject* _target)
{
	_target->isActive = false; // �浹�� ���� ����
	
	GameManager* gameMgr = GameManager::GetInstance();
	gameMgr->SetLife(-1);

	// ����� ������ ���ӿ���
	if (gameMgr->GetLife() <= 0)
	{
		gameMgr->SetGameState(GameState::Scene_LoseEnding);
	}
}