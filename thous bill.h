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
/*0 � ������
1 � �����
2 � �������
3 � �������
4 � �������
5 � �������
6 � ������
7 � �����
8 � �����
9 � ����� - �����
A � ������ - �������
B � ������ - �������
� � ������ - �������
E � ������ - ������
F � ���� - �����
system("color F0");*/  // ��������� ������ ���� � ������� ������
class Thous_bill
{
public:
	Thous_bill()
	{

	}
	void process(int amount_of_mon)
	{
		if (amount_of_mon % 1000 == 0)
			cout << amount_of_mon / 1000 << " ������������� �����" << endl;
		else if (amount_of_mon > 1000 && amount_of_mon % 1000 != 0 && amount_of_mon % 500 != 0)
			cout << amount_of_mon / 1000 << " ������������� �����" << endl;
	}
};