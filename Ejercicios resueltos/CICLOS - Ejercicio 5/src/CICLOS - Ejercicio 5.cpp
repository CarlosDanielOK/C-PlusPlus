//============================================================================
// Name        : CICLOS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/* Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango [20-30], o se introduzca el valor 0.
El programa debe entregar la suma de los valores mayores que 0  introducidos. */

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int numero, suma = 0;

	do {
		cout << "Digite un número: ";
		cin >> numero;
		if(numero>0){
			suma += numero; //Es lo mismo que (suma=suma+numero), solo que esta abreviado como (suma+=numero)
		}
	} while ((numero!=0) && (numero<20) || (numero>30));//si ponemos un 0 el bucle termina y sale, y si ponemos (20,21,22,23,24,25,26,27,28,29,30) tambien sale del bucle

	cout << "\nLa suma de los valores mayores que 0 es: " << suma << endl;

	system("pause");
	return 0;
}
