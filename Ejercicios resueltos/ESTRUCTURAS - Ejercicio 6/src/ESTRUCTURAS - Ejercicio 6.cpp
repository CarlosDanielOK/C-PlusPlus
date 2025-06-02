//============================================================================
// Name        : ESTRUCTURAS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Utilizar las 2 estructuras del problema 5, pero ahora pedir los datos para N alumnos,
//y calcular cuál de todos tiene el mejor promedio, e imprimir sus datos.

#include <iostream>
#include <conio.h>
using namespace std;

struct promedio {
	float nota1, nota2, nota3;
};

struct alumno {
	char nombre[20];
	char sexo[10];
	int edad;
	struct promedio notas; //Anidamos la estructura promedio a la estructura alumnos
} estudiante[100];

int main() {
	int n, pos;
	float nota_final, mayor=0;

	cout << "Digite la cantidad de alumnos: "; cin >> n;
	cout << "\n";

	//Pidiendo los datos para n alumnos
	for(int i=0; i<n; i++) {
		fflush(stdin);
		cout << i+1 << ". Nombre del alumno: "; cin.getline(estudiante[i].nombre,20,'\n');
		cout << i+1 << ". Sexo: "; cin.getline(estudiante[i].sexo,10,'\n');
		cout << i+1 << ". Edad: "; cin >> estudiante[i].edad;
		cout << i+1 << ". Digite la primer nota: "; cin >> estudiante[i].notas.nota1;
		cout << i+1 << ". Digite la segunda nota: "; cin >> estudiante[i].notas.nota2;
		cout << i+1 << ". Digite la tercer nota: "; cin >> estudiante[i].notas.nota3;

		//Calculando el promedio de cada alumno
		nota_final = (estudiante[i].notas.nota1 + estudiante[i].notas.nota2 + estudiante[i].notas.nota3)/3;

		//Calculando el mejor promedio
		if(nota_final > mayor) {
			mayor = nota_final; //Guardamos el mejor promedio
			pos = i; //Guardamos la posicion del alumno con el mejor promedio
		}
		cout << "\n";
	}

	cout << "El alumno con el mejor promedio es:" << endl;
	cout << "\nNombre del alumno: " << estudiante[pos].nombre << endl;
	cout << "Sexo: " << estudiante[pos].sexo << endl;
	cout << "Edad: " << estudiante[pos].edad << endl;
	cout << "Promedio: " << mayor << endl;

	getch();
	return 0;
}
