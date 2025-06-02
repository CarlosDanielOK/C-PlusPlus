//============================================================================
// Name        : ESTRUCTURAS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Hacer 2 estructuras una llamada promedio que tendrá los siguientes campos: nota1, nota2, nota3; y otro llamada alumno que tendrá los siguientes
miembros: nombre, sexo, edad; hacer que la estructura promedio este anidada en la estructura alumno, luego pedir todos los datos para un alumno,
luego calcular su promedio, y por ultimo imprimir todos sus datos incluidos el promedio. */

#include <iostream>
#include <conio.h>
using namespace std;

struct promedio {
	float nota1;
	float nota2;
	float nota3;
};

struct alumno {
	char nombre[20];
	char sexo[10];
	int edad;
	struct promedio notas; //Anidamos la estructura promedio a la estructura alumnos
} estudiante;

int main() {
	float notafinal;
	//Pidiendo los datos al usuario
	cout << "Nombre del alumno: "; cin.getline(estudiante.nombre,20,'\n');
	cout << "Sexo: "; cin.getline(estudiante.sexo,10,'\n');
	cout << "Edad: "; cin >> estudiante.edad;
	cout << "Digite la primer nota: "; cin >> estudiante.notas.nota1;
	cout << "Digite la segunda nota: "; cin >> estudiante.notas.nota2;
	cout << "Digite la tercer nota: "; cin >> estudiante.notas.nota3;

	//Calculando el promedio del alumno
	notafinal = (estudiante.notas.nota1 + estudiante.notas.nota2 + estudiante.notas.nota3)/3;

	//Imprimo todos los datos del alumno incluido el promedio
	cout << "\nNombre del alumno: " << estudiante.nombre << endl;
	cout << "Sexo: " << estudiante.sexo << endl;
	cout << "Edad: " << estudiante.edad << endl;
	cout << "Promedio: " << notafinal << endl;

	getch();
	return 0;
}
