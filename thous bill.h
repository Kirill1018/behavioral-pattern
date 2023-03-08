#pragma once
#include <windows.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <exception>
#include "bill of 5 hundr.h"
using namespace std;
enum ConsoleColor { Black, Blue, Green, Cyan, Red, Magenta, Brown, LightGray, DarkGray, LightBlue, LightGreen, LightCyan, LightRed, LightMagenta, Yellow, White };
void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}
void GotoXY(int X, int Y)
{
	HANDLE hConsole;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord = { X, Y };
	SetConsoleCursorPosition(hStdOut, coord);
}
#include <stdio.h>
/*0 Ч черный
1 Ч синий
2 Ч зеленый
3 Ч голубой
4 Ч красный
5 Ч лиловый
6 Ч желтый
7 Ч белый
8 Ч серый
9 Ч свело - синий
A Ч светло - зеленый
B Ч светло - голубой
— Ч светло - красный
E Ч светло - желтый
F Ч €рко - белый
system("color F0");*/  // ”становка белого фона и черного текста
class Thous_bill
{
public:
	Thous_bill()
	{

	}
	void process(int amount_of_mon)
	{
		if (amount_of_mon % 1000 == 0)
			cout << amount_of_mon / 1000 << " тыс€чарублЄвых купюр" << endl;
		else if (amount_of_mon > 1000 && amount_of_mon % 1000 != 0 && amount_of_mon % 500 != 0)
			cout << amount_of_mon / 1000 << " тыс€чарублЄвых купюр" << endl;
	}
};