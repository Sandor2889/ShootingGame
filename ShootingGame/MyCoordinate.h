#pragma once

class MyCoordinate
{
public:
	int x;
	int y;

	MyCoordinate();
	MyCoordinate(const int& _x, const int& _y);

	MyCoordinate operator+ (const MyCoordinate& _coord);
	MyCoordinate operator- (const MyCoordinate& _coord);
	bool operator== (const MyCoordinate& _coord);
};