//============================================================================
// Name        : ARRAYS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Hacer un programa que lea 5 numeros en un arreglo, los copie a otro arreglo multiplicados por 2 y muestre el segundo arreglo.*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int numeros[5]; //Preparo el arreglo
	int numerosnuevos[5]; //Arreglo donde se guardaran sus nuevos valores

	for(int i=0; i<5; i++) { //Bucle para que guarde los 5 elementos que tendra el arreglo. Vamos a pedir los 5 numeros del primer arreglo
		cout << i+1 << ". Digite un número: ";
		cin >> numeros[i];
	}

	for(int i=0; i<5; i++) { //Ciclo o bucle para que los elementos se multipliquen x2 y se guarden en el nuevo vector
		numerosnuevos[i] = numeros[i] * 2;
	}

	cout << "\nMostrando los números multiplicados x2 y con su subindice en el arreglo:\n" << endl;

	for(int i=0; i<5; i++) { //Muestro el nuevo vector con sus elementos multiplicados x2
		cout << "Arreglo[" << i << "] ---> " << numerosnuevos[i] << endl;
	}

	getch();
	return 0;
}
