//============================================================================
// Name        : ARRAYS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Escriba un programa que defina un vector de números y calcule la suma de sus elementos.

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int numeros[] = {1,2,3,4,5}; //Defino el vector o array
	int suma = 0; //Creo una variable para guardar la suma de los elementos del array o vector

	for (int i=0; i<5; i++) { //Inicializo i en 0(i=0) porque los ARRAYS siempre inician su conteo desde 0. Si un array es de 5 elementos llegara desde 0 hasta 4.
		suma += numeros[i]; //suma=suma+numeros[i] El i va ir iterando, de esa manera se van sumando todos los elementos del vector o array
	}

	cout << "La suma de todos los elementos del vector, arreglo o array es: " << suma << endl;

	getch();
	return 0;
}
