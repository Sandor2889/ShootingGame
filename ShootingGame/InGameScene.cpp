#include "InGameScene.h"
#include "GameManager.h"
#include "IComp.h"
#include "PlayerInput.h"
#include "DisplayBase.h"
#include "MyCoordinate.h"
#include "GameObject.h"

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
	PlayerInput playerInput;	// player �Է� ó��

	DisplayBase display("ߣ");	// player

	GameObject player(MyCoordinate(29, 40), true);	// player ���� ��ġ �� �ʱ�ȭ

	// player ��� �߰�
	player.AddComp(&playerInput);
	player.AddComp(&display);

	while (gameMgr->GetGameState() == GameState::Scene_InGame)
	{
		system("cls");
		
		player.Update();
		
		//MainDisplay();	
		Sleep(tick);
	}
}

// ����, ��� ǥ��
void InGameScene::MainDisplay()
{
	MyConsole::GotoXY(5, 1);
	/*cout << " SCORE : " << _gameMgr->GetScore() << 
"	LIFE : " << _gameMgr->GetLife();*/
}