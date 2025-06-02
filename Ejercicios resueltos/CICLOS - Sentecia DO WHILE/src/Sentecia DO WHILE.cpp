//============================================================================
// Name        : Sentecia.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h> //Libreria parecida a <conio.h>
using namespace std;

int main() {

	int i; //iterador
	i=100;

	do {
		cout << i << endl;
		i--; //Disminuye uno en uno, seria i-1 varias veces hasta que cumpla la condicion
	} while (i>=1); //La condicion

	system("pause"); //Para que no se cierre el programa. Misma funcion que getch()

	return 0;
	//El DO WHILE primero actua y despues piensa
}
