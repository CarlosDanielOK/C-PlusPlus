//============================================================================
// Name        : ARRAYS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Escriba un programa que defina un vetor de números y calcule la multiplicación acumulada de sus elementos.

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int numeros[7] = {1,2,3,4,5,6,7};
	int multiplicacion = 1;
	/* numeros[0] = 1;
	 * numeros[1] = 2;
	 * numeros[2] = 3;
	 * numeros[3] = 4;  Es una otra forma de definir los elementos del arrays o vector
	 * numeros[4] = 5;
	 * numeros[5] = 6;
	 * numeros[6] = 7;
	 */
	for (int i=0; i<7; i++) {
		multiplicacion *= numeros[i]; //multiplicacion=multiplicacion*numeros[i] Hacemos la multiplicación iterativa
	}

	cout << "La multiplicación de los elementos del arrays es: " << multiplicacion << endl;

	getch();
	return 0;
}
