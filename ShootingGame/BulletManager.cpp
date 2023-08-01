#include "BulletManager.h"

BulletManager::BulletManager(int _size)
{
	objList.resize(_size);
}

void BulletManager::Spawn(MyCoordinate _pos)
{
	for (int ix = 0; ix < objList.size(); ix++) 
	{
		if ((_pos == objList[ix]->GetPosition()) && (objList[ix]->isActive == true)) 
		{
			return;
		}
	}

	for (int ix = 0; ix < objList.size(); ix++) 
	{
		if (objList[ix]->isActive == false)
		{
			objList[ix]->isActive = true;
			objList[ix]->SetPosition(_pos);
			return;
		}
	}
}