#pragma once


namespace ShootingGame
{
	enum Scene
	{
		Scene_Title,
		Scene_InGame,
		Scene_Ending
	};

	class SceneManager
	{
	private:
		Scene CurrentScene;
		
	public:
		SceneManager();
		SceneManager(const SceneManager& _sceneMgr);
		~SceneManager();

		static SceneManager& GetInstance();
		Scene GetScene();
		void SetScene(int _num);
	};
}
