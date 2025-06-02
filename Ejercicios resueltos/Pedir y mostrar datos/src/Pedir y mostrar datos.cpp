//============================================================================
// Name        : Pedir.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int edad;
	char sexo[10];
	float altura;

	cout << "Ingrese su edad: ";
	cin >> edad;
	cout << "Ingrese su sexo: ";
	cin >> sexo;
	cout << "Ingrese su altura en metros: ";
	cin >> altura;

	cout << "\nEdad: " << edad << endl;
	cout << "Sexo: " << sexo << endl;
	cout << "Altura: " << altura << endl;

	return 0;
}
