//============================================================================
// Name        : CICLOS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Escriba un programa que calcule el valor de: 2^1+2^2+2^3...+2^n

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
	int base=2, exponente, suma=0, potencia;

	cout << "Este programa calcula el valor de 2^1+2^2+2^3...+2^n" << endl;
	cout << "\nDigite el exponente: "; cin >> exponente;

	for (int i=1; i<=exponente; i++){
		potencia = pow(base,i);
		suma += potencia; //suma=suma+potencia
	}

	cout << "\nEl resultado es: " << suma << endl;

	getch();
	return 0;
}
