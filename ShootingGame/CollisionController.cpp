#include "CollisionController.h"
#include <atltypes.h>

void CollisionController::Update(GameObject* _obj)
{
	CRect thisRect = CRect(CPoint(_obj->GetPosition().x, _obj->GetPosition().y), CSize(_obj->GetSize().x, _obj->GetSize().y));

	// ��� Obj�� ���Ͽ� Ž��
	for (int i = 0; i < targetList->size(); i++)
	{
		// Ȱ��ȭ �Ǿ��ִ� obj�� üũ
		if ((*targetList)[i]->isActive == true)
		{
			// target�� �� ���� ��ǥ ���ϱ�
			CRect targetRect = CRect(CPoint((*targetList)[i]->GetPosition().x, (*targetList)[i]->GetPosition().y),
				CSize((*targetList)[i]->GetSize().x, (*targetList)[i]->GetSize().y));

			// �ݸ����� ��ġ���� üũ
			if (targetRect.IntersectRect(thisRect, targetRect))
			{
				PlayCollision(_obj, (*targetList)[i]);
			}
		}
	}
}