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
		cout << "�����i�� ������i�: "<<endl;
		cout << "1. �������� ����i�. " << endl;
		cout << "2. ������� ����� ���� ������. " << endl;
		cin >> b;
		if (b == 2)
		{
			cout << "����i�� ���� ����i� ��� ���������: ";
			cin >> a;
		}
		if (b == 1)
		{
			cout << "����i�� ������ ����: ";
			cin >> c;
		}
	}
	void toString()
	{
		if (a<100 && c<100)
		{
			cout << "�� ���� �� �i����i�� �������(������� ����)!"<<endl;
		}
		if (a > 28000 && c > 28000)
		{
			cout << "�� ���� �� �i����i�� �������(������� ����)!" << endl;
		}
		if (a > 100 && a < 28000)
		{
			cout << "������� � ��������i: ";
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
			cout << "������� � ��������i: ";
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
	cout << "I�e����i���i���� �����: ";
	cout << information.Number << endl;
	cout << "�i���i��� ����i� � ��������i: ";
	cout << information.Zalyshok << endl;
	cout << "�i�i������ ���� ��� �����i/�������� ����i�: ";
	cout << information.Min << endl;
	cout << "Ma��������� ���� ��� �����i/�������� ����i�: ";
	cout << information.max << endl;
	cout << "�i���i��� ������� �� 10���: ";
	cout << information.ten << endl;
	cout << "�i���i��� ������� �� 20���: ";
	cout << information.twenty << endl;
	cout << "�i���i��� ������� �� 50���: ";
	cout << information.fifty << endl;
	cout << "�i���i��� ������� �� 100���: ";
	cout << information.hundred << endl;
	cout << "�i���i��� ������� �� 200���: ";
	cout << information.two << endl;
	cout << "�i���i��� ������� �� 500���: ";
	cout << information.five << endl;
	cout << "-------------------------------------------" << endl;

	information.Enter();
	information.toString();

	return 0;
}