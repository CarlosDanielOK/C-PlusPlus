//============================================================================
// Name        : CADENAS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Crear una cadena que tenga la siguiente frase "Hola que tal", luego crear otra cadena para preguntarle al usuario su nombre,
//por último añadir el nombre al final de la primera cadena y mostrar el mensaje completo "Hola que tal (nombre del usuario)".

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main() {
	char cadena[] = "Hola que tal "; //1ra cadena
	char nombre[50]; //2da cadena donde se guardara el nombre del usuario

	cout << "Escriba su nombre: ";
	cin.getline(nombre,50,'\n'); //Guardo el nombre. | En realidad no tiene 50 espacios sino 49, porque '\n' cuenta como un espacio reservado.

	strcat(cadena,nombre); //Le añadimos a "cadena" el contenido de "nombre" | cadena = "Hola que tal (nombre)"

	cout << "\n" << cadena << endl;

	getch();
	return 0;
}
