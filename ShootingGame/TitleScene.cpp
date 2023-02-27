#include "TitleScene.h"

using namespace ShootingGame;

TitleScene::TitleScene() {}

void TitleScene::DisplayTitle()
{
	MyConsole::GotoXY(13, 3);
	std::cout << "Shooting game";
	
	MyConsole::GotoXY(0, 6);
	std::cout << "   Start    Exit";
}
