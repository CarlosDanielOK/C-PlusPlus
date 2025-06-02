//============================================================================
// Name        : Ejercicios.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Definir un algoritmo de un programa que lea 5 números enteros(positivos y negativos) y muestre el mayor y el menor de los números leidos.

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int num, mayor, menor;

	for(int i=0; i<5; i++) { //Vamos a pedir al usuario los 5 numeros enteros
		cout << "Digite un número entero(positivo o negativo): "; cin >> num;

		if(i == 0) { //Esto solo funciona a la primera, porque necesitamos un numero de referencia para comparar el numero mayor y menor
			menor = num;
			mayor = num;
		}
		if(num < menor) { //Si el numeros digitado es menor a "menor" se guardara en "menor"
			menor = num;
		}
		if(num > mayor) { //Si el numeros digitado es mayor a "mayor" se guardara en "mayor"
			mayor = num;
		}
	}

	cout << "\nEl número menor es: " << menor << endl;
	cout << "El número mayor es: "  << mayor << endl;

	getch();
	return 0;
}
