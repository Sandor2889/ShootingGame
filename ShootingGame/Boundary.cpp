#include "Boundary.h"
#include "MyCoordinate.h"
#include "GameObject.h"

Boundary::Boundary(const CRect& _rect) : rect(_rect) { };

void Boundary::Update(GameObject* _obj)
{
	MyCoordinate pos = _obj->GetPosition();

	if (rect.left >= pos.x)
	{
		pos.x = rect.left;
	}
	if ((rect.right - 1) <= pos.x)
	{
		pos.x = rect.right - 1;
	}
	if (rect.top >= pos.y)
	{
		pos.y = rect.top;
	}
	if (rect.bottom <= pos.y)
	{
		pos.y = rect.bottom;
	}
	_obj->SetPosition(pos);
}