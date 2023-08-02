#pragma once

#include "GroupController.h"
#include <atltypes.h>

class EnemyManager : public GroupController 
{
public:
    EnemyManager(const int& _size, CRect _boundary);
    virtual ~EnemyManager() override;
    virtual void Spawn(const MyCoordinate& _pos);
};
