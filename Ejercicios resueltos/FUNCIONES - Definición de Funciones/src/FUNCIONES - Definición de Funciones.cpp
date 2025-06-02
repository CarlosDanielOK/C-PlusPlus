//============================================================================
// Name        : FUNCIONES.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Una FUNCIÓN resaliza una tarea concreta y puede ser diseñada, implementada y depurada de manera independiente al resto del código.

 *DEFINICIÓN DE FUNCIONES:

La sintaxis básica para la definición de una función en C++ en la siguiente:

tipo nombre(tipo var1, tipo var2,...,tipo varn) { //Lo que esta entre parentesis se llaman paramentros o argumentos.
	conjunto de instrucciones;
}

*EJEMPLOS DE FUNCIONES:

int numMax(int x, int y) /Si la funcion es de tipo int(entera) significa que al final debe haber un return y un número entero(retorna un valor entero)
double intercambio(double x, double y) /Si la funcion es de tipo double significa que al final va a retornar un valor de tipo double.
void desplegar(float x, float y) /Si la función es de tipo void no retorna nada.

*Como una cuestión de buena forma de progrmación, el siguiente ordenamiento de instrucciones debera formar la estructura básica alrededpr de la
cual se construyan todos sus programas en C++.

directivas del preprocesador //Dentro de esta van lo que son las librerias y las macros.

prototipos de función //Es exactamente la forma en la que nosotros le decimos al programa que dicha función existe, y va a retornar tal valor
						y va a tener tales parametros.

int main() {
	conjunto de instrucciones;
	return valor;
}

definiciones de función
*/

//Ejercicio de ejemplo: Encontrar el mayor entre 2 números.

#include <iostream>
#include <conio.h>
using namespace std;

//Prototipo de función
int EncontrarMax(int x, int y); //La función es de tipo int(entera) porque quiero que me retorne un valor entero, osea el número mayor entre 2 numeros
								//y como necesito comparar 2 numeros, necesito 2 parametros(int x e int y)
int main() {
	int n1, n2; //Dos variables para almacenar los números que vaya a digitar el usuario
	//int mayor; //Para almacenar el valor entero que va retornar la funcion EncontrarMax.

	cout << "Digite un número: "; cin >> n1;
	cout << "Digite un número: "; cin >> n2;

	//EncontrarMax(n1, n2), //Estoy llamando a la funcion EncontrarMax(int x, int y). No importa si tienen el mismo nombre o no, lo que importa es la
						  //ubicación de dichos números, el n1 corresponde a int x; y el n2 corresponde al int y. Tambien no hace falta poner int n1
						  //y int n2 cuando estamos llamando a la función, simplemente ponemos los números en el orden correcto de los parametros.

	//mayor = EncontrarMax(n1, n2); //Como EncontrarMax(n1, n2) es un valor, una opción de imprimir el retorno de una función seria guardarlo en otra
	//cout << "El número mayor es: " << mayor << endl; //variable y luego imprimirlo.

	cout << "El número mayor es: " << EncontrarMax(n1, n2) << endl; //Esta es otra opción de imprimir el retorno de una funcion
																	//como EncontrarMax(n1,n2) es un valor lo podemos imprimir directamente.
	getch();
	return 0;
}

//Definición de función
int EncontrarMax(int x, int y) { //Lo que voy a hacer dentro de esta función es ver cual de los 2 números es mayor
	int NumMax; //Creo una nueva variable para almacenar el número mayor

	if(x > y) { //Si x es el número mayor, le asigno el valor de x a la variable NumMax
		NumMax = x;
	} else { //Si y es el número mayor, le asigno el valor de y a la variable NumMax
		NumMax = y;
	}
	return NumMax; //Como la funcion es de tipo int, significa que debo devolver o retornar un valor entero, y ese valor entero va a ser NumMax
				   //Y este valor entero lo vamos a retornar a la funcion principal (int main)
}
