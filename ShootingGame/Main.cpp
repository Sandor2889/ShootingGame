#include <time.h>
#include <cstdlib>
#include "GameManager.h"
#include "SceneManager.h"
#include "Rect.h"

using namespace ShootingGame;

class BaseScene;

int main()
{
	GameManager* gameMgr = GameManager::GetInstance();
	SceneManager* sceneMgr = SceneManager::GetInstance();
	gameMgr->SetGameState(GameState::Scene_Title);

	while (true)
	{
		sceneMgr->GetScene()->InProgress();
	}

	return 0;
}