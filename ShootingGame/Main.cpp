#include <time.h>
#include <cstdlib>

#include "Console.h"
#include "Rect.h"
#include "GameManager.h"
#include "SceneManager.h"

using namespace ShootingGame;

int main()
{
	// ȭ��â ũ�� ���� �� ���콺 �����
	MyConsole::SetConsole(40, 10);
	MyConsole::CursorHide();
	Rect ConsoleBoundary(1, 1, 40, 30);

	GameManager gameMgr = GameManager::GetInstance();
	SceneManager sceneMgr = SceneManager::GetInstance();


	return 0;
}