//============================================================================
// Name        : FUNCIONES.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Ejercicio 4: Escriba un programa en C++ que devuelva la parte fraccionaria de cualquier número introducido por el usuario.
Por ejemplo, si se introduce el número 256.879, debería desplegarse el número 0.879.*/

#include <iostream>
#include <conio.h>
using namespace std;

//Prototipos de función
void PedirDatos(); //Función para pedir los datos al usuario
void fraccion(double x); //Función para obtener la parte fraccionaria del número y desplegarlo

double numero;

int main() {
	PedirDatos(); //Llamo a la función
	fraccion(numero); //Llamo a la función

	getch();
	return 0;
}

void PedirDatos() {
	cout << "Digite un número: "; cin >> numero;
}

void fraccion(double x) {
	int entero; //Variable para almacenar la parte entera
	entero = x; //Guardo la parte entera en la variable local(entero)
	double resultado = x - entero; //Al número original le restamos la parte entera y asi nos queda solo la parte la fraccionaria

	cout << "\nLa parte fraccionaria del número es: " << resultado << endl;
}
