//============================================================================
// Name        : Ejercicios.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Diseñar un algoritmo que muestre las tablas de multiplicar de los primeros 10 números.*/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	cout << "Tablas de multiplicar de los primeros 10 números.\n" << endl;

	//Vamos a mostrar la tabla de multiplicar de los primeros 10 numeros
	for(int i=1; i<=10; i++) {
		for(int j=1; j<=10; j++) {
			cout << i << " x " << j << " = " << i*j << endl; //Aca mostramos en pantalla la tabla de multiplicar de los primeros 10 numeros
		}
		cout << "\n"; //Un salto de linea para que no este todo junto
	}

	getch();
	return 0;
}
