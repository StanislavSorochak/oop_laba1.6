//////////////////////////////////////////////////////////////////////////////
// Source.cpp
#include "Ellipse.h"
#include <iostream>
#include <Windows.h>
#include <iomanip>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Ellipse::Pair pair;
	pair.Read();
	pair.Display();
	cout << "Dobutok = " << pair.Dobutok() << endl;

	double A = 0.0;
	double B = 0.0;

	class Ellipse e;
	e.Read();
	e.Display();
	int S = e.Square();
	cout << "Square = " << S << endl;
	double P = e.Perimeter();
	cout << "Perimeter = " << P << endl;

}