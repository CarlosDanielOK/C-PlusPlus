//============================================================================
// Name        : B�SQUEDAS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Búsqueda BINARIA: Se utiliza cuando el vector en el que queremos determinar la existencia de un elemento está previamente ordenado(ascendente).
Este algoritmo reduce el tiempo de búsqueda considerablemente, ya que disminuye exponencialmente el número de iteraciones necesarias.*/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int numeros[] = {1,2,3,4,5}; //Definimos un arreglo ordenado.
	int inf, sup, mitad, dato, i; //inf:limite inferior| sup:limite superior| mitad:para guardar la posicion| dato:el elemnto a buscar| i:iterador
	char band = 'F'; //Bandera lo iniciamos en falso. Nos va a ayudar a saber si encontramos el elemento

	dato = 4; //4 va a ser el numero que vamos a buscar en el arreglo
	i = 0; //Inicializamos el iterador desde 0

	//Algoritmo de la búsqueda binaria
	inf = 0;
	sup = 5; //Limite superior a ser igual a la cantidad de elementos que tiene el arreglo

	while((inf <= sup) && (i<5)) { //i<5 porque solo tenemos 5 elementos en el arreglo
		mitad = (inf+sup)/2; //En mitad vamos a guardar la posicion del numero que se encuentra en medio.

		if(numeros[mitad] == dato) { //Si el numero del medio es igual a dato, significa que encontro el numero
			band = 'V'; //y bandera cambiaria a verdadero
		    break; //Como el while es un ciclo, si ya encontre el numero, no hay necesidad de seguir buscando otros elementos, seria perdida de tiempo
		}
		if(numeros[mitad] > dato) { //Si es mayor significa que voy a buscar de la mitad del lado izquierdo
			sup = mitad;
			mitad = (inf+sup)/2; //Para hacer de nuevo el procediemto con el nuevo limite superior
		}
		if(numeros[mitad] < dato) { //Si es menor significa que tengo que buscar de la mitad del lado derecho
			inf = mitad;
			mitad = (inf+sup)/2; //Para hacer de nuevo el procedimiento con el nuevo limite inferior
		}
		i++;
	}

	if(band == 'V') { //Si encontro el numero
		cout << "El número ha sido encontrado en la posición " << mitad << endl; //Mitad guarda la posición del numero encontrado
	}
	else {
		cout << "El número no ha sido encontrado." << endl;
	}

	getch();
	return 0;
}
