//============================================================================
// Name        : CICLOS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! (suma de factoriales)

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int numero, factorial=1, suma=0;

	cout << "Este programa calculará la suma de factoriales. Empecemos!" << endl;

	do {
		cout << "\nDigite un número: "; cin >> numero;
	} while (numero<0);

	for (int i=1; i<=numero; i++){
		factorial *= i;
		suma += factorial; //suma=suma+factorial Esto lo que hara es guardar el factorial es la variable suma, cada que el ciclo valla a completar un ciclo sumara los factoriales.
	}

	cout << "\nEl resultado de la suma de los factoriales de " << numero << " es: " << suma << endl;

	system("pause");
	return 0;
}
