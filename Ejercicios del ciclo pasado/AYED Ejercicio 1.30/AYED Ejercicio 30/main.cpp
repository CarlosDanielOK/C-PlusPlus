// main.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
/* Se dispone de un conjunto de valores enteros positivos que finaliza con el ingreso de un número negativo. El conjunto está dividido en subconjuntos, separados entre sí, mediante valores 0 (cero). Se pide:
	1. Por cada subconjunto:
		a. Promedio de sus valores.
		b. Valor mínimo
	2. Para el conjunto completo:
		a. Cantidad de subconjuntos.
		b. Sumatoria de sus valores.
		c. Número del subconjunto en el que se ingresó el mayor valor (será único). Cuál fue ese valor y en qué posición relativa se encontró.

   Por ejemplo:
   Un conjunto: Subconjunto 1: 1  2  0
				Subconjunto 2: 3  4  5  0
				Subconjunto 3: 6  7  8  9 10 11 0
				etc.
				-x: termina el conjunto con el ingreso de número negativo
 */

#include <iostream>
using namespace std;

int main()
{
	int numero = 1; //Declara una variable de tipo entero
	unsigned int cantidadDeSubconjuntos = 0; //Declara una variable de tipo entero no signado
	int sumaSubconjuntos = 0;
	int maximo = 0; //Almacena el maximo valor de todos los subconjuntos. Se inicializa en 0 porque como este conjunto esta acotado, es decir, porque si o si almacena un valor positivo y no puede ser un valor negativo ni 0 por lo que si entra en el while el primer valor sera mas grande que el valor 0 de maximo. Los valores de maximo siempre va a ir subiendo.
	unsigned int posicionSubconjuntoMax;
	unsigned int posicionRelativaMax; //Almacena la posición del maximo valor

	cout << "Digite un numero positivo: ";
	cin >> numero;

	//Ciclo while que controla cuando finaliza el conjunto
	while ( numero >= 0 )
	{
		int suma = 0; //Almacena la suma de los elementos de un subconjunto
		unsigned int contadorDeElementos = 0;
		int minimo = numero; //Le asigna el primer numero positivo ingresado como valor de referencia

		while ( numero > 0 ) //Mientras que "numero" sea mayor que 0, porque si es 0 finaliza un subconjunto
		{
			//Promedio de los valores de un subconjunto
			suma += numero; //suma los numeros positivos del subconjunto para luego calcular su promedio
			
			//Calcula el valor minimo de un subconjunto
			if ( numero < minimo )
				minimo = numero;

			//Calcula el valor maximo de un subconjunto, el número del subconjunto en el que se ingresó y en qué posición relativa se encontró.
			if ( numero > maximo )
			{
				maximo = numero;
				posicionSubconjuntoMax = cantidadDeSubconjuntos; //Almacena la posición del subconjunto
				posicionRelativaMax = contadorDeElementos; //Almacena la posición relativa del valor maximo
			}

			contadorDeElementos++; //sumo uno indicando que se procesa un elemento del subconjunto

			cout << "Digite un numero positivo: ";
			cin >> numero;
		} //Fin de while anidado

		//Calcula el promedio de un subconjunto
		double promedio = suma / (double)contadorDeElementos; //castea contadorDeElementos para obtener un resultado real
		
		cout << "\nEl promedio del subconjunto es: " << promedio << endl;
		cout << "El valor minimo del subconjunto es: " << minimo << "\n" << endl;

		cantidadDeSubconjuntos++; //Postincrementa cantidadDeSubconjuntos, indicando que se proceso un subconjunto

		sumaSubconjuntos += suma; //Suma total de los subconjuntos

		//Pide y lee un numero
		cout << "Digite un numero positivo: ";
		cin >> numero;
	} //Fin de while

	cout << "\nCantidad de subconjuntos: " << cantidadDeSubconjuntos << endl;
	cout << "Suma de todos los valores: " << sumaSubconjuntos << endl;
	cout << "El valor maximo es: " << maximo << endl;
	cout << "El valor maximo fue encontrado en el subconjunto: " << posicionSubconjuntoMax << endl;
	cout << "El valor maximo fue encontrado en la posicion relativa: " << posicionRelativaMax << endl;

	system( "pause" );
	return 0;
}