//============================================================================
// Name        : FUNCIONES.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Ejercicio 11: Realice una función que tome como parámetros un vector de números enteros y devuelva la suma de sus elementos.

#include <iostream>
#include <conio.h>
using namespace std;

//Prototipo de función
int sumar(int vector[], int tamanio); //Función de tipo entero para que devuelva la suma de los elementos del vector o array
void PedirDatos(); //Función para pedir los elementos del array, sin nungún parámetro porque solo vamos a pedir datos al usuario

int vec[100], tam; //Declaramos variables globales, porque vamos a pedir los datos en otra función

int main() {
	PedirDatos(); //Llamamos a la función, que pedira los datos al usuario
	sumar(vec, tam); //Llamamos a la función que sumara los elementos del array

	cout << "\nLa suma de los elementos del array es: " << sumar(vec, tam) << endl; //Como la función suma retorna un valor, lo puedo imprimir directamente

	getch();
	return 0;
}

//Definición de función
void PedirDatos() {
	cout << "Digite la cantidad de elementos del array: "; cin >> tam; //En tam se guardara la cantidad de elementos del array
	cout << "\n"; //Un espacio para separar un poco y se vea ordenado

	for(int i=0; i<tam; i++) {
		cout << i+1 << ". Digite un número: "; cin >> vec[i]; //Creo un bucle for, para guardar cada número en cada posición del array
	}
}

int sumar(int vector[], int tamanio) {
	int suma=0; //Variable local para guardar la suma de los elementos, solo la voy a utilizar en esta función por eso es local

	for(int i=0; i<tamanio; i++) {
		suma += vector[i]; //Sumamos todos los elementos del array
	}
	return suma; //Retorno la suma de los elementos que esta guardada en esta variable local "suma"
}
