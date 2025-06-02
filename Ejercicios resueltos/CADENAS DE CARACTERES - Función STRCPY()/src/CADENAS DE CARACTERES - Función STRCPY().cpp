//============================================================================
// Name        : CADENAS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Copiar el contenido de una cadena a otra - Función strcpy()

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main() {
	char nombre[] = "Carlos"; //Cadena con contenido
	char nombre2[20]; //Cadena vacia. Aqui vamos a copiar el contenido de "nombre"

	strcpy(nombre2,nombre); //strcpy(La cadena vacia, la cadena con contenido) | Estamos copiando el contenido de "nombre" a "nombre2"

	cout << nombre2 << endl;

	getch();
	return 0;
}
