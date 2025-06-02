//============================================================================
// Name        : CADENAS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Convertir dos cadenas de minúsculas a MAYÚSCULAS, compararlas, y decir si son iguales o no.

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main() {
	char palabra[30], palabra2[30]; //Defino las dos cadenas donde almacenare las palabras

	cout << "Este programa convierte cadenas de caracteres de minúscula a mayúscula. Empecemos!" << endl;
	cout << "\nEscriba dos palabras(separelas por un 'enter'): "; //Si guardara usando "cin>>" las separaria con un espacio
	cin.getline(palabra,30,'\n'); //Guarda la 1ra palabra
	cin.getline(palabra2,30,'\n'); //Guarda la 2da palabra

	strupr(palabra); //convertimos a mayúsculas la 1ra palabra | Las paso a mayúscula porque el usuario puede escribar tanto en minusculas como en
	strupr(palabra2); //convertimos a mayúscula la 2da palabra | mayuscula, asi a la hora de compararlas no habra ningun problema

	if(strcmp(palabra,palabra2) == 0) { //Comparamos las dos palabra para saber si son iguales
		cout << "\nLas palabras son iguales." << endl;
	} else { //Si no son iguales
		cout << "\nLas palabras no son iguales." << endl;
	}

	getch();
	return 0;
}
