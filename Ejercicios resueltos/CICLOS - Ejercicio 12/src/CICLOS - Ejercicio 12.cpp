//============================================================================
// Name        : CICLOS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Hacer un programa que calcule el resultado de la siguiente expresión: 1-2+3-4+5-6...n

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int n, par, impar;

	cout << "Este programa calcula el resultado de la siguiente expresión: 1-2+3-4+5-6...n" << endl;
	cout << "\nDigite un número: "; cin >> n;

	if (n%2 == 0){  //Si el resto del número que digito es 0 es un número par.
		par = n/(-2); //Hice una formula: El número que digite el usuario dividido -2, y se guardara en la variable par.
		cout << "\nEl resultado es: " << par << endl;
	} else { //Si el numero no es impar entra en el else.
		impar = n/2; //Hice otra formula: 1ro divide el número por 2, y el resultado se guarda en la variable impar.
		impar = n - impar; //2do Al número que digito le resto el resultado de la división, y se guarda en la variable impar.
		cout << "\nEl resultado es: " << impar << endl;
	}

	cout << "\n" << endl;

	system("pause");
	return 0;
}
/*PRIMERO encontre una formula para los números pares, que es n/(-2). El if dice que si el resto de el número que digito es 0 se aplica la formula
 * ya que si da 0 el resto es un número par.
 * SEGUNDO hice una formula para los números impares, que n/2 y el resultado se lo resto a n. Eso pasaria en el else.
 */
