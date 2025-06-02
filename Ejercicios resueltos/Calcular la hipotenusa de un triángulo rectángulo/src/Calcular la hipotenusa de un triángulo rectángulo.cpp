//============================================================================
// Name        : Calcular.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float c1, c2, hip=0;
	cout << "Digite el valor del cateto 1:"; cin >> c1;
	cout << "Digite el valor del cateto 2:"; cin >> c2;

	hip = sqrt((pow(c1,2))+(pow(c2,2)));

	cout << "\nEl valor de la hipotenusa es: " << hip;

	return 0;
}
