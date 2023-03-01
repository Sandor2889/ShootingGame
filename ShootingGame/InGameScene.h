#pragma once

#include "BaseScene.h"

namespace ShootingGame
{
	class InGameScene : public BaseScene 
	{
	public:
		InGameScene();
		virtual void InProgress();
		virtual void MainDisplay();
	};
}