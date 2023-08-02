
#include "CollisionPlayerBulletEnemy.h"

using namespace ShootingGame;


CollisionPlayerBulletEnemy::CollisionPlayerBulletEnemy(vector<GameObject*>* _list)
{
	targetList = _list;
}

void CollisionPlayerBulletEnemy::PlayCollision(GameObject* _obj, GameObject* _target)
{
	_obj->isActive = false;	   // �浹�� Bullet ����
	_target->isActive = false; // �浹�� ���� ����

	GameManager* gameMgr = GameManager::GetInstance();
	gameMgr->SetScore(10);
	gameMgr->CheckGoal();	// ��ǥ ���� �޼� Ȯ��
}