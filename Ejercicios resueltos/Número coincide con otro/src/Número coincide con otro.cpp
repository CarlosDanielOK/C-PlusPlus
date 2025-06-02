//============================================================================
// Name        : N�mero.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;

	cout << "Este programa va determinar si un número coincide con otro introducido. Empecemos!" << endl;
	cout << "\nDigite el primer número: "; cin >> a;
	cout << "Digite el segundo número: "; cin >> b;
	cout << "Digite el tercer número: "; cin >> c;
	cout << "Digite el cuarto número: "; cin >> d;

	if (d==a) {
		cout << "\nEl cuarto y el primer número coinciden.";
	}
	else if (d==b) {
		cout << "\nEl cuarto y el segundo número coinciden.";
	}
	else if (d==c) {
		cout << "\nEl cuarto y el tercer número coinciden.";
	}
	else {
		cout << "\nEl cuarto número no coincide con ningún número introducido anteriormente.";
	}

	return 0;

}
