# include <iostream>
# include <conio.h>
# include <iostream>

using namespace std;

class Bankomat
{
		public:
		
			int _50, _100, _500, _1000, _5000;
			int sum;
			int zapros;

			void bill_input()
			{
				cout << "����� ���������� �����, ��������� 50 ������:" << endl;
				cin >> _50;

				cout << "����� ���������� �����, ��������� 100 ������:" << endl;
				cin >> _100;

				cout << "����� ���������� �����, ��������� 500 ������:" << endl;
				cin >> _500;

				cout << "����� ���������� �����, ��������� 1000 ������:" << endl;
				cin >> _1000;

				cout << "����� ���������� �����, ��������� 5000 ������:" << endl;
				cin >> _5000;

			}

			void summa()
			{
				
				sum = _500*500 + _50*50 + _100*100 + _1000*1000 + _5000*5000;

				
			}

			void bill_output()
			{
				

				
			}
};

int main()
{
	setlocale(LC_ALL, "Russian");

	Bankomat bill;

	cout << "\t\t ��������� ��������" << endl << endl;

	int c;
	cout << "\t ���� �����:" << endl;

	bill.bill_input();

	cout << "\t ����� ������������� �����:" << endl;

	cout << "������� ������������� �����:" << endl;

	cin >> c;

	bill.summa();

	if ((c <= bill.sum) && (c%50 == 0))
	{
		cout << "Correct!";
	}
	else cout << "Non correct";

			_getch();

	return 0;

}