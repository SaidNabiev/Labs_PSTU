#include <iostream>
#include <clocale>
using namespace std;

int main()
{
	setlocale(0, "");

	int x;
	cout << "Пожалуйста, введите трехзначное число!" << endl;
	cin >> x;

	while ((x < 100) || (x > 999))
	{
		cout << "Ой-ой, произошел сбой... " << '\n';
		cout << "Число введено некорректно. Пожалуйста, введите трехзначное число, в котором нет повторяющихся цифр!" << endl;
		cin >> x;
	}
	
	int a, b, c;
	a = x % 10;
	x = x / 10;
	b = x % 10;
	c = x / 10;

	while ((a == b) || (b == c) || (c == a))
	{
		cout << "К сожалению, цифры не могут повторяться. Вы можете попробовать еще раз!\n";
		cin >> x;
		a = x % 10;
		x = x / 10;
		b = x % 10;
		c = x / 10;
		
	}
	
	
	cout << "Все возможные последовательности чисел:\n";
	
	int t;
	cout << a << b << c << "\t";
	t = c; c = b; b = t;
	cout << a << b << c << "\t";
	t = a; a = b; b = t;
	cout << a << b << c << "\t";
	t = a; a = c; c = t;
	cout << a << b << c << "\t";
	t = c; c = b; b = t;
	cout << a << b << c << "\t";
	t = a; a= b; b = t;
	cout << a << b << c << "\t";

	if ((a > b) && (a > c))
	{
		cout << "\n\nНаибольшее число из этих чисел:";
		if (b > c)
		{
			cout << a << b << c;

		}
		else
		{
			cout << a << c << b;
		}
		
	}
	else
		if ((b > a) && (b > c))
		{
			cout << "\n\nНаибольшее число из этих чисел:";
			if (a > c)
			{
				cout << b << a << c;
			}
			else
			{

				cout << b << c << a;
			}
		}
		else
			if ((c > b) && (c > a))
			{
				cout << "\n\nНаибольшее число из этих:";
				if (b > a)
				{
					cout << c << b << a;

				}
				else
				{
					cout << c << a << b;
				}
			}
	

			


	
	

	return 0;
}