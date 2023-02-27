#pragma once

#include "MyCoordinate.h"
#include "IComp.h"

#include <vector>


using namespace std;

class GameObject
{
private:

public:
	bool active;
	MyCoordinate coordinate;
	MyCoordinate size;
	vector<IComp*> compList;

	GameObject();
	GameObject(MyCoordinate _coord, bool _active);

	void AddComp(IComp* _comp);

	void Update();

	void SetPosition(MyCoordinate _coord);
	MyCoordinate GetPosition();

};
