//============================================================================
// Name        : Precio.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int precio, preciofinal, iva;

	cout << "Ingrese el precio del producto: $";
	cin >> precio;

	iva = 0.21*precio;
	preciofinal = iva+precio;

	cout << "\nEl precio al aplicarle el IVA es: $" << preciofinal << endl;

	return 0;
}
