#include <iostream>
#include <cstdlib>
#include <Windows.h>

#include "Console.h"



void MyConsole::SetConsole(int _cols, int _lines)
{
    char modeCmd[128];
    sprintf_s(modeCmd, sizeof(modeCmd), "mode con cols=%d lines=%d", _cols, _lines);
    system(modeCmd);
}

void MyConsole::CursorHide()
{
    CONSOLE_CURSOR_INFO cursorInfo = { 0, };
    cursorInfo.dwSize = 1; //Ä¿¼­ ±½±â (1 ~ 100)
    cursorInfo.bVisible = FALSE; //Ä¿¼­ Visible TRUE(º¸ÀÓ) FALSE(¼û±è)
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}


void MyConsole::GotoXY(int _x, int _y) {
    COORD Pos = { _x - 1, _y - 1 };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
