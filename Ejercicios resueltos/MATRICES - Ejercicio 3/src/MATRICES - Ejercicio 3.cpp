//============================================================================
// Name        : MATRICES.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Hacer una matriz de tipo entera de 2 * 2, llenarla de n�meros y luego copiar todo su contenido hacia otra matriz.

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int numeros[2][2] = {{1,2},{3,4}}; //Defino la matriz
	int matriznueva[2][2];

	//Copiando todo el contenido de la matriz "numeros" hacia "matriznueva"
	for(int i=0; i<2; i++) {
		for(int j=0; j<2; j++) {
			matriznueva[i][j] = numeros[i][j];
		}
	}

	//Mostrando la matriz nueva
	for(int i=0; i<2; i++) {
		for(int j=0; j<2; j++) {
			cout << matriznueva[i][j] << " ";
		}
		cout << "\n";
	}

	getch();
	return 0;
}
