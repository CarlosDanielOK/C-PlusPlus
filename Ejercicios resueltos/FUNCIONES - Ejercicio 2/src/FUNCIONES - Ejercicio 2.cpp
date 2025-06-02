//============================================================================
// Name        : FUNCIONES.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Ejercicio 2: Escriba una función llamada al_cuadrado() que calcule el cuadrado del valor que se le transmite y despliegue el resultado.
La función deberá ser capaz de elevar al cuadrado números flotantes.*/

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

//Prototipos de función
void PedirDatos(); //Funcion para pedir datos al usuario
void al_cuadrado(float x); //Funcion para elevar al cuadrado el dato

float num; //Variable global: sirve para todas las funciones

int main() {
	PedirDatos(); //Llamo a la función, para que le pida los datos al usuario
	al_cuadrado(num); //Llamo a la función, y le mando el parementro correcto("num" corresponde a "x")

	getch();
	return 0;
}

//Definición de función
void PedirDatos(){
	cout << "Digite un número: "; cin >> num;
}

void al_cuadrado(float x) {
	float resultado = pow(x,2); //pow(x,2) significa x(num) elevado al cuadrado(2) y el resultado lo guardo en la variable local "resultado"

	cout << x << " elevado al cuadrado(2) es " << resultado << endl;
}
