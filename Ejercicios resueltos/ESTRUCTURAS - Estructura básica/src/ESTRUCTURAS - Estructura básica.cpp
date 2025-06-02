//============================================================================
// Name        : ESTRUCTURAS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <conio.h>
using namespace std;

struct persona {
	char nombre[30];
	int edad;
} //Declaramos variables struct y las rellenamos
persona1 = {"Carlos",19}, //Para rellenarlas nos guiamos por el orden de los campos, primero esta nombre y despues edad
persona2 = {"Daniel",15}, //Para finalizar va el ";"
persona3; //Esta variable va ser para que lo rellene el usuario con sus datos

int main() { //Vamos a imprimir los datos de una estructura (tenemos que guiarnos de como estan ordenanos)
	cout << "Nombre 1: " << persona1.nombre << endl; //Imprimimos primero el nombre de la persona1
	cout << "Edad 1: " << persona1.edad << endl; //Imprimimos la edad de persona1
	cout << "\nNombre 2: " << persona2.nombre << endl; //Imprimimos el nombre de persona2
	cout << "Edad 2: " << persona2.edad << endl; //Imprimimos la edad de persona2
	//cout << "..." << nombre de la variable . nombre del campo << endl;

	cout << "\nSu nombre: ";
	cin.getline(persona3.nombre,30,'\n'); //Es lo mismo que cuando guardabamos una cadena, con la diferencia del "(NombreVariable.NombreCampo,30,'\n')
	cout << "Su edad: ";
	cin >> persona3.edad; //No hace falta usar cin.getline porque la variable edad es de tipo entero, y la edad solo es un numero asi que con el cin es suficiente

	cout << "\nImprimiendo sus datos:\n" << endl;
	cout << "Nombre: " << persona3.nombre << endl;
	cout << "Edad: " << persona3.edad << endl;

	//CONCLUSIÓN: Las estructuras son bastante sencillas de usar, y nos ahorran mucho tiempo en declaracion de variables en lo que es c++

	getch();
	return 0;
}
