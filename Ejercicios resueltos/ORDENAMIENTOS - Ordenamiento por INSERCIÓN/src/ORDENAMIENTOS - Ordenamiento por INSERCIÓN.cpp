//============================================================================
// Name        : ORDENAMIENTOS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Ordenamiento por INSERCIÓN: Es una manera muy natural de ordenar para un ser humano, y puede usarse fácilmente para ordenar un
mazo de cartas numeradas en forma arbitraria. Requiere O(n²) operaciones para ordenar una lista de n elementos.
CONDICIONAL: Si numero_izquierda > numero_actual entonces hacemos un cambio.*/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int numeros[] = {1,4,3,5,2};
	int pos, aux; //pos: variable para almacenar la posición | aux: variable auxiliar para hacer el cambio de los números

	//Algoritmo del ordenamiento por inserción
	for(int i=0; i<5; i++) {
		pos = i; //pos=2
		aux = numeros[i]; //aux=3
		while((pos>0) && (numeros[pos-1] > aux)) { //numeros[pos-1] > aux = numero_izquierda > numero_actual | Si es asi, hacemos el cambio | while((2>0)&&(4>3)) {
			numeros[pos] = numeros[pos-1]; //numeros[2](3)=4 | {1,3,4,5,2}
			pos--; //pos=2-1 | pos=1
		}
		numeros[pos] = aux; //numeros[1] = 3
	}

	cout << "Orden ascendente: ";
	for(int i=0; i<5; i++){
		cout << numeros[i] << " ";
	}

	cout << "\nOrden descendente: ";
	for(int i=4; i>=0; i--){
		cout << numeros[i] << " ";
	}

	getch();
	return 0;
}
