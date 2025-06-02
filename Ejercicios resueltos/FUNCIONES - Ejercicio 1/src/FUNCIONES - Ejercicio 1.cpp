//============================================================================
// Name        : FUNCIONES.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Escriba una función llamada mult() que acepte dos números en punto flotante como parámetros,
multiplique estos dos números y despliegue el resultado.*/
//En este problema utilizo el retorno del resultado.

#include <iostream>
#include <conio.h>
using namespace std;

//Prototipo de función
float mult(float x, float y); //La función es de tipo float porque la funcion va a retornar el resultado de la multiplicación en punto flotante

int main() {
	float n1, n2; //Variables para almacenar los números en punto flotante que digite el usuario

	cout << "Digite un número: "; cin >> n1;
	cout << "Digite un número: "; cin >> n2;

	cout << "El resultado de la multiplicación es: " << mult(n1, n2) << endl; /*Llamamos a la función mult y le enviamos los parametros(numeros) y
	entonces se ejecuta el codigo de la función y al final nos retorna el resultado y nosotros lo imprimimos directamente, ya que mult(n1,n2) es un valor.*/

	getch();
	return 0;
}

//Definición de función
float mult(float x, float y) { //Dentro de esta función vamos a multiplicar los números
	float resultado; //Variable para almacenar el resultado de la multiplicación

	resultado = x * y; //Hacemos la multiplicación y el resultado lo almacenar en la variable resultado

	return resultado; //Retornamos el resultado a la funcion principal(int main)
}
