#include "SceneManager.h"
#include "TitleScene.h"
#include "InGameScene.h"

using namespace ShootingGame;

SceneManager* SceneManager::instance = nullptr;

SceneManager::SceneManager()
{
	currentScene = NULL;
	sceneContainer.insert({ GameState::Scene_Title, new TitleScene });
	sceneContainer.insert({ GameState::Scene_InGame, new InGameScene });
}

SceneManager::~SceneManager() {}


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
