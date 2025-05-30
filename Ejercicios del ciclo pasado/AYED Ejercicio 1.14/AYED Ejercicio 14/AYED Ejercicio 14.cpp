// AYED Ejercicio 14.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Dado un valor entero, informar si es primo. NOTA: un número es primo si sólo es divisible por sí mismo y por 1.

#include <iostream>
using namespace std;

int main()
{
	int numero;
	bool primo = true; //C++ proporciona el tipo de datos bool para las variables que sólo pueden contener los valores lógicos true (verdadero) y false (falso); cada una de éstas es una palabra clave de C++. Se inicializa en true para poder entrar en el ciclo for

	cout << "Digite un numero: ";
	cin >> numero;

	//El encabezado de la instrucción for incluye la inicialización (unsigned int i = 2), la condición de continuación del ciclo (i < numero && primo == true) y el incremento (i++). i se inicializa en 2 porque no hace falta dividir un numero entre 1 ya que todos los numeros son divisibles entre 1; el ciclo iterara mientras que i sea menor que numero y primo tenga el valor true, porque buscara si el numero tiene algun otro divisor entre el 1 y el numero en si. Por ejemplo: 2 < 10 esto buscaria si 10 tiene otros divisores en el rango de (2, 10).
	for ( int i = 2; i < numero && primo == true; i++ )
	{
		//Compara si el resto de dividir numero entre i es igual que cero, cuando encuentre el primer divisor (si es que lo hay) el valor de primo pasara a ser false porque si ya encuentra un divisor aparte de 1 y el numero en si ya no es primo y no hace falta seguir iterando para buscar otro divisor porque con que encuentre un divisor mas ya es suficiente
		if ( numero % i == 0 )
		{
			primo = false; //Cambia el valor booleano de primo a false
		}
	}

	if ( primo == false ) //Si primo es igual a false significa que el numero tiene mas de dos divisores, y por lo tanto no es primo
		cout << "\nEl numero no es primo." << endl;
	else //Caso contrario, significa que primo es igual a true y por lo tanto no encontro ningun divisor mas y por eso no cambio su valor
		cout << "\nEl numero es primo." << endl;

	return 0;
}