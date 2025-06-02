//============================================================================
// Name        : CICLOS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/* Realice un programa que que solicite al usuario que piense un número entero entre el 1 y 100. El programa debe generar un número aleatorio
 * en ese mismo rango [1-100], e indicarle al usuario si el número que digito es menor o mayor al número aleatorio, asi hasta que lo adivine.
 * Y por último mostrarle el número de intentos que le llevo. */

#include <iostream>
#include <stdlib.h>
#include <time.h> //Libreria para crear el número aleatorio.
using namespace std;

int main()
{
	int numero, dato, contador=0;

	srand(time(NULL)); //Va a generar un número aleatorio.
	dato = 1 + rand() % (100); //variable = (Limite_inferior + rand() % (Limite_superior + 1 - Limite_inferior); En dato se guardara el número aleatorio en el rango [1-100]

	do {
		cout << "Digite un número: "; cin >> numero;

		if (numero>dato) {
			cout << "\nDigite un número menor." << endl;
		}
		else if (numero<dato) {
			cout << "\nDigite un número mayor." << endl;
		}
		contador++;
	} while (numero != dato);

	cout << "\nFELICIDADES! Adivinaste el número." << endl;
	cout << "Número de intentos: " << contador << endl;

	system("pause");
	return 0;
}
