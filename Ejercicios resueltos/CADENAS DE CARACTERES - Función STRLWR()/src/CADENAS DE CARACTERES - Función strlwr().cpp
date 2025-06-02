//============================================================================
// Name        : CADENAS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Pasar una palabra a minusculas - Función strlwr()

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main() {
	char palabra[] = "PROGRAMACION"; //Defino la cadena de caracteres en mayusculas

	strlwr(palabra); //strlwr(nombre de la variable) | Convertimos la palabra en letras minusculas | Si una de las letras esta en minúscula no afecta
                     //en nada,simplemente si encuentra una minúscula la deja como esta, y las que esten en mayúscula las pasara a minúscula.
	cout << palabra << endl;

	getch();
	return 0;
}
