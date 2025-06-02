//============================================================================
// Name        : MATRICES.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta.
La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original.*/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int matrizoriginal[3][3];

	//Guardando elementos en la matriz
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			cout << "Digite un número [" << i << "][" << j << "] : ";
			cin >> matrizoriginal[i][j];
		}
	}

	cout << "\nMostrando la Matriz Original:\n" << endl;

	for(int i=0; i<3; i++) {
		for(int j =0; j<3; j++) {
			cout << matrizoriginal[i][j] << " ";
		}
		cout << "\n";
	}

	cout << "\n";

	cout << "\nMostrando la Matriz Transpuesta:\n" << endl;

	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			cout << matrizoriginal[j][i] << " ";
		}
		cout << "\n";
	}

	getch();
	return 0;
}
