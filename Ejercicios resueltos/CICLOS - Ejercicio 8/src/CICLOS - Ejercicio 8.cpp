//============================================================================
// Name        : CICLOS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// Escriba un programa que calcule el valor de: 1+3+5...+2n-1.

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int n, suma=0;

	cout << "Este programa va a calcular el valor de: 1+3+5...2n-1 \n\t\t\tEmpecemos!" << endl;
	cout << "\nDigite un número: "; cin >> n;

	for(int i=1; i<=n; i+=2){
		suma += i; //suma=suma+i En este caso i se le sumara 2 por eso el i+=2(i=i+2)
	}

	cout << "\nEl resultado es: " << suma << endl;

	getch();
	return 0;
}
