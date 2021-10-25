#include <iostream>
#include <cstdlib>
#include <clocale>
#include <ctime>

using namespace std;
int main()
{
	setlocale(0, "");
	srand(time(0));
	int x, y, i;
	y = -1;
	x = rand() % 100;
	i = 0;
	 while ((i < 7) && (x != y))
	{
		 ++i;
		
		
			cout << "Введите число" << endl;
			cin >> y;

			if (y > x)
			{
				cout << "Загаданное число меньше" << endl;
				cout << "Осталось попыток:" << 7 - i << endl;

			}
			else
				if (y < x)
				{
					cout << "Загаданное число больше" << endl;
					cout << "Осталось попыток:" << 7 - i << endl;

				}
				else
					if (y == x)
					{
						cout << "Вы угадали!" << endl;
					}
			





		
	}
	if (y != x)
	{
		cout << "Вы не угадали!" << endl;
		cout << "Задуманное число:" << "" << x;
	}


	return 0;
}
