//============================================================================
// Name        : MATRICES.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Desarrollar un programa que determine si una matriz es simétrica o no.
Una matriz es simétrica si es cuadrada y si es igual a su matriz transpuesta.

Ejemplo:

|8 1 3|       |8 1 3|
|1 7 4|  -->  |1 7 4|
|3 4 9|       |3 4 9|
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int numeros[100][100], filas, columnas;
	char bandera = 'F'; //Bandera inicializa en falso

	cout << "Digite el número de filas: "; cin >> filas;
	cout << "Digite el número de columnas: "; cin >> columnas;
	cout << "\n";

	for(int i=0; i<filas; i++) {
		for(int j=0; j<columnas; j++) {
			cout << "Digite un número [" << i << "][" << j << "] : ";
			cin >> numeros[i][j];
		}
	}

	if(filas == columnas){ //Si son iguales es una matriz cuadrada
		for(int i=0; i<filas; i++) { //Comprobamos que sea una matriz simétrica
			for(int j=0; j<columnas; j++) {
				if(numeros[i][j] == numeros[j][i]) { //Si la matriz original es igual a su transpuesta es una matriz simétrica
					bandera = 'V'; //La bandera cambia su valor a verdadero
				}
			}
		}
	}

	if(bandera == 'V') {
		cout << "\nLa Matriz es simétrica.";
	} else {
		cout << "\nLa Matriz no es simétrica.";
	}

	getch();
	return 0;
}
