#include <time.h>

#include "GameManager.h"
#include "SceneManager.h"

using namespace ShootingGame;

class BaseScene;

int main()
{
	GameManager* gameMgr = GameManager::GetInstance();
	SceneManager* sceneMgr = SceneManager::GetInstance();

	// 첫 시작 씬 설정 -> Title Scene
	gameMgr->SetGameState(GameState::Scene_Title);

	// Ending Scene이 아닐때까지 실행
	while (gameMgr->GetGameState() != GameState::Scene_WinEnding && gameMgr->GetGameState() != GameState::Scene_LoseEnding)
	{
		sceneMgr->GetScene()->InProgress();
	}

	return 0;
}