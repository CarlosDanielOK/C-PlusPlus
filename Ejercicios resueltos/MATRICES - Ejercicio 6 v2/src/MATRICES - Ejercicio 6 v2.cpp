//============================================================================
// Name        : MATRICES.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int matriz1[3][3], matriz2[3][3];

		cout << "Matriz 1\n" << endl;

		for(int i=0; i<3; i++) { //Guardando elementos en la matriz1
			for(int j=0; j<3; j++) {
				cout << "Digite un número [" << i << "][" << j << "] : ";
				cin >> matriz1[i][j];
			}
		}

		cout << "\nMatriz 2\n" << endl;

		for(int i=0; i<3; i++) { //Guardando elementos en la matriz2
			for(int j=0; j<3; j++) {
				cout << "Digite un número: [" << i << "][" << j << "] : ";
				cin >> matriz2[i][j];
			}
		}

		cout << "\nMostrando Matriz 1:\n" << endl;

		for(int i=0; i<3; i++) {
				for(int j =0; j<3; j++) {
					cout << matriz1[i][j] << " ";
				}
				cout << "\n";
			}

		cout << "\nMostrando Matriz 2:\n" << endl;

		for(int i=0; i<3; i++) {
				for(int j =0; j<3; j++) {
					cout << matriz2[i][j] << " ";
				}
				cout << "\n";
			}

		//Sumando matrices
		cout << "\nSuma de Matrices:\n" << endl;
		for(int i=0; i<3; i++) {
			for(int j=0; j<3; j++) {
				cout << matriz1[i][j] + matriz2[i][j] << " ";
			}
			cout << "\n";
		}

	getch();
	return 0;
}
