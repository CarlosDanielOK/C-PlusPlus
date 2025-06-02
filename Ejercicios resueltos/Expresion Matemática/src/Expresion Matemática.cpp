//============================================================================
// Name        : Expresion.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	double a, b, c, d;

	cout << "La operación a resolver es: (a+b)/(c+d)" << endl;
	cout << "\nDigite el valor de a: "; cin >> a;
	cout << "Digite el valor de b: "; cin >> b;
	cout << "Digite el valor de c: "; cin >> c;
	cout << "Digite el valor de d: "; cin >> d;

	double resultado = (double)(a+b)/(c+d);

	cout << "\nEl resultado es: " << resultado << endl;

	return 0;
}
