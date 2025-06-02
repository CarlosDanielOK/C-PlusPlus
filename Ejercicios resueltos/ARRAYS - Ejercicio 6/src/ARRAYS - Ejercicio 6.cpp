//============================================================================
// Name        : ARRAYS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Escriba un programa que defina un vector de números y calcule si existe algún
número en el vector cuyo valor equivale a la suma del resto de números del vector. */

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int numeros[5] = {1,2,3,4,10}; //Definimos el arreglo, vector o array
	int suma=0;

	for (int i=0; i<5; i++) {
		suma += numeros[i]; //suma=suma+numeros[i] | Realizo la suma de los números del vector.
	}

	suma -= numeros[4]; //A suma le resto el mayor número ya que el unico numero que puede ser la suma de los demas es el numero mayor. numeros[4] = 10

	if (numeros[4] == suma) {
		cout << "El número " << numeros[4] << " es la suma de los demás." << endl;
	} else {
		cout << "No existe ningun número que sea la suma de los demás." << endl;
	}

	getch();
	return 0;
}
