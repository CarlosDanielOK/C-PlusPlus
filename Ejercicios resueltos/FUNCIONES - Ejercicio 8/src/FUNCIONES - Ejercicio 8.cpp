//============================================================================
// Name        : FUNCIONES.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/* Ejercicio 8: Escriba una función nombrada cambio() que tenga un parámetro en número entero y seis parámetros de referencia en número entero
nombrados cien, cincuenta, veinte, diez, cinco y uno, respectivamente. La función tiene que considerar el valor entero transmitido como una
cantidad en dólares y convertir el valor en el número menor de billetes equivalentes. */

#include <iostream>
#include <conio.h>
using namespace std;

//Prototipo de función
void cambio(int, int&, int&, int&, int&, int&, int&);

int main() {
	int dolar, cien=0, cincuenta=0, veinte=0, diez=0, cinco=0, uno=0;

	cout << "Digite la cantidad en dólares: $"; cin >> dolar;

	cambio(dolar, cien, cincuenta, veinte, diez, cinco, uno); //Llamamos a la función

	cout << "\nCantidad de billetes a entregar como cambio:\n" << endl;
	cout << cien << " billetes de $100." << endl;
	cout << cincuenta << " billetes de $50." << endl;
	cout << veinte << " billetes de $20." << endl;
	cout << diez << " billetes de $10." << endl;
	cout << cinco << " billetes de $5." << endl;
	cout << uno << " billetes de $1." << endl;

	getch();
	return 0;
}

//Definición de función
void cambio(int dolar, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno) {
	cien = dolar / 100; //Dividimos, y asi sacamos la cantidad de billetes que necesitamos y lo guardamos en "cien" que hace referencia a "cien"
	dolar = dolar % 100; //Sacamos el resto, que seria lo que todavia tenemos que cambiar en billetes

	cincuenta = dolar / 50; //Billetes
	dolar = dolar % 50; //Resto

	veinte = dolar / 20; //Billetes
	dolar = dolar % 20; //Resto

	diez = dolar / 10; //Billetes
	dolar = dolar % 10; //Resto

	cinco = dolar / 5; //Billetes
	dolar = dolar % 5; //Resto

	uno = dolar / 1; //Billetes
	dolar = dolar % 1; //Resto
}
