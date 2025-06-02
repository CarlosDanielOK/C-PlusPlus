//============================================================================
// Name        : Ejercicios.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Diseñar un algoritmo que calcule la potencia de un número dada la base y el exponente y no pudiendo utilizar la funcion pow

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main() {
	int base, exponente, resultado;

	cout << "Digite la base: "; cin >> base;
	cout << "Digite el exponente: "; cin >> exponente;

	resultado = pow(base,exponente);

	cout << "El resultado es: " << resultado << endl;

	getch();
	return 0;
}
