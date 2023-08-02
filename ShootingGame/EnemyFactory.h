#pragma once

#include "GameObject.h"

class CRect;

class EnemyFactory 
{
public:
    static GameObject* CreateLinearEnemy(MyCoordinate position);
    static GameObject* CreateZigzagEnemy(MyCoordinate position);
    static GameObject* CreateRandomEnemy(MyCoordinate position, CRect _boundary);
};