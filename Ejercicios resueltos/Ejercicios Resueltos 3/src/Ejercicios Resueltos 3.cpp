//============================================================================
// Name        : Ejercicios.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Diseñar un algoritmo que designe a una variable d el valor minimo de los valores que contienen las variables a,b y c.

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int a, b, c, d;

	cout << "Digite un número: "; cin >> a;
	cout << "Digite un número: "; cin >> b;
	cout << "Digite un número: "; cin >> c;

	if(a<=b && a<=c) {
		d = a; //Si a es el número menor, lo guardamos en la variable d
	}
	if(b<=a && b<=c) {
		d = b;
	}
	if(c<=a && c<=b) {
		d = c;
	}

	cout << "\nEl número menor es: " << d << endl;

	getch();
	return 0;
}
