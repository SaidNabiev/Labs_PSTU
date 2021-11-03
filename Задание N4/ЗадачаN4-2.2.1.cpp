#include <iostream>
#include <clocale>

using namespace std;
int main()
{
	setlocale(0, "");
	int x;
	cout << "Введите градус по Фаренгейту(F):" << endl;
	cin >> x;
	cout << "Градус по Цельсию(С):" << endl;
	cout << (x - 32) * 5 / 9;
	return 0;
}