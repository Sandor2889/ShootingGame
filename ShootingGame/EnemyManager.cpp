#include "EnemyManager.h"
#include "EnemyFactory.h"

EnemyManager::EnemyManager(const int& _size, CRect _boundary)
{
    for (int i = 0; i < _size; ++i)
    {
        int xRand = rand() % (_boundary.right + _boundary.left);
        MyCoordinate position(xRand, 1);

        GameObject* enemy = EnemyFactory::CreateRandomEnemy(position, _boundary);
        objList.push_back(enemy);
    }
}

EnemyManager::~EnemyManager() { }


// false 상태의 enemy를 찾아 spawn
void EnemyManager::Spawn(const MyCoordinate& _pos)
{
    for (int ix = 0; ix < objList.size(); ix++)
    {
        if (objList[ix]->isActive == false)
        {
            objList[ix]->SetPosition(_pos);
            objList[ix]->isActive = true;
            return;
        }
    }
}
