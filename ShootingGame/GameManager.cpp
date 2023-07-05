#include "GameManager.h"
#include "SceneManager.h"

using namespace ShootingGame;
GameManager* GameManager::instance = nullptr;
GameManager::GameManager() {}

GameManager::~GameManager() 
{
	delete instance;
	instance = nullptr;
}

GameManager* GameManager::GetInstance()
{
	if (GameManager::instance == nullptr) { GameManager::instance = new GameManager(); }
	return GameManager::instance;
}


// 게임 상태 가져오기
GameState GameManager::GetGameState()
{
	return currentState;
}

// 게임 상태 변경
void GameManager::SetGameState(GameState _state)
{
	currentState = _state;
	SceneManager::GetInstance()->SetScene(_state);
}

// 점수 가져오기
int GameManager::GetScore()
{
	return score;
}

// 점수 변경
void ShootingGame::GameManager::SetScore(int _num)
{
	score += _num;
}

// 목숨 가져오기
int ShootingGame::GameManager::GetLife()
{
	return life;
}

// 목숨 변경
void ShootingGame::GameManager::SetLife(int _num)
{
	life += _num;
}
