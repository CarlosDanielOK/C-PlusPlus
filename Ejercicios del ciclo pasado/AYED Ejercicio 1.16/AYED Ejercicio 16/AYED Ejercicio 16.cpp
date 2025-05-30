// AYED Ejercicio 16.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Dado un valor entero n, informar el n-ésimo término de la sucesión de Fibonacci. Por ejemplo: si n == 6, la salida del programa debe ser 8. NOTA: los primeros dos términos de la serie de Fibonacci son 1 y 1. Luego, cada término se calcula como la suma de los dos términos anteriores. Así, los primeros términos de la serie son: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55.

#include <iostream>
using namespace std;

int main()
{
	int n, suma, anterior = 0, posterior = 1;

	cout << "Digite un numero: ";
	cin >> n;

	if ( n == 1 ) //Si n es igual que 1 significa que solo debe imprimir el primer termino de la sucesión de Fibonacci
	{
		cout << "1" << endl;
	}
	else //De lo contrario
	{
		//Ciclo for que iniciliaza i en 2 porque va imprimir a partir del segundo termino de la sucesión de Fibonacci
		for ( unsigned int i = 2; i <= n; i++ )
		{
			suma = anterior + posterior; //Suma el anterior y el posterior
			anterior = posterior; //Asigna el valor del numero posterior a anterior porque el numero posterior pasaria a ser el anterior
			posterior = suma; //Asigna el valor de suma a posterior porque el resultado pasaria a ser el nuevo valor posterior
		} //Fin de for

		cout << suma << endl; //Imprime el n-ésimo término de la sucesión de Fibonacci
	} //Fin de if...else

	return 0;
} //Fin de main