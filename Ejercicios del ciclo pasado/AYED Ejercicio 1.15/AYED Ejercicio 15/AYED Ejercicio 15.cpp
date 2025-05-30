// AYED Ejercicio 15.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Dado un valor entero n, informar los primeros n números primos. Por ejemplo: si n == 6 entonces la salida debe ser : 1, 2, 3, 5, 7, 11.

#include <iostream>
using namespace std;

int main()
{
	int n, numero_a_calcular = 2; //numero_a_calcular se inicializa en 2 porque el primer numero primo es 2
	bool primo = true; //C++ proporciona el tipo de datos bool para las variables que sólo pueden contener los valores lógicos true (verdadero) y false (falso); cada una de éstas es una palabra clave de C++. Se inicializa en true para poder entrar en el ciclo for

	//Pide y lee el numero
	cout << "Digite un numero: ";
	cin >> n;

	//Este ciclo for controla cuantas numeros primos deben imprimirse. Cada vez que se encuentre e imprima un numero primo nPrimos aumenta su valor en 1 hasta llegar a un valor igual a n (nPrimos <= n). numero_a_calcular++ se incrementa en 1 cada vez que finaliza una iteración para pasar a calcular si el siguiente numero es primo o no.
	for ( unsigned int nPrimos = 1; nPrimos <= n; numero_a_calcular++ )
	{
	//El encabezado de la instrucción for incluye la inicialización (unsigned int i = 2), la condición de continuación del ciclo (i < n && primo == true) y el incremento (i++). i se inicializa en 2 porque no hace falta dividir un numero entre 1 ya que todos los numeros son divisibles entre 1; el ciclo iterara mientras que i sea menor que numero y primo tenga el valor true, porque buscara si el numero tiene algun otro divisor entre el 1 y el numero en si. Por ejemplo: 2 < 10 esto buscaria si 10 tiene otros divisores en el rango de (2, 10).
		for ( unsigned int i = 2; i < numero_a_calcular && primo == true; i++ )
		{
			//Compara si el resto de dividir numero_a_calcular entre i es igual que cero, cuando encuentre el primer divisor (si es que lo hay) el valor de primo pasara a ser false porque si ya encuentra un divisor aparte de 1 y el numero en si ya no es primo y no hace falta seguir iterando para buscar otro divisor porque con que encuentre un divisor mas ya es suficiente
			if ( numero_a_calcular % i == 0 )
			{
				primo = false; //Cambia el valor booleano de primo a false
			} //Fin de if anidado
		} //Fin de for anidado

		if ( primo == true ) //Si primo es igual a true significa que el numero no tiene mas de dos divisores, y por lo tanto es primo
		{
			cout << numero_a_calcular << " "; //Imprime el numero primo
			nPrimos++; //Postincrementa nPrimos cada vez que encuentre un numero primo para llevar la cuenta de cuantos deben imprimirse
		}
		else //De lo contrario, significa que primo tiene el valor false porque entro en el primer if anidado y por lo tanto tiene mas de dos divisores.
		{
			primo = true; //cambia el valor de primo a true para que en la siguiente iteración pueda entrar en el ciclo for anidado
		} //Fin de if...else anidado
	} //Fin de for

	return 0;
}