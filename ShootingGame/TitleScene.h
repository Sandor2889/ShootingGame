#pragma once

#include "BaseScene.h"

namespace ShootingGame
{
	class TitleScene : public BaseScene
	{
	public:
		TitleScene();
		virtual void InProgress();
		virtual void MainDisplay();
	};
}