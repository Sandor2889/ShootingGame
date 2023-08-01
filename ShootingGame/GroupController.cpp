#include "GroupController.h"

GroupController::~GroupController()
{
	for (GameObject* obj : objList)
	{
		delete obj;
	}
}

void GroupController::Update()
{
	for (int ix = 0; ix < objList.size(); ix++)
	{
		objList[ix]->Update();
	}
}
