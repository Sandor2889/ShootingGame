#include "TitleScene.h"
#include "GameManager.h"

using namespace ShootingGame;

TitleScene::TitleScene() {}

void TitleScene::InProgress()
{
	// 화면창 크기 설정 및 마우스 숨기기
	MyConsole::SetConsole(50, 30);
	MyConsole::CursorHide();
	
	GameManager* gameMgr = GameManager::GetInstance();
	
	while (gameMgr->GetGameState() == GameState::Scene_Title)
	{
		MainDisplay(); 
		if (_kbhit() && _getch() != 1) { gameMgr->SetGameState(GameState::Scene_InGame); }
	}
}

void TitleScene::MainDisplay()
{
	system("cls");
	MyConsole::GotoXY(18, 10);
	std::cout << "Shooting game";
	MyConsole::GotoXY(7, 15);
	std::cout << "If you want to play, press any key !";

	Sleep(1500);
	system("cls");
	MyConsole::GotoXY(18, 10);
	std::cout << "Shooting game";
	Sleep(1000);
}
