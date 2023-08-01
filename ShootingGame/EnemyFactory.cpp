#include "EnemyFactory.h"
#include "DisplayBase.h"
#include "Collision.h"
#include "EnemyMovement.h"
#include "EnemyBoundary.h"

GameObject* EnemyFactory::CreateLinearEnemy(MyCoordinate position)
{
    GameObject* enemy = new GameObject(position, false);

    enemy->AddComp(new LinearMovement());
    enemy->AddComp(new DisplayBase("��"));
    enemy->AddComp(new Collision(2, 1));

    return enemy;
}

GameObject* EnemyFactory::CreateZigzagEnemy(MyCoordinate position)
{
    GameObject* enemy = new GameObject(position, false);

    enemy->AddComp(new ZigzagMovement());
    enemy->AddComp(new DisplayBase("��"));
    enemy->AddComp(new Collision(2, 1));

    return enemy;
}

GameObject* EnemyFactory::CreateRandomEnemy(MyCoordinate position, Rect _boundary)
{
    int randomType = rand() % 2; // 0 �Ǵ� 1 �����ϰ� ����
    GameObject* enemy;

    if (randomType == 0)
    {
        enemy = CreateLinearEnemy(position);
        enemy->AddComp(new EnemyBoundary(_boundary));
        return enemy; // �������� �����̴� �� ����
    }
    else
    {
        enemy = CreateZigzagEnemy(position);
        enemy->AddComp(new EnemyBoundary(_boundary));
        return enemy; // ������׷� �����̴� �� ����
    }
}