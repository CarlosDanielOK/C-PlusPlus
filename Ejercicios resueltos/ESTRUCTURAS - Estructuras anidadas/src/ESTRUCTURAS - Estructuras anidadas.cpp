//============================================================================
// Name        : ESTRUCTURAS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Estructuras anidadas: Es una estructura dentro de otra.

#include <iostream>
#include <conio.h>
using namespace std;

struct info_direccion {
	char direccion[20];
	char ciudad[20];
	char provincia[20];
};

struct empleado {
	char nombre[30];
	struct info_direccion dir_empleado; //Estamos creando una estructura anidada. "struct info_direccion" esta dentro de "struct empleado".
	//"dir_empleado" es una variable de tipo estructura, que contiene "info_direccion" que a su vez este tiene tres campos(direccion,ciudad,provincia)
	double salario;
}empleados[2]; //Declaro un arreglo(array) de estructuras: Es un arreglo en la cual en cada posición guardamos una estructura completa.
               //Esta es una manera genial de almacenar mas información sin tener que gastar es declarar mas variables.

int main() {
	//Vamos a pedirle al usuario datos de 2 empleados, y almacenarlos.

	for(int i=0; i<2; i++) { //i<2 porque solo son 2 empleados
		fflush(stdin); //Vaciar el buffer y permite digitar los datos. El buffer es un bloque de memoria que se llena muy rápido.
		//Cuando introducimos cadenas y numeros varias vaces, es muy importante limpiar el buffer.
		//De lo contrario la siguiente variable se llenara con caracteres basura, dejandolo en blanco, y pasara a la siguiente variable.
		cout << "Nombre del empleado: ";
		cin.getline(empleados[i].nombre,30,'\n'); //i va ir iterando. De esto va a depender donde guarde exactamente los datos de cada uno de ellos
		cout << "Dirección: ";
		cin.getline(empleados[i].dir_empleado.direccion,20,'\n');
		cout << "Ciudad: ";
		cin.getline(empleados[i].dir_empleado.ciudad,20,'\n');
		cout << "Provincia: ";
		cin.getline(empleados[i].dir_empleado.provincia,20,'\n');
		cout << "Salario: $";
		cin >> empleados[i].salario;
		cout << "\n";
	}

	//Imprimiendo los datos de los 2 empleados.

	for(int i=0; i<2; i++) {
		cout << "Nombre del empleado: " << empleados[i].nombre << endl;
		cout << "Dirección: " << empleados[i].dir_empleado.direccion << endl;
		cout << "Ciudad: " << empleados[i].dir_empleado.ciudad << endl;
		cout << "Provincia: " << empleados[i].dir_empleado.provincia << endl;
		cout << "Salario: $" << empleados[i].salario << endl;
		cout << "\n";
	}

	getch();
	return 0;
}
