#pragma once

#include <iostream>

#include "Console.h"
#include "Windows.h"
#include "conio.h"

namespace ShootingGame
{
	class BaseScene
	{
	public:
		BaseScene();

		virtual void InProgress() = 0;
		virtual void MainDisplay() = 0;
	};
}