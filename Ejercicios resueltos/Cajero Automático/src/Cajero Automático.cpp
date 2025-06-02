//============================================================================
// Name        : Cajero.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int saldo_inicial=10000, clave, opc, extra, saldo_nuevo, retiro;

	cout << "\tBienvenido a su Cajero Automático" << endl;
	cout << "\nIngrese su contraseña: ";
	cin >> clave;
	cout << "\nDinero en cuenta actual: $10000" << endl;

	cout << "\n1. Ingresar dinero en su cuenta." << endl;
	cout << "2. Retirar dinero de su cuenta." << endl;
	cout << "3. Salir." << endl;
	cout << "\nOpción: ";
	cin >> opc;

	switch (opc) {

	case 1: cout << "\nDigite la cantidad de dinero a ingresar: $"; cin >> extra;
			saldo_nuevo = saldo_inicial + extra;
			cout << "\nDinero en su cuenta: $" << saldo_nuevo; break;

	case 2: cout << "\nDigite la cantidad a retirar: $", cin >> retiro;
			if(retiro < saldo_inicial) {
				saldo_nuevo = saldo_inicial - retiro;
				cout << "\nDinero en su cuenta: $" << saldo_nuevo;
			}
			else {
				cout << "\nNO tiene esa cantidad de dinero.";
			}
			break;

	case 3: cout << "\nAdiós."; break;

	}

	return 0;
}
