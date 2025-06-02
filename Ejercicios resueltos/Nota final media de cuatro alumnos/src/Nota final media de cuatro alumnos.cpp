//============================================================================
// Name        : Nota.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	float a, b, c, d;

	cout << "Ingrese la nota final del primer alumno: "; cin >> a;
	cout << "Ingrese la nota final del segundo alumno: "; cin >> b;
	cout << "Ingrese la nota final del tercer alumno: "; cin >> c;
	cout << "Ingrese la nota final del cuarto alumno: "; cin >> d;

	double resultado = (double)(a+b+c+d)/4;

	cout << "La nota final media de los cuatro alumnos es: " << resultado << endl;

	return 0;
}
