//============================================================================
// Name        : Menu.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;

int main() {

	int num, opc, resultado;

	cout << "\tBienvenido" << endl;
	cout << "\nOpciones disponibles: " << endl;
	cout << "\n1. Cubo de un número." << endl;
	cout << "2. Número par o impar." << endl;
	cout << "3. Salir." << endl;
	cout << "\nOpción: "; cin >> opc;

	switch(opc) {
		case 1:
			cout << "\nDigite un número: "; cin >> num;
			resultado = pow(num,3);
			cout << "El resultado es: " << resultado; break;

		case 2:
			cout << "\nDigite un número: "; cin >> num;

			if(num%2 == 0) {
					cout << "\nEl número es PAR.";
				}
				else {
					cout <<"\nEl número es IMPAR.";
				}
				break;

		case 3: cout << "\nAdiós."; break;
	}

	return 0;
}
