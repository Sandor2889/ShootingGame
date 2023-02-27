#pragma once

namespace ShootingGame
{
	class GameManager
	{
	private:
	public:
		GameManager();
		GameManager(const GameManager& _gameMgr);
		~GameManager();
		static GameManager& GetInstance();
	};
}