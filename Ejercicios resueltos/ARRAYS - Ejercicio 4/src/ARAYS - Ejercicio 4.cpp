//============================================================================
// Name        : ARAYS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Escriba un programa que defina un vector de números y muestre en la salida estándar el vector en orden inverso - del último al primer elemento

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int numero[7] = {1,2,3,4,5,6,7}; //Definimos el arreglo, array o vector

	for (int i=6; i>=0; i--) {
		cout << "Array [" << i << "]" << " ---> " << numero[i] << endl; //Muestro el vector en orden inverso
	}

	getch();
	return 0;
}
