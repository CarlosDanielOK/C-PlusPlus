//============================================================================
// Name        : ARRAYS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Desarrole un programa que lea de la entrada estándar un vector de enteros y determine el mayor elemento del vector.

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int numeros[100], n, mayor=0;

	cout << "Digite la número de elementos del arreglo, vector o array: ";
	cin >> n;
	cout << "\n";

	for (int i=0; i<n; i++) {
		cout << i+1 << ". Digite un número: "; //El i+1 es para que en pantalla aparezca asi: 1. Digite un número: | 2. Digite un número: | etc.
		cin >> numeros[i];
		if(numeros[i] > mayor){ //Si el primer elemento es 1 y como mayor=0 1 es mayor a 0, entonces se guarda en la variable mayor, asi con todos los elemetos.
			mayor = numeros[i];
		}
	}

	cout << "\nEl mayor elemento del vector es: " << mayor << endl;

	getch();
	return 0;
}
