#include <iostream>
#include <clocale>

using namespace std;
int main()
{
	setlocale(0, "");
	int i;
	cout << "Введите число галлонов:" << endl;
	cin >> i;
	cout << "Результат:" << '\n' << i * 7.481;
	return 0;

}