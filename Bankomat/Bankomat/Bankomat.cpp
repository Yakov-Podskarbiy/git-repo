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
				cout << "Введи количество купюр, номиналом 50 рублей:" << endl;
				cin >> _50;

				cout << "Введи количество купюр, номиналом 100 рублей:" << endl;
				cin >> _100;

				cout << "Введи количество купюр, номиналом 500 рублей:" << endl;
				cin >> _500;

				cout << "Введи количество купюр, номиналом 1000 рублей:" << endl;
				cin >> _1000;

				cout << "Введи количество купюр, номиналом 5000 рублей:" << endl;
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

	cout << "\t\t Программа Банкомат" << endl << endl;

	int c;
	cout << "\t Ввод купюр:" << endl;

	bill.bill_input();

	cout << "\t Вывод запрашиваемой суммы:" << endl;

	cout << "Введите запрашиваемую сумму:" << endl;

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