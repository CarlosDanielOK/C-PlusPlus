//============================================================================
// Name        : CADENAS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Pasar una palabra a MAYÚSCULA - Función strupr()

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main() {
	char palabra[] = "carlos"; //Defino la cadena de caracteres en letras minúsculas. | Si una de las letras esta en mayúscula no afecta en nada,
	                           //simplemente si encuentra una mayúscula la deja como esta, y las que esten en minúscula las pasara a mayúscula.
	strupr(palabra); //strupr(nombre de la variable) | Estoy pasando "palabra" a Mayúscula.

	cout << palabra << endl; //Imprime: CARLOS

	getch();
	return 0;
}
