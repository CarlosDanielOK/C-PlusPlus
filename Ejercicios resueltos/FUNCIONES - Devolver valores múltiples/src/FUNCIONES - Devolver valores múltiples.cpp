//============================================================================
// Name        : FUNCIONES.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Devolver valores múltiples

/*Ejemplo: int main {
		   return ... (return devuelve un solo valor)
		   }

Gracias al paso de parámetros por referencia vamos a poder devolver mas de un valor.*/

//Ejercicio de ejemplo: Sumar y multiplicar dos números.

#include <iostream>
#include <conio.h>
using namespace std;

//Prototipo de función
void calcular(int, int, int&, int&); //Voy a pasarle dos parámetros por valor(int, int) y dos parámetros por referencia(int&, int&)

int main() {
	int num1, num2, suma=0, producto=0;

	cout << "Digite dos números (separelos por un espacio): "; cin >> num1 >> num2;

	calcular(num1, num2, suma, producto); //Llamo a la función, y le paso num1, num2 por valor(osea que numero1 y numero2 van a recibir una copia
	//exacta del valor de num1 y num2); y a suma y producto los paso por referencia(osea que suma1 y producto1 reciben la dirección de memoria exacta
	//de las variables suma y producto para poder cambiar el valor que tienen guardado)

	cout << "El resultado de la suma es: " << suma << endl;
	cout << "El resultado de la multiplicación es: " << producto << endl;

	getch();
	return 0;
}

//Definición de función
void calcular(int numero1, int numero2, int& suma1, int& producto1) {
	suma1 = numero1 + numero2; //Hago la suma y guardo el resultado en suma1 que hace referencia a la variable suma
	producto1 = numero1 * numero2; //Hago la multiplicación y guardo el resultado en producto1 que hace referencia a la variable producto
} //Recordemos que como ya le indicamos a suma1 y producto1 la dirección de memoria de suma y producto podemos modificar el valor que tenian.
//y cuando es paso por referencia el nuevo valor se queda guardado en la posición de memoria de la variable original, por lo tanto estaria enviando
//dos resultados y no solo uno como en las funciones normales.
