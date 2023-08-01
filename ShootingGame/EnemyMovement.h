#pragma once

#include "GameObject.h"

class EnemyMovement : public IComp
{
public:
    virtual ~EnemyMovement() {}
    virtual void Update(GameObject* obj) = 0;
};

// �������� �������� ��
class LinearMovement : public EnemyMovement
{
public:
    void Update(GameObject* _obj) override
    {
        _obj->GetPosition().y++;
    }
};

// ������׷� �������� ��
class ZigzagMovement : public EnemyMovement
{
public:
    void Update(GameObject* _obj) override
    {
        int select = rand() % 6;
        switch (select)
        {
        case 0:
            break;
        case 1:
            _obj->GetPosition().x--;
            break;
        case 2:
            _obj->GetPosition().x--;
            _obj->GetPosition().y += 1;
            break;
        case 3:
            _obj->GetPosition().y += 1;
            break;
        case 4:
            _obj->GetPosition().x++;
            _obj->GetPosition().y += 1;
            break;
        case 5:
            _obj->GetPosition().x++;
            break;
        }
    }
};