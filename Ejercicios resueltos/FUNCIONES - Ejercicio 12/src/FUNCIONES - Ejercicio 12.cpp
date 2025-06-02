//============================================================================
// Name        : FUNCIONES.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Ejercicio 12: Realice una función que tome como parámetros un vector y su tamaño y diga si el vector está ordenado crecientemente.
Sugerencia: compruebe que para todas las posiciones del vector, salvo para la 0, el elemento del vector es mayor o igual que el
elemento que le precede en el vector.
*/

#include <iostream>
#include <conio.h>
using namespace std;

//Prototipo de función
void PedirDatos();
void verificar(int vector[], int tamanio);

int vec[100], tam; //Variables globales
int asc=0;

int main() {
	PedirDatos(); //Llamo a la función
	verificar(vec, tam); //Llamo a la función

	getch();
	return 0;
}

void PedirDatos() {
	cout << "Digite la cantidad de elementos del array: "; cin >> tam;
	cout << "\n";

	for(int i=0; i<tam; i++) {
		cout << i+1 << ". Digite un número: "; cin >> vec[i];
	}
}

void verificar(int vector[], int tamanio) {
	for(int i=0; i<tamanio; i++) {
		if(vector[i] <= vector[i+1]) { //Verificamos si la posición 0 es menor a la posición 1, si la 1 es menor a la 2... asi sucesivamente.
			asc++; //De ser asi, aumentamos el contador en 1
		}
	}
	if(asc == tamanio-1) { //Si el contador es igual a el tamaño del vector menos 1(porque empieza en 0) entonces significa que el vector esta ordenado crecientemente
		cout << "\nEl vector esta ordenado crecientemente." << endl;
	} else {
		cout << "\nEl vector no esta ordenado crecientemente." << endl;
	}
}
