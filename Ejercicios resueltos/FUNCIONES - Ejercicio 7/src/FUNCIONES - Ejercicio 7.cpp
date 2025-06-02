//============================================================================
// Name        : FUNCIONES.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Ejercicio 7: Intercambiar el valor de 2 variables utilizando paso de parámetros por referencia.

#include <iostream>
#include <conio.h>
using namespace std;

//Prototipo de función
void intercambiar(int&, int&);

int main() {
	int x, y;

	cout << "Digite un valor para x: "; cin >> x;
	cout << "Digite un valor para y: "; cin >> y;

	cout << "\nEl valor de x es: " << x << endl;
	cout << "El valor de y es: " << y << endl;

	intercambiar(x, y); //Llamo a la función, y le paso la dirección de memoria de x e y

	cout << "\nEl nuevo valor de x es: " << x << endl;
	cout << "El nuevo valor de y es: " << y << endl;

	getch();
	return 0;
}

//Definición de función
void intercambiar(int& x, int& y) { //No importa que tengan el mismo nombre que las variables originales a la que hacen referencia.
	int aux; //Creamos una variable auxiliar para realizar el intercambio de valores

	aux = x; //Guardamos el valor de x en aux, para despues poder asignarselo a y
	x = y; //Realizamos el primer intercambio, en x guardamos el valor de y
	y = aux; //Realizamos el segundo intercambio, como habiamos guardado el valor de x en aux, "y" ahora tiene el valor de "x"
}
