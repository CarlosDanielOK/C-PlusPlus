//============================================================================
// Name        : CADENAS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Pedir al usuario una cadena de caracteres, almacenarla en un arreglo(array) y copiar todo su contenido hacia otro arreglo(array) de caracteres.

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main() {
	char frase[200]; //Defino el arreglo para guardar la cadena de caracteres
	char frase2[200]; //En este arreglo(array) se copiara el contenido de "frase"

	cout << "Escriba una frase: ";
	cin.getline(frase,200,'\n'); //Ahora estoy guardando la cadena de caracteres que haya escrito el usuario en "frase"

	cout << "\nGuardado con exito." << endl;
	cout << "Copiando su contenido hacia otro arreglo (array)..." << endl;

	strcpy(frase2,frase); //Copiando el contenido de "frase" hacia "frase2" | strcpy(La cadena vacia, la cadena con contenido)

	cout << "\n" << frase2 << endl;

	getch();
	return 0;
}
