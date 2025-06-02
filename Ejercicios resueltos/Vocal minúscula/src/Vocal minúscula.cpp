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

	cout << "Este programa va a determinar si una vocal es minúscula o no. Empecemos!" << endl;
	cout << "\nDigite una vocal: "; cin >> letra;

	switch (letra) {
	    case 'a': cout << "\nEs una vocal minúscula."; break;
		case 'e': cout << "\nEs una vocal minúscula."; break;
		case 'i': cout << "\nEs una vocal minúscula."; break;
		case 'o': cout << "\nEs una vocal minúscula."; break;
		case 'u': cout << "\nEs una vocal minúscula."; break;
		default: cout << "\nNo es una vocal minúscula."; break;

	}

	return 0;
}
