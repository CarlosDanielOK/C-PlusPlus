//============================================================================
// Name        : CADENAS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Hacer un programa que determine si una palabra es políndroma. Políndroma = son palabras que si las inviertes son la misma palabra. Ej: reconocer

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main() {
	char palabra[30]; //Para guardar la palabra original
	char palabra2[30]; //Para guardar la palabra invertida

	cout << "Escriba una palabra: ";
	cin.getline(palabra,30,'\n'); //Guardo la palabra

	strcpy(palabra2,palabra); //Antes de invertir la palabra, la copiamos en palabra2 para luego compararlas y saber si es polindroma
	strrev(palabra); //Invertimos la palabra

	if (strcmpi(palabra,palabra2) == 0) { //Comparamos la palabra original con la invertida. | Utilice strcmpi() por si el usuario desea escribir
		cout << "\nEs una palabra políndroma." << endl; //con mayusculas, porque si comparamos la mayusculas nunca seria una palabra polindroma.
	} else {
		cout << "\nNo es una palabra políndroma." << endl;
	}

	getch();
	return 0;
}
