#pragma once

#include <string>

#include "IComp.h"

using namespace std;

class GameObject;

class DisplayBase : public IComp
{
public:
	string mark;

	DisplayBase(const string& _pchar);
	virtual void Update(GameObject* _obj);

};