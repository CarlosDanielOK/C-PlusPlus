//============================================================================
// Name        : CADENAS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Pedir al usuario que digite una cadena, luego copiar su contenido hacia otro array de caracteres.
//Y por ultimo modificar su mensaje poniendo a partir de la posición 10 "Buena broma".﻿

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main() {
	char cadena1[50]; //Creo una variable para almacenar la cadena de caracteres
	char cadena2[50]; //Variable para copiar "cadena1"
	char cadena3[] = "Buena broma"; //La cadena que tenemos que añadir luego

	cout << "Escriba una frase: ";
	cin.getline(cadena1,50,'\n');

	strcpy(cadena2,cadena1); //strcpy(cadena vacia, cadena con contenido) | Copiamos el contenido de "cadena1" a "cadena2"

	for(int i=10; i<50; i++) {
		cadena2[i] = cadena3[i-10]; //Ponemos el contenido de "cadena3" a partir de la posicion 10 de "cadena2". | 1ro: cadena2[10]=cadena3[0(10-10)]
	}

	cout << cadena2 << endl;

	getch();
	return 0;
}
