#pragma once

class Rect
{
public:
	const int top;
	const int left;
	const int bottom;
	const int right;
public:
	Rect();
	Rect(const int& _top, const int& _left, const int& _bottom, const int& _right);
};