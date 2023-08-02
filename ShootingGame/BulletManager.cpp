#include "BulletManager.h"

BulletManager::BulletManager(int _size)
{
	for (int i = 0; i < _size; ++i)
	{
		objList.push_back(new GameObject());
	}
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

	/*int random = rand() % 2;
	
	if (random == 0)
	{
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
	else
	{
		for (int ix = 0; ix < objList.size(); ix++)
		{
			if (objList[ix]->isActive == false)
			{			
				MyCoordinate pos(_pos.x + 1, _pos.y);
				objList[ix]->isActive = true;
				objList[ix]->SetPosition(pos);
				return;
			}
		}

		for (int ix = 0; ix < objList.size(); ix++)
		{
			if (objList[ix]->isActive == false)
			{
				MyCoordinate pos(_pos.x - 2, _pos.y-1);
				objList[ix]->isActive = true;
				objList[ix]->SetPosition(pos);
				return;
			}
		}
	}*/
}