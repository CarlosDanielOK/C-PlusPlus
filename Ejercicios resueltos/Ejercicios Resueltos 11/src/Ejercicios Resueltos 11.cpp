//============================================================================
// Name        : Ejercicios.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Diseñar un algoritmo que sume todos aquellos números leídos mientras no sean negativos. Si entra un número negativo acaba la operación.*/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int num, suma=0;

	do {
		cout << "Digite un número: "; cin >> num;
		if(num >= 0) { //Si el número es positivo se suma
			suma += num; //suma = suma + num
		}
	} while(num >= 0); //Si el numero es positivo vuelve a pedir otro número

	cout << "\nEl resultado de la suma de los números positivos es: " << suma << endl;

	getch();
	return 0;
}
