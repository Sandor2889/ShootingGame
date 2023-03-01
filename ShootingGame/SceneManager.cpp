#include "SceneManager.h"
#include "TitleScene.h"

using namespace ShootingGame;

SceneManager::SceneManager() {}

SceneManager::~SceneManager() {}


SceneManager* SceneManager::GetInstance()
{
	if (instance == nullptr) { instance = new SceneManager(); }
	return instance;
}


// 해당 씬 가져오기
BaseScene* SceneManager::GetScene()
{
	return baseScene;
}
