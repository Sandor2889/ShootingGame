#pragma once

class Rect
{
private:
	const int top;
	const int left;
	const int bottom;
	const int right;
public:
	Rect();
	Rect(int _top, int _left, int _bottom, int _right);
};