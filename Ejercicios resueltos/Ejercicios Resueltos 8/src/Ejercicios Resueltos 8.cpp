//============================================================================
// Name        : Ejercicios.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Diseñar un algoritmo que muestre los 20 primeros números de la serie de números pares / impares / de 5 en 5.*/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int par=2, impar=1, cinco_en_cinco=5;

	cout << "Los 20 primeros números pares son:\n" << endl;
	for(int i=1; i<=20; i++) {
		cout << i << ": " << par << endl;
		par += 2; //par = par + 2 | Para que valla sumando y asi muestre numeros pares: 2,4,6,8,10...
	}

	cout << "\nLos 20 primeros números impares son:\n" << endl;
	for(int i=1; i<=20; i++) {
		cout << i << ": " << impar << endl;
		impar += 2; //impar = impar + 2 | Para que valla sumando y asi muestre los numeros impares: 1,3,5,7,9...
	}

	cout << "\nLos 20 primeros números de 5 en 5 son:\n" << endl;
	for(int i=1; i<=20; i++) {
		cout << i << ": " << cinco_en_cinco << endl;
		cinco_en_cinco += 5; //cinco_en_cinco = cinco_en_cinco + 5 | Para que valla sumando y asi muestre los numeros de 5 en 5: 5,10,15,20...
	}

	getch();
	return 0;
}
