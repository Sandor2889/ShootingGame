#pragma once

#include "GameObject.h"

class Rect;

class EnemyFactory 
{
public:
    static GameObject* CreateLinearEnemy(MyCoordinate position);
    static GameObject* CreateZigzagEnemy(MyCoordinate position);
    static GameObject* CreateRandomEnemy(MyCoordinate position, Rect _boundary);
};