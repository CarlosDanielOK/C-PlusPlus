//============================================================================
// Name        : ESTRUCTURAS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Defina una estructura que sirva para representar a una persona. La estructura debe contener dos campos: el nombre de la persona y un valor de tipo
lógico que indica si la persona tiene algún tipo de discapacidad. Realice un programa que dado un vector de personas rellene dos nuevos vectores:
uno que contenga las personas que no tienen ninguna discapacidad y otro que contenga las personas con discapacidad. */

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

struct Persona {
	char nombre[20];
	bool discapacidad;
} Personas[100], PersonasConD[100], PersonasSinD[100];

int main() {
	int n, c=0, s=0; //c y s son contadores o iteradores.

	cout << "Digite la cantidad de personas: "; cin >> n;
	cout << "\n";

	//Pediendo datos al usuario
	for(int i=0; i<n; i++) {
		fflush(stdin);
		cout << "Nombre: "; cin.getline(Personas[i].nombre,20,'\n');
		cout << "Tiene alguna discapacidad (1 en caso de ser verdadero / 0 en caso de ser falso): "; cin >> Personas[i].discapacidad;

		//Clasificando las personas
		if(Personas[i].discapacidad == 1) { //Si la persona tiene discapacidad
			strcpy(PersonasConD[c].nombre,Personas[i].nombre);
			c++;
		}
		if(Personas[i].discapacidad == 0) { //Si la persona no tiene discapacidad
			strcpy(PersonasSinD[s].nombre,Personas[i].nombre);
			s++;
		}
		cout << "\n";
	}

	cout << "Personas con discapacidad:\n" << endl;
	for(int i=0; i<c; i++) {
		cout << PersonasConD[i].nombre << endl;
	}

	cout << "\nPersonas sin discapacidad:\n" << endl;
	for(int i=0; i<s; i++) {
		cout << PersonasSinD[i].nombre << endl;
	}

	getch();
	return 0;
}
