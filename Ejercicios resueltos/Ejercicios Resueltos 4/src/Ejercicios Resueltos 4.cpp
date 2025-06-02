//============================================================================
// Name        : Ejercicios.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Diseñar un algoritmo que halle el número de términos necesarios de la serie 1 + 1/2 + 1/3 + 1/4 + 1/5 + 1/n ...
//para rebasar cierto valor positivo llamado "valor".

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	double valor, suma=0, i=1;

	cout << "Diseñar un algoritmo que halle el número de términos necesarios de la serie 1 + 1/2 + 1/3 + 1/4 + 1/5 + 1/n ... para rebasar cierto valor positivo llamado 'valor'" << endl;

	cout << "\nDigite un valor: "; cin >> valor;

	for(i=1; suma<valor; i++) { //la variable "suma" nos ayuda a saber si ya pasamos el valor que digito el usuario.
			suma = suma + 1/i;
	}

	cout << "\n" << suma << " es mayor a " << valor << endl;

	getch();
	return 0;
}
