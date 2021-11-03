#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int z, x, c, v, b, n, a, s, d;
	cout << "Введите начальное время:" << endl;
	cin >> z >> x >> c;
	cout << "Введите конечное время:" << endl;
	cin >> v >> b >> n;
	if ((b >= x) && (n >= c))
	{
		s = b - x;
		d = n - c;
		a = v - z;
	}
	if ((b >= x) && (n < c))
	{
		if (b == x)
		{
			s = 59; 
			a = v - z - 1;
		}
		else
		{
			s = b - x;
			a = v - z;
		}
		d = n - c + 60;
	}
	if ((b < x) && (n < c))
	{
		s = b - x - 1 + 60;
		d = n - c + 60;
		a = v - z - 1;
	}
	if ((b < x) && (n >= c))
	{
		s = b - x + 60;
		d = n - c + 60;
		a = v - z - 1;
	}
	if ((v == z) && (b == x) && (n == c))
	{
		cout << "Не прошло ни секунды с начала отсчета" << endl;
	}
	else
	{
		if ((v == 0) && (z == 0) && ((x > b) || (c > n)))
		{
			cout << "Неправильно введены данные" << endl;
		}
		else
		{
			cout << "Результат:" << endl;
			cout << a << "ч. " << s << "мин. " << d << "сек." << endl;
		}
		

	}

	return 0;

}