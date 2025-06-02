//============================================================================
// Name        : FUNCIONES.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Paso de parámetros de tipo vector

Parámetros de la función:

	void NombreDeLaFunción(tipo NombreDelArray[], int TamañoDelArray);

Llamada a la función:

	NombreDeLaFunción(NombreDelArray, TamañoDelArray);
*/
//Ejercicio de ejemplo: Cuadrados de los elementos del vector.

//Nota: Cuando pasamos como argumento o parámetro un vector, estamos pasando por referencia, lo que significa que podemos modificar el valor de la
//posición del vector.

#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

//Prototipo de función
void cuadrado(int vector[], int tamanio); //Con los corchetes le indicamos a la función que vamos a enviarle un vector(array) que es de tipo entero.
										  //Los corchetes tienen que estar vacios, y luego le indicamos el tamaño que sera de tipo entero
void mostrar(int vector[], int tamanio); //Función para mostrar los elementos elevados al cuadrado

int main() {
	const int tam = 5; //Declaramos el tamaño del array, debe ser de tipo constante(const) porque el tamaño no puede variar.
					   //const nos asegura que nunnca va a cambiar su valor.
	int vec[tam] = {1, 2, 3, 4, 5}; //Declaro un vector de números enteros con 5 elementos

	cuadrado(vec, tam); //Llamamos a la función y le mandamos el vector y su tamaño. Aca no hace falta poner los corchetes ni el tipo.
	mostrar(vec, tam); //Llamamos a la función

	getch();
	return 0;
}

//Definición de función
void cuadrado(int vector[], int tamanio) {
	for(int i=0; i<tamanio; i++) { //Vamos a elevar al cuadrado los elementos del vector
		vector[i] = pow(vector[i],2); //La función pow eleva al cuadrado, y guardamos el resultado en la misma posición del número del vector
	}
}

void mostrar(int vector[], int tamanio) {
	for(int i=0; i<tamanio; i++) { //Vamos a mostrar el resultado de elevar todos los elementos del vector al cuadrado
		cout << vector[i] << " ";
	}
}
