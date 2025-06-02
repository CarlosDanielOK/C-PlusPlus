//============================================================================
// Name        : CICLOS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/* Escriba un programa que calcule x^y, donde tanto x como y son enteros positivos, sin utilizar la función pow.*/

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
	int x, y, elevacion=1;

	cout << "Este programa va a calcular x^y. Empecemos!" << endl;

	do {

		cout << "\nDigite el número x: ";
		cin >> x;
		cout << "Digite el número y: ";
		cin >> y;
	} while ((x<0) || (y<0));

	for (int i=1; i<=y; i++){
		elevacion = elevacion * x;
	}

	cout << "\nEl resultado es: " << elevacion << endl;

	getch();
	return 0;
}
