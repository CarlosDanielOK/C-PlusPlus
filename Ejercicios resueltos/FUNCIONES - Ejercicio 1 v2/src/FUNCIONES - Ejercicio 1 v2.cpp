//============================================================================
// Name        : FUNCIONES.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Escriba una función llamada mult() que acepte dos números en punto flotante como parámetros,
multiplique estos dos números y despliegue el resultado.*/
//En este problema despliego el resultado directamente.

#include <iostream>
#include <conio.h>
using namespace std;

//Prototipos de función
void PedirDatos(); //Esta funcion no tiene parametros porque no voy a utilizar nada, ningun valor, solo voy a pedirle al usuario unos datos
void mult(float x, float y); //Esta función me va servir para realizar la multiplicación de los números y desplegar el resultado

float num1, num2; //Variables GLOBALES: Funcionan para todas las funciones

int main() {
	PedirDatos(); //Llamo a la función, que lo que hara es pedirle al usuario los datos
	mult(num1, num2); //Llamo a la función, y le mando los parametros en el orden correcto

	getch();
	return 0;
}

//Definición de función
void PedirDatos() {
	/*Si definiera variables dentro de esta función serian variables LOCALES: solo funcionan y existen dentro de esta función. Y si las declarara y
	luego mande a multiplicar los números, no va a encontrar dichas variables, como son locales solo funcionan dentro de esta función en particular.
	Y si yo quiero pasar estos datos o variables a otra función me va saltar un error.*/

	cout << "Digite un número: "; cin >> num1;
	cout << "Digite un número: "; cin >> num2;
}

void mult(float x, float y) {
	float resultado; //Variable local. En este caso nos sirve porque la voy a utilizar ahora mismo, para guardar e imprimir el resultado de la multiplicación

	resultado = x * y; //Realizo la multiplicación y guardo el resultado en la variable local 'resultado'

	cout << "El resultado de la multiplicación es: " << resultado << endl; //Imprimo el resultado
}
