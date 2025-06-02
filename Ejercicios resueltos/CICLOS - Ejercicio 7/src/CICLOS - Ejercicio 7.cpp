//============================================================================
// Name        : CICLOS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Escriba un programa que calcule el valor de: 1+2+3...+n.

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int n, suma=0;

	cout << "Este programa calcula a partir del número que digite 1+2+3...+n. Empecemos!" << endl;
	cout << "\nDigite un número: ";
	cin >> n;

	for (int i=1; i<=n; i++){
		suma += i; //suma=suma+i El 1er ciclo seria suma=0+1 | Suma valdria 1 y despues a i le suma(xq i++). Entra de nuevo en el ciclo y i=2 y suma=1, se repetiria el mismo proceso.
	}

	cout << "\nEl resultado es: " << suma << endl;

	getch();
	return 0;
}
