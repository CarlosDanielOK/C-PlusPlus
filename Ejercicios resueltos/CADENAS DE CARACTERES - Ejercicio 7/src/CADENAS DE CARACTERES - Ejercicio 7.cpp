//============================================================================
// Name        : CADENAS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Pedir su nombre al usuario en MAYÚSCULA, si su nombre comienza por la letra A, convertir su nombre a minusculas, caso contrario no convertirlo.

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main() {
	char nombre[30];
	char nombremayu[30];

	do {
		cout << "Escriba su nombre en letras mayúsculas: ";
	    cin.getline(nombre,30,'\n');
	    strcpy(nombremayu,nombre); //copiamos el contenido de nombre a nombremayu
	    strupr(nombremayu); //convertimos el nombremayu a mayuscula para compararlo con "nombre"
	} while (strcmp(nombre,nombremayu) != 0); //esto se va repiter si el usuario no escribe en mayusculas su nombre

	if (nombre[0] == 'A') { //Si la primera letra del nombre es igual a "A" entra en el if
		strlwr(nombre); //Convertimos su nombre a minusculas
		cout << "\nSu nombre en letras minusculas: " << nombre << endl;
	} else {
		cout << "\nSu nombre no comienza con la letra 'A'" << endl;
	}

	getch();
	return 0;
}
