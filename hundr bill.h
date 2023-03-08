#pragma once
#include "bill of 5 hundr.h"
class Hundr_bill : public Bill_of_5_hundr
{
public:
	Hundr_bill()
	{

	}
	void exclusion()
	{
		throw exception();
	}
	void process(int amount_of_mon)
	{
		SetColor(7, 0);
		cout << "������" << endl;
		try
		{
			if (amount_of_mon % 100 == 0 && amount_of_mon % 500 != 0 && amount_of_mon < 500 && amount_of_mon != 0)
			{
				SetColor(8, 0);
				cout << amount_of_mon / 100 << " ���������� �����" << endl;
			}
			else if (amount_of_mon % 100 == 0 && amount_of_mon % 500 == 0 && amount_of_mon != 0)
			{
				Bill_of_5_hundr denomination;
				denomination.process(amount_of_mon);
			}
			else if (amount_of_mon > 0 && amount_of_mon % 100 != 0 && amount_of_mon != 0)
			{
				SetColor(9, 0);
				cout << "�������� ���������� ����� ������ ���� ������� 100 ������" << endl;
			}
			else if (amount_of_mon > 500 && amount_of_mon % 100 == 0 && amount_of_mon != 0)
			{
				if (amount_of_mon == 600)
				{
					amount_of_mon -= 100;
					Bill_of_5_hundr denomination;
					denomination.process(amount_of_mon);
					SetColor(10, 0);
					cout << "���������� ������" << endl;
				}
				else if (amount_of_mon == 700)
				{
					amount_of_mon -= 200;
					Bill_of_5_hundr denomination;
					denomination.process(amount_of_mon);
					SetColor(11, 0);
					cout << 200 / 100 << " ���������� ������" << endl;
				}
				else if (amount_of_mon == 800)
				{
					amount_of_mon -= 300;
					Bill_of_5_hundr denomination;
					denomination.process(amount_of_mon);
					SetColor(12, 0);
					cout << 300 / 100 << " ���������� ������" << endl;
				}
				else if (amount_of_mon == 900)
				{
					amount_of_mon -= 400;
					Bill_of_5_hundr denomination;
					denomination.process(amount_of_mon);
					SetColor(13, 0);
					cout << 400 / 100 << " ���������� ������" << endl;
				}
				else if (amount_of_mon > 1000 && amount_of_mon % 1000 != 0 && amount_of_mon % 500 != 0 && amount_of_mon != 0)
				{
					Bill_of_5_hundr denomination;
					denomination.process(amount_of_mon);
					if ((amount_of_mon % (amount_of_mon / 1000 * 1000)) < 500)
					{
						SetColor(14, 0);
						cout << amount_of_mon % (amount_of_mon / 1000 * 1000) / 100 << " ���������� �����" << endl;
					}
					else
					{
						SetColor(15, 0);
						cout << amount_of_mon % (amount_of_mon / 1000 * 1000) / 100 - 5 << " ���������� �����" << endl;
					}
				}
			}
			if (amount_of_mon <= 0)
			{
				Hundr_bill bill;
				bill.exclusion();
			}
		}
		catch (const exception&)
		{
			cout << "������" << endl;
		}
	}	
};