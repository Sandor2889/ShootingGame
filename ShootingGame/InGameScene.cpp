#include "InGameScene.h"
#include "GameManager.h"
#include "IComp.h"
#include "PlayerInput.h"
#include "DisplayBase.h"
#include "MyCoordinate.h"
#include "GameObject.h"
#include "Boundary.h"

using namespace ShootingGame;

InGameScene::InGameScene() {}

void InGameScene::InProgress()
{
	MyConsole::SetConsole(60, 50);

	GameManager* gameMgr = GameManager::GetInstance();

	// fps
	int updateTick = 0;
	int tick = 30;

	IComp* icomp = nullptr;
	PlayerInput playerInput;	// player 입력 처리

	DisplayBase display("山");	// player 출력
	Boundary playerBoundary(Rect(30, 1, 50, 60)); // player 이동범위

	GameObject player(MyCoordinate(29, 40), true);	// player 시작 위치 및 초기화

	// player 기능 추가
	player.AddComp(&playerInput);
	player.AddComp(&playerBoundary);
	player.AddComp(&display);

	while (gameMgr->GetGameState() == GameState::Scene_InGame)
	{
		system("cls");
		
		player.Update();
		
		//MainDisplay();	
		Sleep(tick);
	}
}

// 점수, 목숨 표기
void InGameScene::MainDisplay()
{
	MyConsole::GotoXY(5, 1);
	/*cout << " SCORE : " << _gameMgr->GetScore() << 
"	LIFE : " << _gameMgr->GetLife();*/
}
