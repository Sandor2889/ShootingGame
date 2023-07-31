#include <iostream>
#include <cstdlib>
#include <Windows.h>

#include "Console.h"


// 콘솔 사이즈 설정
void MyConsole::SetConsole(const int& _cols, const int& _lines)
{
    char modeCmd[128];
    sprintf_s(modeCmd, sizeof(modeCmd), "mode con cols=%d lines=%d", _cols, _lines);
    system(modeCmd);
}

// 커서 설정
void MyConsole::CursorHide()
{
    CONSOLE_CURSOR_INFO cursorInfo = { 0, };
    cursorInfo.dwSize = 1; // 커서 굵기 (1 ~ 100)
    cursorInfo.bVisible = FALSE;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

// 커서 위치 이동
void MyConsole::GotoXY(const int& _x, const int& _y) {
    COORD Pos = { _x - 1, _y - 1 };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
