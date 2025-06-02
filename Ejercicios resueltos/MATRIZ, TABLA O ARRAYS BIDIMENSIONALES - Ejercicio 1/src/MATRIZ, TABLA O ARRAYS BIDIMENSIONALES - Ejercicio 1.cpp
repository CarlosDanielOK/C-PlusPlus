//============================================================================
// Name        : MATRIZ,.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Hacer un programa para rellenar una matriz pidiendo al usuario el número de filas y columnas. Posteriormente mostrar la matriz en pantalla.

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int numeros[100][100], filas, columnas; //Defino la matriz | filas, columnas son variables para guardar el número de filas y columnas que desea el usuario

	cout << "Digite el número de filas: "; cin >> filas;
	cout << "Digite el número de columnas: "; cin >> columnas;
	cout << "\n";

	//Almacenando elementos en la matriz.
	for(int i=0; i<filas; i++) { //Este bucle controlo lo que son las filas de la matriz
		for(int j=0; j<columnas; j++ ) { //Este bucle controlo lo que son las columnas de la matriz
			cout << "Digite un número [" << i << "][" << j << "] : "; //Aparecera: [0][0] | [0][1] | [0][2]
			cin >> numeros[i][j];
		}
	}

	cout << "\n";
	//Mostrando la matriz.
	for(int i=0; i<filas; i++) {
		for(int j=0; j<columnas; j++) {
			cout << numeros[i][j];
		}
		cout << "\n"; //Para que se separen las filas. Para que muestre en pantalla de una forma ordenada
	}

	getch();
	return 0;
}
