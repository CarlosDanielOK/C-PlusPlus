//============================================================================
// Name        : CICLOS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
Realice un programa que lea de la entrada estándar números hasta que se introduzca un cero.
En ese momento el programa debe terminar y mostrar en la salida estándar el número de valores mayores que cero leídos.
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

	int num, i;

	do {
		cout << "Digite un número: "; cin >> num;
		if (num>0) {
		i++;
		}

	} while (num != 0);

	cout << "\nNúmero de valores mayores que cero leídos: " << i << endl;

	cout << "\n\n";
	system("pause");
	return 0;
}
