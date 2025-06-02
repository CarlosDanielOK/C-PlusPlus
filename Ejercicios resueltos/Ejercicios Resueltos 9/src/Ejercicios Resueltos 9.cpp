//============================================================================
// Name        : Ejercicios.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Diseñar un algoritmo que muestre los 20 primeros números de la serie Fibonacci: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...*/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int x=0, y=1, z; //x = numero anterior | y = numero siguiente | z = resultado de la suma del numero anterior y el siguiente

	cout << x << " " << y << " "; //Mostramos el 0 y el 1

	for(int i=0; i<18; i++) { //18 porque el 0 y el 1 que no estan en el for ocupan 2 lugares y asi con los 18 numeros mas suman 20 lugares
		z = x + y; //o(x), 1(y), 1(z), 2, 3, 5...
		cout << z << " "; //Mostramos los numeros(la suma del número anterior y el siguiente); y un espacio entre ellos para que no esten juntos
		x = y; //1(x) | 1(x) | 2(x)
		y = z; //1(y) | 2(y) | 3(y)
	}

	getch();
	return 0;
}
