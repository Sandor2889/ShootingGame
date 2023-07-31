#pragma once

#include <map>
#include "BaseScene.h"
#include "GameManager.h"

namespace ShootingGame
{
	class SceneManager
	{
	private:
		static SceneManager* instance;
		std::map<GameState, BaseScene*> sceneContainer;
		BaseScene* currentScene;

		SceneManager();
		~SceneManager();
	public:
		static SceneManager* GetInstance();	
		BaseScene* GetScene();
		void SetScene(const GameState& _state);
	};
}
