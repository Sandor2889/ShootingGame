#include "SceneManager.h"

using namespace ShootingGame;

SceneManager::SceneManager () {};
SceneManager::~SceneManager() {};

SceneManager::SceneManager(const SceneManager& _sceneMgr) {};

SceneManager& SceneManager::GetInstance()
{
	static SceneManager sceneMgr;
	return sceneMgr;
}