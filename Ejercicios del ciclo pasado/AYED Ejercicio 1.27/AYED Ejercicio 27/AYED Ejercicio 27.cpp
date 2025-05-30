// AYED Ejercicio 27.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Dado un conjunto de valores numéricos que finaliza con el ingreso de un 0 (cero), informar cuál es el mínimo valor entre aquellos que pertenecen al intervalo[-16, 27].

#include <iostream>
using namespace std;

int main()
{
	int numero = 1, minimo;
	unsigned int i = 0; //Contador que nos ayudara a comparar los numeros

	while ( numero != 0 )
	{
		cout << "Digite un numero: ";
		cin >> numero;

		if ( numero >= -16 && numero <= 27 ) //Si numero pertenece al intervalo[-16, 27]
		{
			if ( i > 0 ) //Si i es mayor que 0 significa que no es la primera iteración
			{
				if ( numero < minimo ) //Si el numero es menor que el valor de minimo
					minimo = numero; //asigno el nuevo valor menor a la variable minimo
			}
			else //De lo contrario, significa que es la primera iteración, por lo que
			{
				minimo = numero; //asigna el primer numero como valor de referencia a comparar con los siguientes numeros
			}

			i++; //Postincrementa i, indicando que itera una vez en la busqueda del valor minimo entre el intervalo[-16, 27]
		} //Fin de if
	}

	cout << "\nEl minimo valor entre aquellos que pertenecen al intervalo[-16, 27] es: " << minimo << endl;

	return 0;
}