#include "EnemyFactory.h"
#include "DisplayBase.h"
#include "Collision.h"
#include "EnemyMovement.h"
#include "EnemyBoundary.h"

GameObject* EnemyFactory::CreateLinearEnemy(MyCoordinate position)
{
    GameObject* enemy = new GameObject(position, false);

    enemy->AddComp(new LinearMovement());
    enemy->AddComp(new DisplayBase("▽"));
    enemy->AddComp(new Collision(2, 1));

    return enemy;
}

GameObject* EnemyFactory::CreateZigzagEnemy(MyCoordinate position)
{
    GameObject* enemy = new GameObject(position, false);

    enemy->AddComp(new ZigzagMovement());
    enemy->AddComp(new DisplayBase("▼"));
    enemy->AddComp(new Collision(2, 1));

    return enemy;
}

GameObject* EnemyFactory::CreateRandomEnemy(MyCoordinate position, CRect _boundary)
{
    int randomType = rand() % 2; // 0 또는 1 랜덤하게 선택
    GameObject* enemy;

    if (randomType == 0)
    {
        enemy = CreateLinearEnemy(position);
        enemy->AddComp(new EnemyBoundary(_boundary));
        return enemy; // 직선으로 움직이는 적 생성
    }
    else
    {
        enemy = CreateZigzagEnemy(position);
        enemy->AddComp(new EnemyBoundary(_boundary));
        return enemy; // 지그재그로 움직이는 적 생성
    }
}
