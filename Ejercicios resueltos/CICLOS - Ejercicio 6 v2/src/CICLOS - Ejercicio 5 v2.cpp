//============================================================================
// Name        : CICLOS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/* Escriba un programa que calcule x^y, donde tanto x como y son enteros positivos, sin utilizar la función pow.*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int x, y;

	do {
		cout << "Digite la base: "; cin >> x;
		cout << "Digite el exponente: "; cin >> y;
	} while ((x<0) || (y<0));

	int i=1, elevacion=1; //Declaro el iterador i=1, y elevecion=1

	while (i<=y){ //si i es menor o igual a y(exponente) entra en el ciclo o bucle
		elevacion *= x; //Es lo mismo que elevacion=elevacion*x | En el 1er ciclo seia asi: elevacion= 1*x y el resultado se guarda en "elevacion"
		i++; //Le va a sumar a "i" un "1" al finalizar el ciclo y "i" ahora valdria "2". Y va volver a entrar en el ciclo si "i" cumple la condicion(i<=y)
	}

	cout << "\nEl resultado es: " << elevacion << endl; //Mostramos en pantalla el resultado de la potencia

	system("pause");
	return 0;
}
