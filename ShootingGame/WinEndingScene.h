#pragma once

#include "BaseScene.h"

namespace ShootingGame
{
	class WinEndingScene : public BaseScene
	{
	public:
		WinEndingScene();
		virtual void InProgress() override;
		virtual void MainDisplay() override;
	};
}