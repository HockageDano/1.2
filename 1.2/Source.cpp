#include <iostream>

using namespace std;

class Bankomat
{
public:
	int Number;
	int Zalyshok;
	int Min;
	int max;
	int ten;
	int twenty;
	int fifty;
	int hundred;
	int two;
	int five;
	int a;
	int b;
	int c;
	void Enter()
	{
		cout << "Виберiть операцiю: "<<endl;
		cout << "1. Сплатити платiж. " << endl;
		cout << "2. Вивести певну суму грошей. " << endl;
		cin >> b;
		if (b == 2)
		{
			cout << "Вкажiть суму коштiв для виведення: ";
			cin >> a;
		}
		if (b == 1)
		{
			cout << "Внесiть бажану суму: ";
			cin >> c;
		}
	}
	void toString()
	{
		if (a<100 && c<100)
		{
			cout << "Ця сума не вiдповiдає вимогам(читайте вище)!"<<endl;
		}
		if (a > 28000 && c > 28000)
		{
			cout << "Ця сума не вiдповiдає вимогам(читайте вище)!" << endl;
		}
		if (a > 100 && a < 28000)
		{
			cout << "Залишок у банкоматi: ";
			if (b == 1)
			{
				cout << Zalyshok + c;
			}
			if (b == 2)
			{
				cout << Zalyshok - a;
			}
		}
		if (c > 100 && c < 28000)
		{
			cout << "Залишок у банкоматi: ";
			if (b == 1)
			{
				cout << Zalyshok + c;
			}
			if (b == 2)
			{
				cout << Zalyshok - a;
			}
		}
		
	}
};

int main() {

	setlocale(LC_ALL, "ukr");

	Bankomat information;
	information.Number = 284579;
	information.Zalyshok = 200000;
	information.Min = 100;
	information.max = 28000;
	information.ten = 300;
	information.twenty = 600;
	information.fifty = 500;
	information.hundred = 100;
	information.two = 200;
	information.five = 250;
	cout << "Iдeнтифiкацiйний номер: ";
	cout << information.Number << endl;
	cout << "Кiлькiсть коштiв у банкоматi: ";
	cout << information.Zalyshok << endl;
	cout << "Мiнiмальна сума для видачi/внесення коштiв: ";
	cout << information.Min << endl;
	cout << "Maксимальна сума для видачi/внесення коштiв: ";
	cout << information.max << endl;
	cout << "Кiлькiсть банкнот по 10грн: ";
	cout << information.ten << endl;
	cout << "Кiлькiсть банкнот по 20грн: ";
	cout << information.twenty << endl;
	cout << "Кiлькiсть банкнот по 50грн: ";
	cout << information.fifty << endl;
	cout << "Кiлькiсть банкнот по 100грн: ";
	cout << information.hundred << endl;
	cout << "Кiлькiсть банкнот по 200грн: ";
	cout << information.two << endl;
	cout << "Кiлькiсть банкнот по 500грн: ";
	cout << information.five << endl;
	cout << "-------------------------------------------" << endl;

	information.Enter();
	information.toString();

	return 0;
}