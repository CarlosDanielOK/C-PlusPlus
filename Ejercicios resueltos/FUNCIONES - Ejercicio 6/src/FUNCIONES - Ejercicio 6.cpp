//============================================================================
// Name        : FUNCIONES.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Ejercicio 6: Escriba una plantilla de función llamada maximo() que devuelva el valor máximo de tres argumentos
que se transmitan a la función cuando sea llamada. Suponga que los tres argumentos serán del mismo tipo de datos.*/

//Nuestra función sera de tipo TIPODEDATO porque el ejercicio dice que la funcion debe retornar el valor maximo de tres argumentos y ademas deben
//ser del mismo tipo de datos los argumentos

#include <iostream>
#include <conio.h>
using namespace std;

//Prototipo de función
template <class TIPODEDATO> //Prefijo de plantilla
TIPODEDATO maximo(TIPODEDATO dato1, TIPODEDATO dato2, TIPODEDATO dato3); //Función para calcular el valor maximo de tres argumentos. TIPODEDATO engloba todos los tipos de datos

int main() {
	char dato1 = 'a', dato2 = 'd', dato3 = 'c'; //Declaro variables del mismo tipo de datos

	//Como la funcion "maximo(dato1, dato2, dato3)" retorna un valor, lo puedo imprimir directamente
	cout << "El valor máximo de tres argumentos es: " << maximo(dato1, dato2, dato3) << endl; //Imprimiria "d" ya que d es mayor que a y c

	getch();
	return 0;
}

//Definición de función
template <class TIPODEDATO> //Plantilla de función
TIPODEDATO maximo(TIPODEDATO dato1, TIPODEDATO dato2, TIPODEDATO dato3) {
	TIPODEDATO mayor; //Variable para guardar el valor máximo de los tres argumentos

	if((dato1 > dato2) && (dato1 > dato3)) {
		mayor = dato1;
	}
	else if((dato2 > dato1) && (dato2 > dato3)) {
		mayor = dato2;
	}
	else if((dato3 > dato1) && (dato3 > dato2)) {
		mayor = dato3;
	}

	return mayor; //Retornamos "mayor" que almacena el valor maximo, y lo retornaremos a la función principal
}
