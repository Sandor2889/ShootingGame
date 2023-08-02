#pragma once

#include "LoseEndingScene.h"

using namespace ShootingGame;

LoseEndingScene::LoseEndingScene() {}

void LoseEndingScene::InProgress()
{
	MainDisplay();
}

void LoseEndingScene::MainDisplay()
{
	system("cls");
	MyConsole::GotoXY(17, 30);
	std::cout << "Game Over";
	system("PAUSE");
}
