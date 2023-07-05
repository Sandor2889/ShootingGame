#include <time.h>

#include "GameManager.h"
#include "SceneManager.h"
#include "Rect.h"

using namespace ShootingGame;

class BaseScene;



int main()
{
	GameManager* gameMgr = GameManager::GetInstance();
	SceneManager* sceneMgr = SceneManager::GetInstance();

	// 첫 시작 씬 설정 -> Title Scene
	gameMgr->SetGameState(GameState::Scene_Title);

	while (true)
	{
		sceneMgr->GetScene()->InProgress();
	}

	return 0;
}