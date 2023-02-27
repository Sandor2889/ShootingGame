#include "GameManager.h"

using namespace ShootingGame;

GameManager::GameManager() {}

GameManager::GameManager(const GameManager& _gameMgr) {}

GameManager::~GameManager() {}

GameManager& GameManager::GetInstance()
{
	static GameManager gameMgr;
	return gameMgr;
}
