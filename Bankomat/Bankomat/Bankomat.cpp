# include <iostream>
# include <conio.h>
# include <iostream>

using namespace std;

class Bankomat
{
		public:
		
			int _50, _100, _500, _1000, _5000;

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
};

int main()
{
	setlocale(LC_ALL, "Russian");
}