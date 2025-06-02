//============================================================================
// Name        : ORDENAMIENTOS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Método BURBUJA: Es un sencillo algoritmo de ordenamiento. Funciona revisando cada elemento de la lista que va a ser ordenada con el siguiente,
intercambiándolos de posición si están en el orden equivocado. Es necesario revisar varias veces toda la lista hasta que no se necesiten más
intercambios, lo cual significa que la lista está ordenada.
CONDICIONAL: Si numero_actual > numero_siguiente hacemos un intercambio entre esos dos digitos. */

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int numeros[] = {5,3,2,1,4}; //Defino un arreglo(array) de 5 elementos
	int aux; //Es un auxiliar para guardar el numero actual y ayudar a hacer los intecambios

	//Algoritmo del método burbuja
	for(int i=0; i<5; i++) { //Para que comprube varias veces
		for(int j=0; j<5-1; j++) { //j=5-1 porque en un momento seria 4<5 y compararia "numeros[4]" > "numeros[5]" y la posicion numeros[5] no existe
			if(numeros[j] > numeros[j+1]) { //numeros[j] (numero actual) > numeros[j+1] (numero siguiente)
				aux = numeros[j]; //Le asigno a "aux" el numero actual
				numeros[j] = numeros[j+1]; //Le asigno a la posicion del numero acutual el numero siguiente.
				numeros[j+1] = aux; //Le asigno a la posicion del numero siguiente el numero actual que previamente lo guarde en "aux"
			}
		}
	}

	cout << "Orden ascendente:";
	for(int i=0; i<5; i++) {
		cout << numeros[i] << " ";
	}

	cout << "\nOrden descendente:";
	for(int i=4; i>=0; i--) {
		cout << numeros[i] << " ";
	}

	getch();
	return 0;
}
/*1er ciclo:
 * for(int i=0; i<5; i++) {
		for(int j=0; j<4; j++) {
			if(numeros[0] > numeros[1]) { //¿5>3? Si. Entonces hacemos un intercambio
			    aux = 5;
				numeros[0] = 3;
				numeros[1] = 5;
			}
		} // quedaria asi: numeros[]={3,5,2,1,4}
	}
 * 2do ciclo:
 * for(int i=0; i<5; i++) {
		for(int j=1; j<4; j++) {
			if(numeros[1] > numeros[2]) { //¿5>2? Si. Entonces hacemos un intercambio
			    aux = 5;
				numeros[1] = 2;
				numeros[2] = 5;
			}
		} // quedaria asi: numeros[]={3,2,5,1,4}
	}
 * 3er ciclo:
 * for(int i=0; i<5; i++) {
		for(int j=2; j<4; j++) {
			if(numeros[2] > numeros[3]) { //¿5>1? Si. Entonces hacemos un intercambio
			    aux = 5;
				numeros[2] = 1;
				numeros[3] = 5;
			}
		} // queda: numeros[]={3,2,1,5,4}
	}
	4to ciclo:
	for(int i=0; i<4; i++) {
		for(int j=3; j<4; j++) {
			if(numeros[3] > numeros[4]) { //¿5>4? Si. Entonces hacemos un intercambio
			    aux = 5;
				numeros[3] = 4;
				numeros[4] = 5;
			}
		} //queda: numeros[]={3,2,1,4,5}
	}
	5to ciclo:
	for(int i=0; i<4; i++) {
		for(int j=4; j<4; j++) { //j=4 ¿4<4? No. por lo tanto no entra el for
			if(numeros[j] > numeros[j+1]) {
			    aux = numeros[j];
				numeros[j] = numeros[j+1];
				numeros[j+1] = aux;
			}
		} //queda igual: numeros[]={3,2,1,4,5} | Ahora saldria del bucle for anidado. Y recien le suma a i un 1. y empeceria a comprobar de nuevo.
	}     //tal como hicimos en el 1er ciclo.
 */
