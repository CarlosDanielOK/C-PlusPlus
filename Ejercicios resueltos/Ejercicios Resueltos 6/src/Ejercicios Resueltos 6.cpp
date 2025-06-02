//============================================================================
// Name        : Ejercicios.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
Diseñar un algoritmo que diga si dos números son amigos.
Dos números son amigos si la suma de sus divisores del primer número, excluido él, es igual al segundo número y viceversa.

Un ejemplo es el par de números naturales (220, 284); ya que:

Los divisores propios positivos de 220 son: 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 y 110; que sumados el resultado da 284.
Los divisores propios positivos de 284 son: 1, 2, 4, 71 y 142; que sumados el resultado da 220.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int num1, num2, divisores1=0, divisores2=0;

	cout << "Digite el primer número: "; cin >> num1;
	cout << "Digite el segundo número: "; cin >> num2;

	//Primero vamos a encontrar y sumar los divisores propios positivos de num1
	for(int i=1; i<=num1/2; i++) { //"num1/2" porque ningun número se puede dividir por un número mayor que su mitad
		if(num1%i == 0) { //Si el resto de la division entre "num1" e "i" es igual a 0. significa que "i" es un divisor de "num1"
			divisores1 += i; //divisores1 = divisores1 + i | Sumamos los divisores de "num1"
		}
	}

	//Ahora vamos a encontrar y sumar los divisores propios positivos de num2
	for(int i=1; i<=num2/2; i++) { //"num2/2" porque ningun número se puede dividir por un número mayor que su mitad
		if(num2%i == 0) { //Si el resto de la division entre "num2" e "i" es igual a 0. significa que "i" es un divisor de "num2"
			divisores2 += i; //divisores2 = divisores2 + i | Sumamos los divisores de "num2"
		}
	}

	//Ahora vamos a saber si los números son amigos
	if(divisores1 == num2 && divisores2 == num1) {
		cout << "\n" << num1 << " y " << num2 << " son números amigos; porque la suma de sus divisores propios positivos son iguales." << endl;
	} else {
		cout << "\n" << num1 << " y " << num2 << " no son números amigos; porque la suma de sus divisores propios positivos no son iguales." << endl;
	}

	getch();
	return 0;
}
