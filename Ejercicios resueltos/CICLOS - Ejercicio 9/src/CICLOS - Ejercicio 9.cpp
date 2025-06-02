//============================================================================
// Name        : CICLOS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Escriba un programa que calcule el valor de: 1*2*3...*n (factorial)

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int n, factorial=1;

	cout << "Este programa calculará el factorial de un número.\n\t\tEmpecemos!" << endl;

	do {
		cout << "\nDigite un número: "; cin >> n;
	} while (n<0);

	for (int i=1; i<=n; i++){
		factorial *= i;//factorial=factorial*i En el 1er ciclo seria factorial=1*1(daria 1) y i(1)+1=2; 2do ciclo factorial=1*2(factorial ahora valdria 2) y i(2)+1=3; y asi sucesivamente hasta que no se cumpla la condicion (i<=n)
	}

	cout << "\nEl factorial de " << n << " es: " << factorial << endl;

	getch();
	return 0;
}
