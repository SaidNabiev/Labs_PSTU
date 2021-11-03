#include <iostream>
#include <clocale>

using namespace std;
int main()
{
	setlocale(0, "");
	int x, y;
	cout << "Введите числа:" << endl;
	cin >> x >> y;
	cout << "Результат:" << '\n' << x * y;
	return 0;

}