#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
bool Proverka(double x, double y) {
	if (fabs(y) <= 1 && fabs(y) >= fabs(x))
			return true;
		else
			return false;
}
int main() {
	double x, y;
	cout << "x="; cin >> x;
	cout << "y="; cin >> y;
	cout << "Result: " << Proverka(x, y) << endl;
}
