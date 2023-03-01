#pragma once

class MyCoordinate
{
public:
	int x;
	int y;

	MyCoordinate();
	MyCoordinate(int _x, int _y);

	MyCoordinate operator+ (const MyCoordinate& _coord);
	MyCoordinate operator- (const MyCoordinate& _coord);
	bool operator== (const MyCoordinate& _coord);
};