//============================================================================
// Name        : CADENAS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/* Hacer un programa que pida al usuario que digite una cadena de caracteres, luego verificar la longitud de la cadena, y si esta supera
   a 10 caracteres mostrarla en pantalla, caso contrario no mostrarla. */

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main() {
	char palabra[200]; //No sabemos cuantos caracteres va a digitar el usuario asi que ponemos un estimado de [200] elementos
	int longitud=0; //Para guardar la cantidad de elementos que tendra la cadena utilizando la funcion 'strlen()'

	cout << "Escriba una frase (cadena de caracteres): ";
	cin.getline(palabra,200,'\n'); //Guardo la cadena de caracteres en la variable 'palabra' con 99 espacios disponibles ya que '\n' tiene 1 espacio reservado

	longitud = strlen(palabra); //Contamos cuantos elementos tiene la variable palabra y lo guardamos en longitud

	if(longitud>10) {
		cout << "\n" << palabra << endl;
	} else {
		cout << "\nLa longitud de su cadena contiene menos de 10 caracteres." << endl;
	}

	getch();
	return 0;
}
