//============================================================================
// Name        : N�meros.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int numero;

	cout << "Este programa va a determinar si un número es positivo o negativo. Empecemos!" << endl;
	cout << "\nDigite el número: "; cin >> numero;

	if (numero==0) {
		cout << "\nEl número es 0 (cero)";
	}
	else if (numero>0) {
		cout << "\nEl número es positivo.";
	}
	else if (numero<0) {
		cout << "\nEl número es negativo.";
	}

	return 0;
}
