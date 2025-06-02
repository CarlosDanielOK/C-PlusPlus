//============================================================================
// Name        : Ciclos.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <conio.h> //Libreria para que no se cierre el .exe automaticamente
using namespace std;

int main() {

	int i;
	i=1; //El iterador "i" va empezar en 1

	while (i <= 100) {
		cout << i << endl;
		i++;
	}

	getch(); //Se usa para que no se cierre el programa automaticamente

	return 0;
	//El WHILE primero piensa y despues actua
}
