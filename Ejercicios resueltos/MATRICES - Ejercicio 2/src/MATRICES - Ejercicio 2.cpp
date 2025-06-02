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
using namespace std;

int main()
{
	char letras[3][3] = {'a','b','c',
			             'd','e','f',
						 'g','h','i'}; //Defino la matriz 3x3 de letras.

	cout << "Mostrando la matriz completa:\n" << endl;

	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			cout << letras[i][j] << " ";
		}
		cout << "\n";
	}

	cout << "\nMostrando la diagonal principal de la matriz:\n" << endl;

	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			if(i == j) { //Si "i" es igual a "j" entra. Ejemplo: [0][0] | [1][1] | [2][2]
				cout << letras[i][j] << " ";
			}
		}
	}


	getch();
	return 0;
}
