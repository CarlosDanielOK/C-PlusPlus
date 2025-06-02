//============================================================================
// Name        : Ejercicios.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Diseñar un algoritmo que halle la diferencia entre dos números sin restarlos.

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int num1, num2, res;

	cout << "Digite un número: "; cin >> num1;
	cout << "Digite un número: "; cin >> num2;

	res = num1 + num2*(-1); //Al multiplicar un número positivo x un negativo se convierte en negativo. De esta forma hacemos la resta por medio de suma

	cout << "La diferencia(resta) entre los números sin hacer la resta es: " << res << endl;

	getch();
	return 0;
}
