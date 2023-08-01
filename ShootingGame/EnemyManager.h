#pragma once

#include "GroupController.h"
#include "Rect.h"

class EnemyManager : public GroupController 
{
public:
    EnemyManager(const int& _size, Rect _boundary);
    virtual ~EnemyManager() override;
    virtual void Spawn(const MyCoordinate& _pos);
};
