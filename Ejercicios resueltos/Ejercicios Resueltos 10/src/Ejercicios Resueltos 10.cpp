//============================================================================
// Name        : Ejercicios.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Diseñar un algoritmo que lea un número entero y determine el número de cifras que tiene.*/

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main() {
	int num, cifras;

	cout << "Digite un número: "; cin >> num;

	for(cifras=1; num>=10; cifras++) { //Si num es >= a 10; significa que tiene 2 cifras, por eso aumentamos cifras en 1
		num = num/10; //Al dividir un numero entre 10 le quitamos una cifra, de esta forma sabremos cuantas cifras tiene num
	}

	cout << "\nEl número tiene " << cifras << " cifras." << endl;

	getch();
	return 0;
}
