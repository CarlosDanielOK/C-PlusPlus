// AYED Ejercicio 13.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Dado un valor entero, informar su factorial. NOTA: El factorial de un número n( se indica n!) se calcula así : n * n - 1 * n - 2 * … * 3 * 2 * 1. El factorial de 0 es 1. Por ejemplo : 5! es: 120, 4! es: 24.

#include <iostream>
using namespace std;

int main()
{
    int numero, factorial = 1; //Variables de tipo entero

	//La instrucción de repetición DO...WHILE evalúa la condición de continuación de ciclo después de ejecutar el cuerpo del ciclo; por lo que el cuerpo del ciclo se ejecutará al menos una vez.
	do
	{
		cout << "Digite un numero: "; //Pide el numero
		cin >> numero; //Lee el numero
	} while ( numero < 0 ); //Evalúa la prueba de continuación de ciclo. Si la condición es verdadera, el ciclo continúa a partir de la primera instrucción del cuerpo en la instrucción do...while( linea 14 ). Si la condición es falsa, el ciclo termina y el programa continúa con la siguiente instrucción después del ciclo( línea 18 ).

	for ( unsigned int i = 1; i <= numero; i++ )
	{
		factorial *= i; //factorial = factorial * i; En la 1er iteración seria factorial=1*1( factorial=1 ) y se postincrementa i( i=i(1)+1=2 ), la 2da iteracion seria factorial=1*2( factorial=2 ) y se postincrementa i( i=i(2)+1=3 ); y asi sucesivamente mientras que la condicón sea verdadera ( i <= numero )
	} //Fin de for

	cout << "\nEl factorial de " << numero << " es: " << numero << "! = " << factorial << endl;

    return 0;
}