//============================================================================
// Name        : Estructura.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main()
{
	int numero;

	cout << "Este programa va a determinar el mes segun el número que ingrese [1-12]. Empecemos!" << endl;
	cout << "\nDigite un número entre [1-12]: "; cin >> numero;

	switch (numero) {

	case 1: cout << "\nEl mes es Enero."; break;
	case 2: cout << "\nEl mes es Febrero."; break;
	case 3: cout << "\nEl mes es Marzo."; break;
	case 4: cout << "\nEl mes es Abril."; break;
	case 5: cout << "\nEl mes es Mayo."; break;
	case 6: cout << "\nEl mes es Junio."; break;
	case 7: cout << "\nEl mes es Julio."; break;
	case 8: cout << "\nEl mes es Agosto."; break;
	case 9: cout << "\nEl mes es Septiembre."; break;
	case 10: cout << "\nEl mes es Octubre."; break;
	case 11: cout << "\nEl mes es Noviembre."; break;
	case 12: cout << "\nEl mes es Diciembre."; break;
	default: cout << "\nNo existe mes para ese número."; break;

	}

	return 0;
}
