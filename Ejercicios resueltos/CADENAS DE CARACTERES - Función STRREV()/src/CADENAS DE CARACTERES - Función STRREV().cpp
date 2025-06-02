//============================================================================
// Name        : CADENAS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Invertir una cadena (palabra o cadenas de caracteres) - Función strrev()

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main() {
	char cad[] = "Carlos Daniel";

	strrev(cad); //strrev(nombre de la variable)

	cout << cad << endl;

	getch();
	return 0;
}
