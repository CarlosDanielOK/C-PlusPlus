//============================================================================
// Name        : Ecuaci�n.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float a, b, c, x1, x2, dato=0;
	cout << "Digite el valor de a: "; cin >> a;
	cout << "Digite el valor de b: "; cin >> b;
	cout << "Digite el valor de c: "; cin >> c;

	x1 = (-b+sqrt((pow(b,2))-4*a*c))/(2*a);
	x2 = (-b-sqrt((pow(b,2))-4*a*c))/(2*a);

	if (a == dato) {
		cout << "\nError en la ecuación";
	}
	else {
		cout << "\nx1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}

	return 0;
}
