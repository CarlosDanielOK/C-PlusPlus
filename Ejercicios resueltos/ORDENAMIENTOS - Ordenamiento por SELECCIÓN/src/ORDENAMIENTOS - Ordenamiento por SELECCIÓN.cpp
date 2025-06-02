//============================================================================
// Name        : ORDENAMIENTOS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Ordenamiento por SELECCIÓN: Es un algoritmo de ordenamiento que requiere O(n^2) operaciones para ordenar una lista de n números.
Su funcionamiento es el siguiente:

1.Buscar el mínimo elemento de la lista.
2.Intercambiar con el primer elemento.
3.Buscar el mínimo del resto de la lista.
4.Intercambiar con el segundo.
5.Y así sucesivamente. */

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int numeros[] = {3,2,1,5,4}; //Arreglo o array de 5 numeros desordenados
	int aux, min; //"min" es para almacenar el numero minimo

	//Algoritmo del ordenamiento por selección
	for(int i=0;i<5;i++) {
		min = i;
		for(int j=i+1;j<5;j++) {
			if(numeros[j] < numeros[min]) {
				min = j;
			}
		}
		aux = numeros[i];
		numeros[i] = numeros[min];
		numeros[min] = aux;
	}

	cout << "Orden ascendente: ";
	for(int i=0;i<5;i++) {
		cout << numeros[i] << " ";
	}

	cout << "\nOrden descendente: ";
	for(int i=4;i>=0;i--) {
		cout << numeros[i] << " ";
	}

	getch();
	return 0;
}
