//============================================================================
// Name        : CICLOS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Realice un programa que calcule la descomposición en factores primos de un número entero. Por ejemplo: 20 = 2*2*5.

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int num;

	cout << "Digite un número: "; cin >> num;
	cout << "\nDescomponiendo en factores primos: ";

	for (int i=2; num>1; i++) {
		while (num % i == 0) { //Si el resto de num/i es = a 0 entonces entra en el ciclo o bucle.
			cout << i << " "; //Imprimo en pantalla i y un espacio.
			num /= i; //num=num/i
		} //i=i+1 (i++)
	}

	getch();
	return 0;
}
