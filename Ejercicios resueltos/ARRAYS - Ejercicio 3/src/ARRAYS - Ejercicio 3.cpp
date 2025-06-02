//============================================================================
// Name        : ARRAYS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Escriba un programa que lea de la entrada estándar un vector de números y
muestre en la salida estándar los números del vector con sus índices asociados.*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int numeros[100], n;//Declaro el arrays y n sera el numero de elementos que tendra el vector o array

	cout << "Digite la cantidad de elementos que tendra el vector o arrays: ";
	cin >> n; //El numero que digito el usuario se guardo en "n", que sera la cantidad de elementos que tendra el vector
	cout << "\n";

	for (int i=0; i<n; i++) {
		cout << "Digite un número: "; cin >> numeros[i]; //Creo un bucle for para guardar los numeros que digite. Ejemplo: Si el primer número que digita es 1 se guardara en numeros[0] (porque i empieza su conteo desde 0)
	}

	cout << "\n";

	for (int i=0; i<n; i++) { //Ahora voy a mostrar los numeros del vector con sus indices asociados.
		cout << "Array [" << i << "]" << " --> " << numeros[i] << endl;
	}

	getch();
	return 0;
}
