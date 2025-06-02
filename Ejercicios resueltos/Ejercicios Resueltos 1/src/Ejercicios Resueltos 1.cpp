//============================================================================
// Name        : Ejercicios.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Define un algoritmo que lea 5 números, y despues de leer el último muestre cuantos eran multiplos de 2 y cuantos de 3.

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int num; //Una sola variable para guardar los 5 numeros, la vamos a reutilizar con un bucle for
	int multiplos_de_2=0, multiplos_de_3=0; //Contadores para llevar la cuenta de cuantos son multiplos de 2 y de 3

	for(int i=0; i<5; i++) {
		cout << "Digite un número: "; cin >> num;
		if(num%2 == 0) { //Si el resto de dividir el numero entre 2 es 0 significa que es multiplo de 2
			multiplos_de_2++; //Aumentamos el contador en 1, si encontramos un multiplo de 2
		}
		if(num%3 == 0) { //Si el resto de dividir el numero entre 3 es 0 significa que es multiplo de 3
			multiplos_de_3++; //Si encontramos un multiplo de 3, aumentamos el contador en 1
		}
	}

	cout << "\nEncontre " << multiplos_de_2 << " números que son multiplos de 2." << endl;
	cout << "Encontre " << multiplos_de_3 << " números que son multiplos de 3." << endl;

	getch();
	return 0;
}
