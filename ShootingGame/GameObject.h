#pragma once

#include "MyCoordinate.h"
#include "IComp.h"

#include <vector>


using namespace std;

class GameObject
{
private:

public:
	bool isActive;				// 활성화상태
	MyCoordinate coordinate;
	MyCoordinate size;
	vector<IComp*> compList;

	GameObject();
	GameObject(const MyCoordinate& _coord, const bool& _active);
	~GameObject();

	void AddComp(IComp* _comp);

	void Update();

	void SetPosition(MyCoordinate _coord);
	MyCoordinate GetPosition();

};
