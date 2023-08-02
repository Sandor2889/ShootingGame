#pragma once

#include "MyCoordinate.h"
#include "IComp.h"

#include <vector>


using namespace std;

class GameObject
{
private:
	MyCoordinate coordinate;	// 위치
	MyCoordinate size;			// 콜리젼 크기

public:
	bool isActive;				// 활성화상태
	vector<IComp*> compList;

	GameObject();
	GameObject(const MyCoordinate& _coord, const bool& _active);
	~GameObject();

	void AddComp(IComp* _comp);
	void ClearComp();

	void Update();

	void SetPosition(const MyCoordinate& _coord);
	MyCoordinate& GetPosition();
	void SetSize(const MyCoordinate& _size);
	MyCoordinate& GetSize();
};
