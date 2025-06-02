//============================================================================
// Name        : CADENAS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Realice un programa que lea una cadena de caracteres de la entrada estándar y
//muestre en la salida estándar cuántas ocurrencias de cada vocal existen en la cadena.

#include <iostream>
#include <conio.h>
#include <string.h> //Libreria para cadenas de caracteres
using namespace std;

int main() {
	char cadena[100];
	int a=0, e=0, i=0, o=0, u=0; //Para guardar cuantas veces aparece cada vocal en la cadena

	cout << "Escriba una frase: ";
	cin.getline(cadena,100,'\n');

	strlwr(cadena); //Primero convertimos la cadena en letras minusculas

	for (int v=0; v<100; v++) { //Vamos comparar letra por letra cuantas vocales tiene la cadena
		if (cadena[v] == 'a') {
			a++;
		} else if (cadena[v] == 'e') {
			e++;
		} else if (cadena[v] == 'i') {
			i++;
		} else if (cadena[v] == 'o') {
			o++;
		} else if (cadena[v] == 'u') {
			u++;
		}
	}

	cout << "\nLa frase tiene las siguientes vocales: " << endl;
	cout << "\na = " << a << "\ne = " << e << "\ni = " << i << "\no = " << o << "\nu = " << u << endl;

	getch();
	return 0;
}
