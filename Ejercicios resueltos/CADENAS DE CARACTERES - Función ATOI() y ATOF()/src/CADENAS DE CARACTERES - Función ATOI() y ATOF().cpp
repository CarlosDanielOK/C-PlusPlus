//============================================================================
// Name        : CADENAS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Transformar una cadena de caracteres a números - Función atoi() y atof()

#include <iostream>
#include <conio.h>
#include <stdlib.h> //Libreria para las funciones atoi() y atof()
using namespace std;

int main() {
	char cadena[50]; //Defino una cadena de caracteres, para guardar los caracteres que digite el usuario
	int numeroi; //La función atoi() devuelve un valor entero. Por eso necesito una variable de tipo entero donde almacenarla
	float numerof; //La función atof() devuelve un valor flotante. Por lo tanto, necesito una variable de tipo flotante donde almacenarla
	int opc; //Para guardar la opción que desea el usuario

	cout << "Digite una cadena de caracteres de números: ";
	cin.getline(cadena,50,'\n');
	cout << "\n1. Transformar usando la función atoi() 'Para transformar cadenas a números enteros'";
	cout << "\n2. Transformar usando la función atof() 'Para transformar cadenas a números flotantes'";
	cout << "\nOpción: "; cin >> opc;

	switch (opc) {
	case 1:
		numeroi = atoi(cadena); //En "numeroi" vamos a guardar el caracter transformado (Ej: transformamos "123"(caracteres) a 123(número entero))
		cout << "\n" << numeroi << endl; //Mostramos en pantalla el número transformado
		break;
	case 2:
		numerof = atof(cadena); //En "numerof" vamos a guardar el caracter transformado (Ej:transformamos "123.45"(caracteres) a 123(número flotante))
		cout << "\n" << numerof << endl; //Mostramos en pantalla el número transformado
		break;
	}

	getch();
	return 0;
}
