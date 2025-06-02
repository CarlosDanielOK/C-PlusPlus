//============================================================================
// Name        : Ciclo.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	char a[11]; //Un ARRAYS es un conjunto, es una variable que tiene dentro varias variables mas. "[11]" indica la cantidad de caracteres que tendra
	a[0] = 'H';
	a[1] = 'o';
	a[2] = 'l';
	a[3] = 'a';
	a[4] = ' ';
	a[5] = 'S';
	a[6] = 'e';
	a[7] = 'n';
	a[8] = 'i';
	a[9] = 'o';
	a[10] = 'r';

	for (int i=0; i<11; i++) //int i=0(inicializamos la variable dentro del FOR; i<11(la condicion para que se repita el bucle o ciclo; i++(para valla sumando de uno en uno)
	{
		cout << a[i]; //Si "i" vale 0 pone en pantalla "H", asi sucesivamente hasta llegar 9 porque la condicion es que i<10
	}

	cin.get(); //Es para que no cierre el programa, y pertenece a la libreria #include <iostream>
	return 0;
}
