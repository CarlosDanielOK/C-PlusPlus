// main.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
/* Desarrollar la función factorial que calcula y retorna el factorial de n.
	double factorial( int n );
   Invocando a la función factorial, desarrollar un programa que muestre el factorial de los primeros t números naturales; siendo t un valor que se ingresa por consola.
 */

//Prototipo de función
double factorial( int n );

//Definición o implementación de la función
double factorial( int n )
{
	double resultado = 1;

	//Calcula el factorial de n
	for ( unsigned int i = 1; i <= n; i++ )
	{
		resultado *= i; //resultado = resultado * i;  En la 1er iteración seria resultado = 1*1( resultado=1 ) y se postincrementa i( i = i(1)+1 = 2 ), la 2da iteracion seria resultado = 1*2( resultado=2 ) y se postincrementa i( i = i(2)+1 = 3 ); y asi sucesivamente mientras que la condición sea verdadera ( i <= n )
	} //Fin de for

	return resultado; //La instrucción return se utiliza para devolver un resultado a la función que la llamó, en este caso la función devuelve un double, el factorial de n.
} //Fin de la función factorial

#include <iostream>
using namespace std;

int main()
{
	int t;

	cout << "Digite el numero de numeros naturales que desea ver su factorial: ";
	cin >> t;

	//Este ciclo for controla el numero del factorial a calcular
	for ( unsigned int n = 1; n <= t; n++ )
	{
		cout << factorial( n ) << " ";
	} //Fin de for

	cout << "\n\n"; //Imprime dos saltos de linea

	system( "pause" );
	return 0;
}