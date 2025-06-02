//============================================================================
// Name        : ESTRUCTURAS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Realizar un programa que lea un arreglo de estructuras los datos de N empleados de la empresa
//y que imprima los datos del empleado con mayor y menor salario.

#include <iostream>
#include <conio.h>
using namespace std;

struct Empleado {
	char nombre[20];
	float salario;
} empleados[100]; //Como no sabemos cuantos empleados tiene la empresa le estimamos alrededor de 100 empleados

int main() {
	int emp, posM, posm;
	float mayor=0, menor=999999;

	cout << "Digite la cantidad de empleados: "; cin >> emp;
	cout << "\n";

	//Vamos a pedirle los datos de los N empleados
	for(int i=0; i<emp; i++) {
		fflush(stdin);
		cout << i+1 << ". Nombre: "; cin.getline(empleados[i].nombre,20,'\n');
		cout << i+1 << ". Salario: $"; cin >> empleados[i].salario;

		//Calculando el mayor salario
		if(empleados[i].salario > mayor) { //Calculamos uno por uno el salario de todos los empleados para saber cual es el mayor
			mayor = empleados[i].salario; //Guardamos el mayor salario
			posM = i; //Guardamos la posicion del empleado con mayor salario
		}
		//Calculando el menor salario
		if(empleados[i].salario < menor) { //Calculamos uno por uno el salario de todos los empleados para saber cual es el menor
			menor = empleados[i].salario; //Guardamos el menor salario
			posm = i; //Guardamos la posicion del empleado con menor salario
		}
		cout << "\n";
	}

	cout << "El empleado con mayor salario es:" << endl;
	cout << "Nombre: " << empleados[posM].nombre << endl;
	cout << "Salario: $" << mayor << endl;

	cout << "\nEl empleado con menor salario es: " << endl;
	cout << "Nombre: " << empleados[posm].nombre << endl;
	cout << "Salario: $" << menor << endl;

	getch();
	return 0;
}
