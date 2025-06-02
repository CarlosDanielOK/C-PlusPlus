//============================================================================
// Name        : CADENAS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Pedir al usuario que digite dos cadenas de caracteres, e indicar si ambas cadenas son iguales,
//en caso de no serlo, indicar cual es mayor alfabéticamente.

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main() {
	char cadena1[200], cadena2[200]; //Declaramos las dos cadenas donde guardaremos los caracteres que ingrese el usuario

	cout << "Escriba una palabra: ";
	cin.getline(cadena1,200,'\n');
	cout << "Escriba una palabra: ";
	cin.getline(cadena2,200,'\n');

	if(strcmp(cadena1,cadena2) == 0) { //Si cadena1 es igual a cadena2 entra en el bucle
		cout << "\n" << cadena1 << " y " << cadena2 << " son iguales." << endl;
	}
	if(strcmp(cadena1,cadena2) != 0) { //Si cadena1 y cadena2 son distintos entra en el bucle
		if (strcmp(cadena1,cadena2) > 0) { //Si cadena1 es mayor a cadena2 entra
			cout << "\n" << cadena1 << " es mayor alfabéticamente que " << cadena2 << endl;
		} else { //Caso contrario, significaria que cadena2 es mayor a cadena1
			cout << "\n" << cadena2 << " es mayor alfabéticamente que " << cadena1 << endl;
		}
	}

    getch();
	return 0;
}
