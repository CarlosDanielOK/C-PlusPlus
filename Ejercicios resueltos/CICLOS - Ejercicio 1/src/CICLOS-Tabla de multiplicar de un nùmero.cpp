//============================================================================
// Name        : CICLOS-Tabla.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <conio.h>
using namespace std;

int main() {

	int num;

	do {
		cout << "Digite un nùmero: "; cin >> num;
	} while (num<1 || num>100); // Si num es menor a 1 o mayor a 100 se vuelve a repetir "digite un numero:", asi nos aseguramos de que el numero que ingrese este entre 1-100

	for (int i=1; i<=100; i++) {
		cout << num << " * " << i << " = " << num*i << endl; //Muestro en pantalla la tabla de multiplicar del nùmero ingresado
	}

	getch();

	return 0;
}
