#pragma once

#include <iostream>

#include "Console.h"

namespace ShootingGame
{
	class BaseScene
	{
	public:
		BaseScene();
		
		virtual void Display() = 0;
	};
}