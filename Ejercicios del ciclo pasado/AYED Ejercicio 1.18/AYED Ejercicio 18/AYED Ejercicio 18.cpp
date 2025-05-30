// AYED Ejercicio 18.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Dado un valor entero n mostrar el factorial de los primeros n números naturales. Por ejemplo : si n = 7, entonces la salida debe ser : 1, 2, 6, 24, 120, 720, 5040.


#include <iostream>
using namespace std;

int main()
{
	int numero, factorial = 1; //Variables de tipo entero

	//Se asegura de que numero almacene un numero mayor o igual que 0
	//La instrucción de repetición DO...WHILE evalúa la condición de continuación de ciclo después de ejecutar el cuerpo del ciclo; por lo que el cuerpo del ciclo se ejecutará al menos una vez.
	do
	{
		cout << "Digite un numero: "; //Pide el numero
		cin >> numero; //Lee el numero
	} while ( numero < 0 ); //Evalúa la prueba de continuación de ciclo. Si la condición es verdadera, el ciclo continúa a partir de la primera instrucción del cuerpo en la instrucción do...while( linea 14 ). Si la condición es falsa, el ciclo termina y el programa continúa con la siguiente instrucción después del ciclo( línea 18 ).

	//Este ciclo for controla el numero del factorial a calcular
	for ( unsigned int i = 1; i <= numero; i++ )
	{
		//Calcula el factorial de i, i ira iterando obteniendo asi el factorial de 1,2,3,etc.
		for ( unsigned int j = 1; j <= i; j++ )
		{
			factorial *= j; //factorial = factorial * j; En la 1er iteración seria factorial=1*1( factorial=1 ) y se postincrementa j( j=j(1)+1=2 ), la 2da iteracion seria factorial=1*2( factorial=2 ) y se postincrementa j( j=j(2)+1=3 ); y asi sucesivamente mientras que la condicón sea verdadera ( j <= i )
		} //Fin de for anidado
		
		cout << factorial << " "; //Imprime el factorial de i
		factorial = 1; //Reinicia el valor de factorial porque sino quedaria almacenado el factorial de numero anterior
	} //Fin de for

	return 0;
}