//============================================================================
// Name        : CADENAS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <conio.h>
#include <string.h> //Libreria para cadenas de caracteres
using namespace std;

int main() {
	char palabra[] = "Carlos"; //Estoy almacenando mi cadena de caracteres (que es "Carlos") dentro de la variable "palabra"
	char palabra2[] = {'C','a','r','l','o','s','\0'}; //Otra forma de guardar cadenas de caracteres | '\0' indica que ahi termina la cadena
	char nombre[50]; //Variable para guardar cadena de caracteres con 50 espacios disponibles
	int opc; //Para guardar la opcion

	cout << "Mostrando cadena de caracteres ya definida:\n" << endl;
	cout << palabra << endl; //Muestro en pantalla
	cout << palabra2 << endl; //Muestro en pantalla

	cout << "\n1. Guardar su nombre utilizando 'cin'" << endl;
	cout << "2. Guardar su nombre utilizando 'gets(variable)'" << endl;
	cout << "3. Guardar su nombre utilizando 'cin.getline(nombre,espacios,cuando termina)" << endl;
	cout << "\nDigite la opción que desea: ";
	cin >> opc;

	if (opc==1) {
		cout << "\nGuardando una cadena de caracteres con 'cin'\n";
	    cout <<"\nEscriba su nombre: ";
	    cin >> nombre; //El "cin" cuando encuentra un espacio(" ")no guarda lo que esta despues del espacio
		               //Si escribo "Carlos Daniel" el cin solo guardara "Carlos"
	    cout << "\n" << nombre << endl;
	}
	else if (opc==2) {
		cout << "\nGuardando una cadena de caracteres con 'gets(variable)'\n";
	    cout << "\nEscriba su nombre: ";
	    gets(nombre); //El "gets" guarda toda tu cadena de caracteres sin importar cuantos espacios hallas declarado.
	    cout << "\n" << nombre << endl;
	}
	else if (opc==3) {
		cout << "\nGuardando una cadena de caracteres con 'cin.getline(nombre,espacio total de elementos, cuando termina)'\n";
	    cout << "\nEscriba su nombre: ";
	    cin.getline(nombre,50,'\n'); // '\n' cuenta como un espacio. Por lo tanto si declare 50 espacios en realidad tendre 49 espacios.
	                                 // ya que 50(espacios)-1(\n(un espacio)) = 49 espacios disponibles para guardar la cadena de caracteres
	    cout << nombre << endl;
	}

	//Las opciones 2 y 3 no funcionan. Razón: Desconocida
	getch();
	return 0;
}
