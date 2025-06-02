//============================================================================
// Name        : B�SQUEDAS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Búsqueda SECUENCIAL: Se utiliza cuando el vector no está ordenado o no puede ser ordenado previamente. Consiste en buscar el elemento comparándolo
secuencialmente (de ahí su nombre) con cada elemento del vector hasta encontrarlo, o hasta que se llegue al final. La existencia se puede asegurar
cuando el elemento es localizado, pero no podemos asegurar la no existencia hasta no haber analizado todos los elementos del vector.*/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int numeros[] = {3,4,2,1,5}; //Defino un array de numeros desordenados
	//char vocales[] = {'o','a','i','e','u'} //Defino un array de caracteres desordenados. Búsqueda secuencialTambien funciona para buscar caracteres
	int i, dato=4; //En "dato" voy a almacenar el dato o elemento que quiero buscar. "i" es el iterador
	char band = 'F'; //Declaro una variable bandera, y la inicio en falso. Me va a servir para saber si el numero(dato) existe o no en el array
	//dato = 1; //4 va a ser el numero que quiero buscar en el array

	//Busqueda SECUENCIAL
	i = 0; //Inicializo el iterador
	while((band == 'F') && (i<5)) {
		if(numeros[i] == dato) { //Si esto es verdad, bandera cambia a verdadero
			band = 'V';
		}
		i++;
	}

	if(band == 'F') { //Si bandera es igual a falso, significa que no encontro el numero en el array
		cout << "El número que busca no existe en el arreglo(array)." << endl;
	}
	else if(band == 'V') { //Si bandera es igual a verdadero significa que encontro el numero en el array
		cout << "El número se encuentra en la posición " << i-1 << endl;
	} //El i-1 lo pongo porque en el bucle while cuando bandera cambia a verdadero, al salir le suma a i un 1, por lo que la posicion del numero
	//en que se encontro seria la anterior.

	getch();
	return 0;
}

