#include "GroupController.h"

GroupController::~GroupController()
{
	for (GameObject* obj : objList)
	{
		delete obj;
	}
}

void GroupController::AddComp(IComp* _comp)
{
	for (int ix = 0; ix < objList.size(); ix++)
	{
		objList[ix]->AddComp(_comp);
	}
}

void GroupController::ClearList()
{
	objList.clear();
}

void GroupController::Update()
{
	for (int ix = 0; ix < objList.size(); ix++)
	{
		objList[ix]->Update();
	}
}
