#pragma once

class MyConsole
{
public:
	static void SetConsole(const int& _cols, const int& _lines);
	static void CursorHide();
	static void GotoXY(const int& _x, const int& _y);
};