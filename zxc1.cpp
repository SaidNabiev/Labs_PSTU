#include <iostream>
#include <cstdlib>
#include <clocale>
#include <ctime>

using namespace std;
int main()
{
	setlocale(0, "");
	srand(time(0));
	int x, y;
	y = -1;
	x = rand() % 100;
	for (int i = 1; i <= 7; i++)
	{

		while (x != y)
		{
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
			break;





		}
	}
	if (y != x)
	{
		cout << "Вы не угадали!" << endl;
		cout << "Задуманное число:"<<""<< x;
	}


	return 0;
}