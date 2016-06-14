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
};

int main()
{
	setlocale(LC_ALL, "Russian");
}