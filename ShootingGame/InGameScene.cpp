#include "InGameScene.h"
#include "GameManager.h"
#include "IComp.h"
#include "PlayerInput.h"
#include "DisplayBase.h"
#include "MyCoordinate.h"
#include "GameObject.h"
#include "Boundary.h"
#include "Collision.h"
#include "EnemyManager.h"
#include "BulletManager.h"
#include "PlayerBulletMovement.h"
#include "PlayerBulletInput.h"
#include "CollisionPlayerEnemy.h"
#include "CollisionPlayerBulletEnemy.h"

using namespace ShootingGame;

InGameScene::InGameScene() {}

void InGameScene::InProgress()
{
	MyConsole::SetConsole(60, 50);

	GameManager* gameMgr = GameManager::GetInstance();

	// fps
	int updateTick = 0;
	int tick = 30;

	CRect BoundaryRect(1, 1, 60, 50);

	IComp* icomp = nullptr;

	// Player 설정
	DisplayBase display("山");	// player 출력
	Boundary playerBoundary(CRect(1, 30, 60, 50)); // player 이동범위
	PlayerInput playerInput;	// player 입력 처리
	Collision PlayerColl(2, 1);

	// Bullet 설정
	BulletManager playerBulletMgr(10);
	PlayerBulletMovement playerBulletMovement;
	DisplayBase playerBulletDisplay("＊");
	PlayerBulletInput playerBulletInput(&playerBulletMgr);
	Collision PlayerBulletColl(1, 1);

	GameObject player(MyCoordinate(29, 40), true);	// player 시작 위치 및 초기화

	// player 기능 추가
	player.AddComp(&playerInput);
	player.AddComp(&playerBulletInput);
	player.AddComp(&playerBoundary);
	player.AddComp(&PlayerColl);
	player.AddComp(&display);

	// Player Bullet 기능 추가
	playerBulletMgr.AddComp(&playerBulletMovement);
	playerBulletMgr.AddComp(&PlayerBulletColl);
	playerBulletMgr.AddComp(&playerBulletDisplay);

	// Enemy
	EnemyManager enemyMgr(30, BoundaryRect);

	// 충돌 설정
	// Player <-> Enemy
	CollisionPlayerEnemy collisionPlayerEnemy(&enemyMgr.objList);
	player.AddComp(&collisionPlayerEnemy);

	// PlayerBullet <-> Enemy
	CollisionPlayerBulletEnemy collisionPlayerBulletEnemy(&enemyMgr.objList);
	playerBulletMgr.AddComp(&collisionPlayerBulletEnemy);

	while (gameMgr->GetGameState() == GameState::Scene_InGame)
	{
		updateTick += tick;
		if (updateTick > 1000)
		{
			updateTick = 0;
			int xRand = rand() % (BoundaryRect.right + BoundaryRect.left);
			enemyMgr.Spawn(MyCoordinate{ xRand, 1 });
		}

		system("cls");
		
		player.Update();
		playerBulletMgr.Update();
		enemyMgr.Update();

		MainDisplay();	
		Sleep(tick);
	}

	player.ClearComp();
	playerBulletMgr.ClearList();
	enemyMgr.ClearList();
}

// 점수, 목숨 표기
void InGameScene::MainDisplay()
{
	GameManager* gameMgr = GameManager::GetInstance();

	MyConsole::GotoXY(1, 1);
	cout << " SCORE : " << gameMgr->GetScore() <<
"	LIFE : " << gameMgr->GetLife();
}
