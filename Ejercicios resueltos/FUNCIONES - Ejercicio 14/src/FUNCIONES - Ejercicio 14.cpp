//============================================================================
// Name        : FUNCIONES.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Realiza una función que tome como parámetros un vector de enteros y su tamaño e imprima un vector con los elementos impares del vector recibido.

#include <iostream>
#include <conio.h>
using namespace std;

//Prototipo de función
void PedirDatos();
void VectorImpares(int vector[], int tam);
void Mostrar(int VectorImpar[], int tamanio);

int vector[100], tam;
int Impar[100], taman; //Para guardar los numeros impares del otro vector

int main() {
	PedirDatos();
	VectorImpares(vector, tam);
	Mostrar(Impar, taman);

	getch();
	return 0;
}

//Definición de función
void PedirDatos() {
	cout << "Digite la cantidad de elementos del array: "; cin >> tam;

	for(int i=0; i<tam; i++) {
		cout << i+1 << ". Digite un número: "; cin >> vector[i];
	}
}

void VectorImpares(int vector[], int tam) {
	for(int i=0; i<tam; i++) {
		if((vector[i] % 2) != 0) { //Si el resto de la división es distinta de cero significa que el número es impar
			Impar[i] = vector[i]; //Si el numero es impar lo guardamos en el otro vector
			taman = i+1; //Guardamos el tamaño del nuevo vector(VectorImpares)
		}
	}
}

void Mostrar(int VectorImpar, int tamanio) {
	cout << "\nMostrando el vector o array con los números impares:\n" << endl;

	for(int i=0; i<tamanio; i++) {
		cout << i+1 << ". " << VectorImpar[i] << endl;
	}
}
