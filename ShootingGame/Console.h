#pragma once

class MyConsole
{
public:
	static void SetConsole(int _cols, int _lines);
	static void CursorHide();
	static void GotoXY(int _x, int _y);
};