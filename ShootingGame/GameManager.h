#pragma once

namespace ShootingGame
{
	enum class GameState
	{
		Scene_Title,
		Scene_InGame,
		Scene_Ending
	};

	class GameManager
	{
	private:
		static GameManager* instance;
		GameState currentState;
		int score;
		int life;

	public:
		GameManager();
		~GameManager();
		static GameManager* GetInstance();
		GameState GetGameState();
		void SetGameState(GameState _state);
		int GetScore();
		void SetScore(int _num);
		int GetLife();
		void SetLife(int _num);
	};

	
}