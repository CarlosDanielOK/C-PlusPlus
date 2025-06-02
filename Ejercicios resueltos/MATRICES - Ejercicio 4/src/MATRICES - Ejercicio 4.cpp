//============================================================================
// Name        : MATRICES.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Hacer una matriz preguntando al usuario el numero de filas y columnas, llenarla de números aleatorios,
//copiar el contenido a otra matriz y por último mostrarla en pantalla.

#include <iostream>
#include <conio.h>
#include <time.h>
using namespace std;

int main() {
	int matriz[100][100];
	int matriznueva[100][100]; //Declaramos la nueva matriz donde copiaremos todos los elementos de "matriz"
	int filas, columnas, dato;

	cout << "Digite el número de filas: "; cin >> filas;
	cout << "Digite el número de columnas: "; cin >> columnas;
	cout << "\n";

	srand(time(NULL)); //Para generar los números aleatorios

	//Generando los números aleatorios y guardandolos en la matriz
	for(int i=0; i<filas; i++) {
		for(int j=0; j<columnas; j++) {
		dato = 10 + rand() % (100); //Se genera el número aleatorio en el rango [10-100] y se guardara en "dato"
		matriz[i][j] = dato; //Ahora guardamos el número aleatorio en la matriz
		}
	}


	//Copiando los elementos de "matriz" hacia "matriznueva"
	for(int i=0; i<filas; i++) {
		for(int j=0; j<columnas; j++) {
			matriznueva[i][j] = matriz[i][j];
		}
	}

	//Ahora vamos a mostrar la nueva matriz ("matriznueva") en pantalla
	for(int i=0; i<filas; i++) {
		for(int j=0; j<columnas; j++) {
			cout << matriznueva[i][j] << " ";
		}
		cout << "\n";
	}

	getch();
	return 0;
}
