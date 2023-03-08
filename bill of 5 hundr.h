#pragma once
#include "thous bill.h"
class Bill_of_5_hundr : public Thous_bill
{
public:
	Bill_of_5_hundr()
	{

	}
	void process(int amount_of_mon)
	{
		if (amount_of_mon % 500 == 0 && amount_of_mon < 1000)
		{
			SetColor(3, 0);
			cout << "пятисотрублёвая купюра" << endl;
		}
		else if (amount_of_mon % 500 == 0 && amount_of_mon % 1000 != 0 && amount_of_mon > 1000)
		{
			SetColor(4, 0);
			cout << (amount_of_mon - 500) / 1000 << " тысячарублёвых купюр" << endl;
			SetColor(5, 0);
			cout << "пятисотрублёвая купюра" << endl;
		}
		else if (amount_of_mon % 500 == 0 && amount_of_mon % 1000 == 0)
		{
			Thous_bill bill;
			bill.process(amount_of_mon);
		}
		else if (amount_of_mon > 1000 && amount_of_mon % 1000 != 0 && amount_of_mon % 500 != 0)
		{
			Thous_bill bill;
			bill.process(amount_of_mon);
			if ((amount_of_mon % (amount_of_mon / 1000 * 1000)) > 500)
			{
				SetColor(6, 0);
				cout << "пятисотрублёвая купюра" << endl;
			}
		}
	}
};