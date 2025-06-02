//============================================================================
// Name        : CADENAS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Longitud de una cadena de caracteres - Función strlen()
//Esta funcion cuenta cuantos elementos tiene una cadena de caracteres. Y te devuelve un número entero

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main() {
	char palabra[] = "Hola Senior"; //Declaramos una cadena de caracteres
	int longitud=0; //La funcion strlen te devuelve un número entero, asi que necesitamos una variable de tipo entera (int)

	cout << palabra << endl;

	longitud = strlen(palabra); //La función 'strlen()' cuenta cuantos elementos tiene la variable 'palabra'

	cout << "\nNúmero de elementos o digitos de la cadena de caracteres es: " << longitud << endl;

	getch();
	return 0;
}
