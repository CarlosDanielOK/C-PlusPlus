//============================================================================
// Name        : Vocal.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	char letra;

	cout << "Este programa va a determinar si el carácter ingresado es una vocal mayúscula, minúscula o no es una vocal. Empecemos!" << endl;
	cout << "\nDigite un carácter: "; cin >> letra;

	switch (letra) {

	case 'a': //En los case a,e,i,o no escribo nada porque de la a hasta la u todas son vocales minusculas.
	case 'e':
	case 'i':
	case 'o':
	case 'u': cout << "\nEs una vocal minúscula."; break;
	case 'A': //Aca pasa lo mismo.
	case 'E':
	case 'I':
	case 'O':
	case 'U': cout << "\nEs una vocal mayúscula."; break;
	default: cout << "\nNo es una vocal."; break;

	}

	return 0;
}
