//////////////////////////////////////////////////////////////////////////////
// Ellipse.cpp
#include "Ellipse.h"
#include <iostream>
#include <math.h>

using namespace std;

void Ellipse::SetA(double value)
{
	if (value > 0)
		pair.SetA(value);
	else
		pair.SetA(0);
}

void Ellipse::SetB(double value)
{
	if (value > 0)
		pair.SetB(value);
	else
		pair.SetB(0);
}


bool Ellipse::Init(double a, double b)
{
	if (a > 0 && b > 0)
	{
		SetA(a);
		SetB(b);
		return true;
	}
	else
		return false;
}

void Ellipse::Read()
{
	double A, B;
	do
	{
		cout << "a = "; cin >> A;
		cout << "b = "; cin >> B;

	} while (!Init(A, B));
}

void Ellipse::Display() const
{
	pair.Display();
}

double Ellipse::Square() const
{
	double a = pair.GetA();
	double b = pair.GetB();
	double S = 4 * ((3.14 * a * b + (a - b)) / (a + b));
	return S;
}
double Ellipse::Perimeter() const
{
	double a = pair.GetA();
	double b = pair.GetB();
	double P = 3.14 * a * b;
	return P;
}


void Ellipse::Pair::SetA(double value)
{
	a = value;
}

void Ellipse::Pair::SetB(double value)
{
	b = value;
}

bool Ellipse::Pair::Init(double a, double b)
{
	SetA(a);
	SetB(b);

	return true;
}

void Ellipse::Pair::Read()
{
	double A, B;
	do
	{
		cout << "a = "; cin >> A;
		cout << "b = "; cin >> B;

	} while (!Init(A, B));
}

void Ellipse::Pair::Display() const
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

}

double Ellipse::Pair::Dobutok()
{
	return a * b;
}