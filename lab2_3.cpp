#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <conio.h>
using namespace std;
double fun(double x)
{
	return x <= 3 ? ((pow(x, 2)) - 3 * x + 9) : (1 / ((pow(x, 3)) + 6));
}
bool Proverka(double x, double y) {
	if (abs(y) <= 1 && abs(y) >= abs(x))
		return true;
	else
		return false;
}
int main() {
	double x, y;
	cout << "Viberite zadanie (1,2): " << endl;
	cout << "Zadanie 1 " << endl;
	cout << "Zadanie 2 " << endl;
	switch (_getch()) {
	case '1':
		cout << "x="; cin >> x;
		cout << "y="; cin >> y;
		cout << "Result: " << Proverka(x, y) << endl;
		break;
	case '2':
		system("cls");
		cout << "x = "; cin >> x;
		cout << "f = " << fun(x) << endl;
		break;
	default:
		cout << "Nepravil'niy vibor" << endl;
		break;
	}
}
	