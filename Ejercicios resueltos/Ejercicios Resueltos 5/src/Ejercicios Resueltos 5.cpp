//============================================================================
// Name        : Ejercicios.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Diseñar un algoritmo que diga si un número es perfecto.
Un número perfecto es un número natural que es igual a la suma de sus divisores propios positivos.
  Los divisores propios de 28 son 1, 2, 4, 7 y 14. Cuando se toman en cuenta enteros negativos, un divisor propio
es aquel cuyo valor absoluto es menor al número dado. En este caso, los divisores propios serían -14, -7, -4, -2, -1, 1, 2, 4, 7, 14.

  6 es un número perfecto porque sus divisores propios positivos son 1, 2 y 3; y 6 =  1 + 2 + 3.

  Los siguientes números perfectos son: 28, 496 y 8128.

  28 = 1 + 2 + 4 + 6 + 7 + 14.
  496 = 1 + 2 + 4 + 8 + 16 + 31 + 62 + 124 + 248.
  8128 = 1 + 2 + 4 + 8 + 16 + 32 + 64 + 127 + 254 + 508 + 1016 + 2032 + 4064.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int num, suma_de_divisores=0;

	cout << "Digite un número: "; cin >> num;

	for(int i=1; i<num; i++) { //De esta forma vamos a encontrar los divisores propios positivos del numero que haya digitado el usuario
		if(num%i == 0) { //Si el resto de la division entre "num" e "i" es igual a 0. significa que "i" es un divisor de "num"
			suma_de_divisores += i; //suma_de_divisores = suma_de_divisores + i | Sumamos los divisores
		}
	}

	if(num == suma_de_divisores) {
		cout << "\n" << num << " es un número perfecto; porque la suma de sus divisores propios positivos es " << suma_de_divisores << endl;
	}
	else {
		cout << "\n" << num << " no es un número perfecto." << endl;
	}

	getch();
	return 0;
}
