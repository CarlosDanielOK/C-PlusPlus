//============================================================================
// Name        : CADENAS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <conio.h>
#include <string.h> //Libreria para cadenas de caracteres
using namespace std;

int main() {
	char nombre[28]; //Para guadar cadenas de caracteres

	cout << "Guardando cadadenas de caracteres con 'cin.getline(nombre, espacios total de elementos, cuando quiero que termine)'" << endl;
	cout << "\nEscriba su nombre: ";
	cin.getline(nombre,28,'\n'); //En realidad no tiene 28 espacios sino 27, porque '\n' cuenta como un espacio reservado.
	cout << "\n" << nombre << endl;

	getch();
	return 0;
}
