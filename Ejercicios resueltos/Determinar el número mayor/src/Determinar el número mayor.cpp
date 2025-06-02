//============================================================================
// Name        : Determinar.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;

	cout << "En este programa va a determinar cual es el mayor entre tres números. Empecemos!" << endl;
	cout << "\nDigite el primer número: "; cin >> a;
	cout << "Digite el segundo número: "; cin >> b;
	cout << "Digite el tercer número: "; cin >> c;

	if (a==b && b==c) {
		cout << "\nLos números son iguales.";
	}

		else if (a>b && a>c) {
		cout << "\nEl número mayor es " << a;
	}
		else if (b>a && b>c) {
		cout << "\nEl número mayor es " << b;
	}
		else if (c>a && c>b) {
		cout << "\nEl número mayor es " << c;
	}

	return 0;
}
