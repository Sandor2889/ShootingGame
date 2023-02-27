#include <time.h>
#include <cstdlib>

#include "Console.h"
#include "Rect.h"
#include "GameManager.h"
#include "SceneManager.h"

using namespace ShootingGame;

int main()
{
	// 화면창 크기 설정 및 마우스 숨기기
	MyConsole::SetConsole(40, 10);
	MyConsole::CursorHide();
	Rect ConsoleBoundary(1, 1, 40, 30);

	GameManager gameMgr = GameManager::GetInstance();
	SceneManager sceneMgr = SceneManager::GetInstance();


	return 0;
}