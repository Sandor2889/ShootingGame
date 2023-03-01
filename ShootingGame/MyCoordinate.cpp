#include "MyCoordinate.h"

MyCoordinate::MyCoordinate() : x(0), y(0) {}

MyCoordinate::MyCoordinate(int _x, int _y) : x(_x), y(_y) {}


MyCoordinate MyCoordinate::operator+ (const MyCoordinate& _coord) 
{
	x += _coord.x;
	y += _coord.y;

	return MyCoordinate(x, y);
};

MyCoordinate MyCoordinate::operator- (const MyCoordinate& _coord) 
{
	x -= _coord.x;
	y -= _coord.y;

	return MyCoordinate(x, y);
};

bool MyCoordinate::operator == (const MyCoordinate& _coord) 
{
	return ((x == _coord.x) && (y == _coord.y));
}