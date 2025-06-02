//============================================================================
// Name        : CICLOS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Escribe un programa que realice la serie Fibonacci --> 1 1 2 3 5 8 13...n

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int n, x=0, y=1, z=1;

	cout << "Este programa va a realizar la serie Fibonacci. Empecemos!" << endl;
	cout << "\nDigite un número: "; cin >> n;
	cout << "\n" << endl;
	cout << "1 "; //Imprimimos el primer 1

	for (int i=1; i<n; i++){ //Para que se repita el proceso
		z = x + y; // 1 2 3 5 8
		cout << z << " "; // 1 2 3 5 8
		x = y; // x=1 x=1 x=2 x=3 x=5
		y = z; // y=1 y=2 y=3 y=5 y=8
	}// i=2 3 4 5 6

	getch();
	return 0;
}
