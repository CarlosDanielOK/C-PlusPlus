//============================================================================
// Name        : ARRAYS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/* Realiza un programa que defina dos vectores de caracteres y después almacene el contenido de ambos vectores en un nuevo vector,
situando en primer lugar los elementos del primer vector seguido por los elementos del segundo vector. Muestre el contenido
del nuevo vector en la salida estándar.*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	char letras1[] = {'a','b','c','d','e'}; //Defino los dos vectores
	char letras2[] = {'f','g','h','i','j'};
	char letras3[10]; //Defino el nuevo vector donde se guardaran los dos anteriores

	for(int i=0; i<5; i++) { //Copiando los elementos del vector letras1 hacia letras3
		letras3[i] = letras1[i];
	}

	for(int i=5; i<10; i++) { //Copiando los elementos del vector letras2 hacia letras3
		letras3[i] = letras2[i-5]; //El "i-5" es para que copie todos los elementos de letras2. 1ro: letras3[5] = letras2[5-5] (letras2[0])
	}

	for(int i=0; i<10; i++) { //Muestro el nuevo vector (letras3)
		cout << "Letra[" << i << "] ---> " << letras3[i] << endl;
	}

	getch();
	return 0;
}
