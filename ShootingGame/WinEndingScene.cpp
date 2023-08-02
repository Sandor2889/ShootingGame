#include "WinEndingScene.h"

using namespace ShootingGame;

WinEndingScene::WinEndingScene() {}

void WinEndingScene::InProgress()
{
	MainDisplay();
}

void WinEndingScene::MainDisplay()
{
	system("cls");
	MyConsole::GotoXY(20, 30);
	std::cout << "WIN";
	system("PAUSE");
}
