#include "Hundr bill.h"
void main()
{
	setlocale(LC_ALL, "ru");
	SetColor(1, 0);
	cout << "количество выводимых рублей (3 варианта)" << endl;
	int amount_of_mon = 300;
	SetColor(2, 0);
	Hundr_bill banknote;
	cout << amount_of_mon << endl;
	banknote.process(amount_of_mon);
	amount_of_mon = 3300;
	cout << amount_of_mon << endl;
	banknote.process(amount_of_mon);
	amount_of_mon = 6600;
	cout << amount_of_mon << endl;
	banknote.process(amount_of_mon);
}