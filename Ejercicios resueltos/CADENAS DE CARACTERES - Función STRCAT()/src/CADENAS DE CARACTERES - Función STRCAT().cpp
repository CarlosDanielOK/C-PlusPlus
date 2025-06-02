//============================================================================
// Name        : CADENAS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Añadir o concatenar una cadena con otra - Función strcat()

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main() {
	char cadena1[] = "Esto es una cadena "; //Defino la 1ra cadena
	char cadena2[] = "de ejemplo."; //La 2da cadena
	char cadena3[30]; //Para copiar el contenido de cadena1

	strcpy(cadena3,cadena1); //Copiamos el contenido de cadena1 hacia cadena3 | cadena3 = "Esto es una cadena "

	strcat(cadena3,cadena2); //Con la función strcat() le añadimos a cadena3 la cadena2 | cadena3 = "Esto es una cadena de ejemplo."

	cout << cadena3 << endl; //Imprimimos cadena3 solo, porque ahi esta todo el contenido

	/*Otra opción sin cadena3 seria:

	strcat(cadena1,cadena2); //Le añadimos a cadena1 el contenido de cadena2 pero antes tendriamos que ponerlo un limite a cadena1. Ej: cadena1[30]
	                         //para que no use mas memoria de lo necesario
	cout << cadena1 << endl; //Imprimo cadena1
	*/

	getch();
	return 0;
}
