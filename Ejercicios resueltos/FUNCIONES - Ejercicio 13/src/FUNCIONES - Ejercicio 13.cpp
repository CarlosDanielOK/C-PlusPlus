//============================================================================
// Name        : FUNCIONES.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Ejercicio 13: Realiza una función que tome como parámetros un vector de números y su tamaño y cambie el signo de los elementos del vector.

#include <iostream>
#include <conio.h>
using namespace std;

//Prototipo de función
void PedirDatos();
void CambiarSigno(int vector[], int tamanio);
void Mostrar(int vector[], int tamanio);

int vec[100], tam; //Variables globales, porque las voy a utilizar en todas las funciones

int main() {
	PedirDatos();
	CambiarSigno(vec, tam);
	Mostrar(vec, tam);

	getch();
	return 0;
}

//Definición de función
void PedirDatos() {
	cout << "Digite la cantidad de elementos que desea que tenga el array: "; cin >> tam;
	cout << "\n";

	for(int i=0; i<tam; i++) {
		cout << i+1 << ". Digite un número: "; cin >> vec[i];
	}
}

void CambiarSigno(int vector[], int tamanio) {
	for(int i=0; i<tamanio; i++) {
		vector[i] = vector[i] * (-1);
		//Multiplico por -1 porque si el numero es positivo(+): +*- = -; y si es negativo(-): -*- = +; en ambos casos se cambiaria el signo
	}
}

void Mostrar(int vector[], int tamanio) {
	cout << "\nMostrando los elementos del vector cambiados de signo:\n" << endl;

	for(int i=0; i<tamanio; i++) {
		cout << i+1 << ". " << vector[i] << endl;
	}
}
