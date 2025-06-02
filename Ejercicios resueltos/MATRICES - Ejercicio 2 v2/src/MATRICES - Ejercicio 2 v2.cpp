//============================================================================
// Name        : MATRICES.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que muestre la diagonal principal de la matriz.

#include <iostream>
#include <conio.h>
#include <time.h> //Librería para crear números aleatorios
using namespace std;

int main()
{
	int numeros[3][3]; //Defino la matriz 3x3

	srand(time(NULL)); //Va a generar un número aleatorio

	//Almacenando elementos en la matriz.
	for(int i=0; i<3; i++) { //Este bucle controla lo que son las filas de la matriz
		for (int j=0; j<3; j++) { //Este bucle controla lo que son las columnas de la matriz
			numeros[i][j] = 1 + rand() % (100); //Se genera el número aleatorio en el rango [1-100] y se guardara en la matriz "numeros[i][j] | 1er ciclo: numeros[0][0]=1 | numeros[0][1]=5
		}
	}

	cout << "Mostrando la matriz completa:\n" << endl;

	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			cout << numeros[i][j] << " ";
		}
		cout << "\n";
	}

	cout << "\nMostrando la diagonal principal de la matriz:\n" << endl;

	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			if(i == j) {
				cout << numeros[i][j] << " ";
			}
		}
	}

	getch();
	return 0;
}
