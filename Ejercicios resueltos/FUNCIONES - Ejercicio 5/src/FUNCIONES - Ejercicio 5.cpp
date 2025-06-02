//============================================================================
// Name        : FUNCIONES.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Ejercicio 5: Escriba una plantilla de función llamada despliegue() que despliegue el valor del argumento único
que se le transmite cuando es invocada la función.*/

//Nuestra función sera de tipo void porque el ejercicio dice que "despliegue" el valor y no que "retorne" el valor.

#include <iostream>
#include <conio.h>
using namespace std;

//Prototipo de función
template <class TIPODEDATO> //Plantilla de función(prefijo de plantilla): nos sirven para crear un tipo de dato general
void despliegue(TIPODEDATO dato); //Función de tipo void(no retorna nada) y TIPODEDATO engloba todos los tipos de datos(int,double,float...)

int main() {
	//Vamos a crear 4 tipos de datos y vamos a llamar a la función 4 veces para que me despliegue los 4 tipos de datos diferentes
	int dato1 = 10;
	float dato2 = 20.52;
	double dato3 = 100.7890;
	char* dato4 = "Hola Mundo"; //El * al lado del char es para no poner esto: char[] = "Hola" y ademas no definir la libreria <string.h>

	//Llamo a la función 4 veces porque le voy a mandar 4 tipos de datos diferentes y asi los imprima en pantalla
	despliegue(dato1);
	despliegue(dato2);
	despliegue(dato3);
	despliegue(dato4);

	getch();
	return 0;
}

//Definición de función
template <class TIPODEDATO>
void despliegue(TIPODEDATO dato) {
	cout << "El dato es: " << dato << endl;
}
