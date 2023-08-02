
#include "CollisionPlayerBulletEnemy.h"

using namespace ShootingGame;


CollisionPlayerBulletEnemy::CollisionPlayerBulletEnemy(vector<GameObject*>* _list)
{
	targetList = _list;
}

void CollisionPlayerBulletEnemy::PlayCollision(GameObject* _obj, GameObject* _target)
{
	_obj->isActive = false;	   // 충돌한 Bullet 제거
	_target->isActive = false; // 충돌한 적기 제거

	GameManager* gameMgr = GameManager::GetInstance();
	gameMgr->SetScore(10);
	gameMgr->CheckGoal();	// 목표 점수 달성 확인
}