#pragma once

#include "BaseScene.h"
#include "GameManager.h"

namespace ShootingGame
{
	class SceneManager
	{
	private:
		static SceneManager* instance;
		BaseScene* baseScene;

		SceneManager();
		~SceneManager();

	public:
		static SceneManager* GetInstance();	
		BaseScene* GetScene();
	};

	SceneManager* SceneManager::instance = nullptr;
}
