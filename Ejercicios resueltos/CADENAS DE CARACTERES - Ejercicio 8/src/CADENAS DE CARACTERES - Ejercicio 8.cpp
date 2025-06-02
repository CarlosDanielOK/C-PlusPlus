//============================================================================
// Name        : CADENAS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Pedir al usuario dos cadenas de caracteres de números, uno entero y el otro real, convertirlos a sus respectivos valores y por último sumarlos.

#include <iostream>
#include <conio.h>
#include <stdlib.h> //Libreria para las funciones atoi() y atof()
using namespace std;

int main() {
	char cad1[50], cad2[50];
	int numero1; //Para guardar el numero transformado con la funcion atoi()
	float numero2; //Para guardar el numero transformar con la funcion atof()
	double suma; //Para guardar la suma de las dos cadenas

	cout << "Digite una cadena de caracteres de números enteros: ";
	cin.getline(cad1,50,'\n');
	cout << "Digite una cadena de caracteres de números reales: ";
	cin.getline(cad2,50,'\n');

	numero1 = atoi(cad1); //Transformamos "cad1" en un valor entero y lo guardamos en la variable de tipo entero "numero1"
	numero2 = atof(cad2); //Transformamos "cad2" en un valor flotante y lo guardamos en la variable de tipo flotante "numero2"

	suma = numero1 + numero2; //Guardamos en "suma" la suma de las dos cadenas ya transformadas

	cout << "\nLa suma de las dos cadenas de caracteres es: " << suma << endl;

	getch();
	return 0;
}
