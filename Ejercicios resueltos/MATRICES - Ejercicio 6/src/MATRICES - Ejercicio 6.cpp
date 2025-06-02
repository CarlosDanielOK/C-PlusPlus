//============================================================================
// Name        : MATRICES.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Realice un programa que calcule la suma de dos matrices elevadas al cuadrado de 3x3.

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main() {
	int matriz1[3][3], matriz2[3][3], cuadrado=0, suma1=0, suma2=0, total;

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

	//Calculando la suma de los cuadrados de la matriz1
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			cuadrado = pow(matriz1[i][j],2); //Elevo al cuadrado todas los elementos de la matriz1
			suma1 += cuadrado; //Sumo los cuadrados de la matriz
		}
	}

	//Calculando la suma de los cuadrados de la matriz2
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			cuadrado = pow(matriz2[i][j],2);
			suma2 += cuadrado;
		}
	}

	total = suma1 + suma2;

	cout << "\nLa suma de las dos Matrices cuadradas es: " << total << endl;

	getch();
	return 0;
}
