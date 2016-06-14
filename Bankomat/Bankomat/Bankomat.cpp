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

				
		cout << " Ввеите количество купюр, номиналом 50 рублей:" << endl << endl;
		cin >> bill_50;

		cout << " Ввеите количество купюр, номиналом 100 рублей:" << endl << endl;
		cin >> bill_100;

		cout << " Ввеите количество купюр, номиналом 500 рублей:" << endl << endl;
		cin >> bill_500;

		cout << " Ввеите количество купюр, номиналом 1000 рублей:" << endl << endl;
		cin >> bill_1000;

		cout << " Ввеите количество купюр, номиналом 5000 рублей:" << endl << endl;
		cin >> bill_5000;

	};
	void many_output();
	void balanse_output();
	



};

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
		cout << "\t \t Программа Банкомат" << endl << endl;
	 
	Bankomat bill ;

	cout << "\t \t Заполнение банкомата:" << endl << endl;

	bill.many_input(/*bill.bill_50, bill.bill_100, bill.bill_500, bill.bill_1000, bill.bill_5000*/);

	cout << bill.bill_500 << endl;

	
	

	



	

	
	_getch();


	return 0;
}


