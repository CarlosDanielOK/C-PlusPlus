//============================================================================
// Name        : CADENAS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Comparar cadenas - Función strcmp()
//strcmp() DIFERENCIA mayusculas de minusculas.
//strcmpi() NO DIFERENCIA mayusculas de minusculas.

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main() {
	char palabra1[100]; //Definimos las dos cadenas a comparar
	char palabra2[100];
	int opc;

	cout << "Escriba una palabra: ";
	cin.getline(palabra1,100,'\n'); //Guardando la primera palabra
	cout << "Escriba una palabra: ";
	cin.getline(palabra2,100,'\n'); //Guardando la segunda palabra

	cout << "\n1. Comparar palabra utilizando 'strcmp()'" << endl;
	cout << "2. Comparar palabra utilizando 'strcmpi()'" << endl;
	cout << "Opción: "; cin >> opc;

	switch(opc) {
	case 1:
		if (strcmp(palabra1,palabra2) == 0) { //Se lee: si palabra1 y palabra2 son iguales. | Si son iguales strcmp() retorna un valor de 0(por eso el "==0")
			cout << "\nAmbas palabras son iguales." << endl;
		}
		else if (strcmp(palabra1,palabra2) != 0) { //Se lee: si palabra1 y palabra2 son distintos. Si son distintos entra en el if
		cout << "\nLas palabras son diferentes." << endl;
		if (strcmp(palabra1,palabra2) < 0) { //Se lee: si palabra1 es menor a palabra2 retorna un valor menor a 0(por eso el "<0"). Si es asi entra en el if
		cout << "\n" << palabra1 << " es menor alfabéticamente a " << palabra2 << endl;
		}
		if(strcmp(palabra1,palabra2) > 0) { //Se lee: si palabra1 es mayor a palabra2 retorna un valor mayor a 0(por eso el ">0"). Si es asi entra en el if
		cout << "\n" << palabra1 << " es mayor alfabéticamente a " << palabra2 << endl;
		}
		}
		break;

	case 2:
		if (strcmpi(palabra1,palabra2) == 0) { //Se lee: si palabra1 y palabra2 son iguales. | Si son iguales strcmpi() retorna un valor de 0(por eso el "==0")
		cout << "\nAmbas palabras son iguales." << endl;
		}
		else if (strcmpi(palabra1,palabra2) < 0) { //Se lee: si palabra1 es menor a palabra2 retorna un valor menor a 0(por eso el "<0"). Si es asi entra en el if
		cout << "\n" << palabra1 << " es menor alfabéticamente a " << palabra2 << endl;
		}
		else { //Si palabra1 no es menor a palabra2, significa que palabra1 es mayor.
		cout << "\n" << palabra1 << " es mayor alfabéticamente a " << palabra2 << endl;
		}
		break;
	}

	getch();
	return 0;
}
