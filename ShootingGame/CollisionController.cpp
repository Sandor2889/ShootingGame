#include "CollisionController.h"
#include <atltypes.h>

void CollisionController::Update(GameObject* _obj)
{
	CRect thisRect = CRect(CPoint(_obj->GetPosition().x, _obj->GetPosition().y), CSize(_obj->GetSize().x, _obj->GetSize().y));

	// 모든 Obj에 대하여 탐색
	for (int i = 0; i < targetList->size(); i++)
	{
		// 활성화 되어있는 obj만 체크
		if ((*targetList)[i]->isActive == true)
		{
			// target의 네 점의 좌표 구하기
			CRect targetRect = CRect(CPoint((*targetList)[i]->GetPosition().x, (*targetList)[i]->GetPosition().y),
				CSize((*targetList)[i]->GetSize().x, (*targetList)[i]->GetSize().y));

			// 콜리젼이 겹치는지 체크
			if (targetRect.IntersectRect(thisRect, targetRect))
			{
				PlayCollision(_obj, (*targetList)[i]);
			}
		}
	}
}