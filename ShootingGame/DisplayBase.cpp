#include <iostream>

#include "DisplayBase.h"
#include "Console.h"
#include "GameObject.h"

DisplayBase::DisplayBase(string _pchar)
{
	mark = _pchar;
}

void DisplayBase::Update(GameObject* _obj)
{
	MyConsole::GotoXY(_obj->GetPosition().x, _obj->GetPosition().y);
	std::cout << mark;
}