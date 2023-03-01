#pragma once

#include <string>

#include "IComp.h"

using namespace std;

class GameObject;

class DisplayBase : public IComp
{
public:
	string mark;

	DisplayBase(string _pchar);
	virtual void Update(GameObject* _obj);

};