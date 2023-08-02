#pragma once

#include "BaseScene.h"

namespace ShootingGame
{
	class LoseEndingScene : public BaseScene
	{
	public:
		LoseEndingScene();
		virtual void InProgress() override;
		virtual void MainDisplay() override;
	};
}