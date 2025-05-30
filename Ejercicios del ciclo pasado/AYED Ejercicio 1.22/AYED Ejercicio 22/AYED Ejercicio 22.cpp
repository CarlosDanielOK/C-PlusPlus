// AYED Ejercicio 22.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Dado un valor numérico n, informar los primeros n múltiplos de 5 que no sean múltiplos de 3. Por ejemplo : si n == 6, la salida debe ser : 5, 10, 20, 25, 35, 40.

#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "Digite el valor de n: ";
	cin >> n;

	unsigned int multiploDe5 = 0;
	unsigned int i = 0; //Contador

	while ( i < n )
	{
		multiploDe5 += 5; //Calcula los multiplos de 5

		if ( multiploDe5 % 3 != 0 ) //Si no es multiplo de 3
		{
			cout << multiploDe5 << " "; //imprime el multiplo
			i++; //postincrementa i, indicando que se encontro un multiplo de 5 que no es multiplo de 3
		}
	}

	return 0;
}