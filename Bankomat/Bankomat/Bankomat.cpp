# include <iostream>
# include <windows.h>
# include <conio.h>


class Bankomat
{
	
public:

	int bill_50, bill_100, bill_500, bill_1000, bill_5000;

	void many_input(/*int _50, int _100, int _500, int _1000, int _5000*/)
	{
		using std::cout;
		using std::endl;
		using std::cin;

				
		cout << " ������ ���������� �����, ��������� 50 ������:" << endl << endl;
		cin >> bill_50;

		cout << " ������ ���������� �����, ��������� 100 ������:" << endl << endl;
		cin >> bill_100;

		cout << " ������ ���������� �����, ��������� 500 ������:" << endl << endl;
		cin >> bill_500;

		cout << " ������ ���������� �����, ��������� 1000 ������:" << endl << endl;
		cin >> bill_1000;

		cout << " ������ ���������� �����, ��������� 5000 ������:" << endl << endl;
		cin >> bill_5000;

	};
	void many_output();
	void balanse_output();
	



};

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
		cout << "\t \t ��������� ��������" << endl << endl;
	 
	Bankomat bill ;

	cout << "\t \t ���������� ���������:" << endl << endl;

	bill.many_input(/*bill.bill_50, bill.bill_100, bill.bill_500, bill.bill_1000, bill.bill_5000*/);

	cout << bill.bill_500 << endl;

	
	

	



	

	
	_getch();


	return 0;
}


