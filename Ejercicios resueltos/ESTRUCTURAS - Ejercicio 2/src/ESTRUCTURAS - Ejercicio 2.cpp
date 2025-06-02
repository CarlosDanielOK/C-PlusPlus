//============================================================================
// Name        : ESTRUCTURAS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Hacer una estructura llamada alumno, en la cual se tendrán los siguientes Campos: Nombre, edad, promedio, pedir datos al usuario para 3 alumnos,
comprobar cuál de los 3 tiene el mejor promedio y posteriormente imprimir los datos del alumno. */

#include <iostream>
#include <conio.h>
using namespace std;

struct alumno {
		char nombre[20];
		int edad;
		float promedio;
} alumnos[3]; //Declaro un arrglo de estructuras. De esta manera me ahorro muchas variables por declarar.

int main() {
	int mayor=0, pos=0; //Variables para ayudarnos a calcular el mejor promedio

	//Pidiendo los datos para los 3 alumnos
	for(int i=0; i<3; i++) {
		cout << "Nombre del alumno: "; cin.getline(alumnos[i].nombre,20,'\n');
		cout << "Edad: "; cin >> alumnos[i].edad;
		cout << "Promedio: "; cin >> alumnos[i].promedio;
		fflush(stdin);

		//Calculando el mejor promedio
		if(alumnos[i].promedio > mayor) {
			mayor = alumnos[i].promedio; //Sacamos el mejor promedio
			pos = i; //Guardamos la posicion del alumno con mejor promedio
		}
		cout << "\n";
	}

	//Imprimimos los datos del alumno con mejor promedio
	cout << "El alumno con mejor promedio es:" << endl;
	cout << "\nNombre: " << alumnos[pos].nombre << endl;
	cout << "Edad: " << alumnos[pos].edad << endl;
	cout << "Promedio: " << alumnos[pos].promedio << endl;

	getch();
	return 0;
}
