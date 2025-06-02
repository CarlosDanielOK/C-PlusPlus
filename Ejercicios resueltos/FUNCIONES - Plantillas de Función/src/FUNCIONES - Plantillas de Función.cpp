//============================================================================
// Name        : FUNCIONES.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Plantillas de Función: Una plantilla de función se utiliza para englobar un tipo de dato general para poder utilizar con una función determinada
y ahorrar muchas lineas de código.

Ejercicio de ejemplo: Sacar el valor absoluto de un número.

El ejercicio no nos dice si el número es de tipo int, float o double. Y como mi función debe tener un tipo de dato, int, float o double, en vez de
hacer 3 o mas funciones para cada tipo de dato, vamos a usar las plantillas de función que nos sirven para hacer un tipo de dato general; asi nosotros
podemos poner un tipo de dato cualquiera, sea int, double o float; para poder asi poder hacer una función mucho mas rápida.
*/

#include <iostream>
#include <conio.h>
using namespace std;

//Prototipo de función
template <class TIPOD> //Plantilla de función
void MostrarAbs(TIPOD numero); //Funcion de tipo void; y TIPOD engloba a diferentes tipos de datos(int, double, float,...)

int main() {
	int num1 = -5;
	float num2 = -10.57;
	double num3 = -105.5678;

	//Ahora voy llamar a la función de abajo: void MostrarAbs(TIPOD numero) pero 3 veces
	MostrarAbs(num1); //Llamo a la funcion y le mando el num1
	MostrarAbs(num2); //Llamo a la funcion y le mando el num2
	MostrarAbs(num3); //Llamo a la funcion y le mando el num3

	getch();
	return 0;
}

//Definición de función
template <class TIPOD> //Se conoce como prefijo de plantilla, y me sirve para definir un tipo de dato general, que puede englobar a cualquiera.
void MostrarAbs(TIPOD numero) { //La funcion de tipo void no retorna o devuelve nada.
	if(numero < 0) {
		numero = numero * -1; //Convierto el número negativo en positivo
	}

	cout << "El valor absoluto del número es: " << numero << endl;
}
