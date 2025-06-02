//============================================================================
// Name        : MATRICES.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Realice un programa que calcule el producto de dos matrices cuadradas de 3x3.

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int matriz1[3][3], matriz2[3][3];

	cout << "Matriz 1\n" << endl;
	//Guardamos los elementos que digite el usuario en la matriz1
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			cout << "Digite un número [" << i << "][" << j << "] : ";
			cin >> matriz1[i][j];
		}
	}

	cout << "\nMatriz 2\n" << endl;
	//Guardamos los elementos que digite el usuario en la matriz2
		for(int i=0; i<3; i++) {
			for(int j=0; j<3; j++) {
				cout << "Digite un número [" << i << "][" << j << "] : ";
				cin >> matriz2[i][j];
			}
		}

	cout << "\nProducto de Matrices: \n" << endl;

	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			cout << matriz1[i][j] * matriz2[i][j] << " ";
		}
		cout << "\n";
	}

	getch();
	return 0;
}
