#include "SceneManager.h"
#include "TitleScene.h"
#include "InGameScene.h"
#include "WinEndingScene.h"
#include "LoseEndingScene.h"

using namespace ShootingGame;

SceneManager* SceneManager::instance = nullptr;

SceneManager::SceneManager()
{
	currentScene = NULL;
	sceneContainer.insert({ GameState::Scene_Title, new TitleScene });
	sceneContainer.insert({ GameState::Scene_InGame, new InGameScene });
	sceneContainer.insert({ GameState::Scene_WinEnding, new WinEndingScene });
	sceneContainer.insert({ GameState::Scene_LoseEnding, new LoseEndingScene });
}

SceneManager::~SceneManager()
{
	if (currentScene != NULL) { delete currentScene; }

	for (const auto& pair : sceneContainer)
	{
		delete pair.second;
	}
	sceneContainer.clear();
}


SceneManager* SceneManager::GetInstance()
{
	if (SceneManager::instance == nullptr) { SceneManager::instance = new SceneManager(); }
	return SceneManager::instance;
}


// 해당 씬 가져오기
BaseScene* SceneManager::GetScene()
{
	return currentScene;
}

void SceneManager::SetScene(const GameState& _state)
{
	currentScene = sceneContainer.at(_state);
}
