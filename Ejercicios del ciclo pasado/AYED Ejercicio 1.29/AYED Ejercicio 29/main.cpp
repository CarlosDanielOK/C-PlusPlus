// main.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
/* Se ingresan n conjuntos de m valores numéricos cada uno. Se pide informar:
	1. Para cada uno de los n conjuntos:
		a. El valor promedio.
		b. El máximo valor.
		c. Porcentaje de valores positivos.
	2. Para todo el lote de datos:
		a. Valor promedio.
		b. Porcentaje de valores negativos.
		c. Valor mínimo.

   Por ejemplo: n = 4 y m = 3, tendriamos 4 conjuntos de 3 numeros cada uno
   Conjunto 1:  1  2  3
   Conjunto 2:  4  5  6
   Conjunto 3:  7  8  9
   Conjunto 4: 10 11 12
 */

#include <iostream>
using namespace std;

int main()
{
	int n, m, sumaConjuntos = 0, numerosNegativos = 0, minimo;

	cout << "Digite el numero de conjuntos: ";
	cin >> n;
	cout << "Digite el numero de elementos de cada conjunto: ";
	cin >> m;

	cout << endl; //Imprime un salto de linea

	for ( unsigned int conjunto = 0; conjunto < n; conjunto++ ) //Controla cuantos conjuntos se deben introducir
	{
		cout << "Conjunto " << conjunto << endl; //Imprime el numero de conjunto al cual se van ingresar sus elementos
		double promedio = 0; //Variable local que almacena el promedio de un conjunto
		int maximo;
		int numerosPositivos = 0; //Almacena la cantidad de numero positivos que existen en un conjunto

		for ( unsigned int numero = 0; numero < m; numero++ ) //Controla cuantos numeros tendra cada conjunto
		{
			int valor; //Variable local que almacena el elemento de un conjunto

			cout << "Digite un numero: ";
			cin >> valor;

			promedio += valor; //suma todos los valores de un conjunto para luego calcular el promedio
			sumaConjuntos += valor; //suma todos los elementos de todos los conjuntos para luego calcular el promedio

			//Si es la primera iteración, osea si es el primer elemento ingresado del conjunto o si "valor" es mayor que "maximo"
			if ( numero == 0 || valor > maximo )
				maximo = valor; //asigna el valor maximo del conjunto

			//Si es el primer numero ingresado de todos los conjuntos o si "valor" es menor que "minimo"
			if ( conjunto == 0 || valor < minimo )
				minimo = valor; //asigna el valor minimo de todos los conjuntos
			
			if ( valor > 0 ) //Si "valor" es mayor que 0
				numerosPositivos++; //postincrementa numerosPositivos
			else if ( valor < 0 ) //De lo contrario, si "valor" es menor que 0
				numerosNegativos++; //postincrementa numerosNegativos
		} //Fin de for anidado

		promedio = promedio / m; //Calcula el promedio de un conjunto, promedio(tiene la suma de los elementos del conjunto) / m(el numero de elementos del conjunto)
		double porcentajePositivos = ( (double)numerosPositivos / m ) * 100; //El operador (double)numerosPositivos funciona igual que el operador static_cast<double>( numerosPositivos ). Para obtener la división real, el tipo de dato de alguno de los operandos debe ser double. Podemos convertir temporalmente un operando anteponiéndole, a la variable, el tipo de dato al cual lo queremos llevar. Esta conversión de tipo de dato se llama cast y su alcance es temporal. Sólo tiene efecto en la línea en la que fue colocada. Más allá de esa línea, la variable numerosPositivos seguirá siendo int.

		cout << "\nEl promedio del conjunto " << conjunto << " es: " << promedio << endl;
		cout << "El valor maximo del conjunto " << conjunto << " es: " << maximo << endl;
		cout << "El porcentaje de valores positivos del conjunto " << conjunto << " es: " << porcentajePositivos << "\n\n";
	} //Fin de for

	double promedioConjuntos = (double)sumaConjuntos / ( n * m ); //Calcula el promedio de todos los conjuntos
	double porcentajeNegativos = ( (double)numerosNegativos / ( n * m ) ) * 100; //Calcula el porcentaje de negativos de todos los conjuntos

	cout << "\nEl promedio de todo el lote de datos es: " << promedioConjuntos << endl;
	cout << "El porcentaje de valores negativos de todo el lote de datos es: " << porcentajeNegativos << endl;
	cout << "El valor minimo de todo el lote de datos es: " << minimo << endl;

	system( "pause" );
	return 0;
}