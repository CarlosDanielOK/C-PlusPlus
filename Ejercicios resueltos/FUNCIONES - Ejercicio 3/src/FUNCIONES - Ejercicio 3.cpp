//============================================================================
// Name        : FUNCIONES.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Ejercicio 3: Escriba una función nombrada funpot() que eleve un número entero que se le transmita a una potencia en número entero positivo y
despliegue el resultado. El número entero positivo deberá ser el segundo valor transmitido a la función.*/

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

//Prototipos de función
void PedirDatos(); //Función para pedir los datos al usuario
void funpot(int x, int y); //Función para realizar la potencia

int base, exponente; //Variables globales

int main() {
	PedirDatos(); //Llamo a la función
	funpot(base, exponente); //Llamo a la función, y le mando los parametros. base corresponde a x; exponente corresponde a y

	getch();
	return 0;
}

//Definiciones de función
void PedirDatos() { //Pedimos los datos al usuario y los guardamos en las variables globales
	cout << "Digite la base: "; cin >> base;
	cout << "Digite el exponente: "; cin >> exponente;
}

void funpot(int x, int y) { //Vamos a realizar la opereción de potencia
	int resultado = pow(x,y); //x elevado a la y; y el resultado de la potencia lo guardamos en la variable local "resultado"
	/*long resultado=1; //long, por si el resultado es muy grande, long almacena números muy extensos

	for(int i=1; i<=y; i++) { //Esta es una forma de hacer la potencia
		resultado = resultado * x;
	}*/

	cout << "\nEl resultado de la potencia es: " << resultado << endl;
}
