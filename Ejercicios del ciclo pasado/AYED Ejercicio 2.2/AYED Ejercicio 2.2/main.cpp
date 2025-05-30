// main.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
/*
 * Desarrollar la función esPrimo que retorna true o false según determine que n es un número primo o no:
    bool esPrimo(int n);
   Invocando a la función esPrimo, desarrollar un programa que muestre por consola los primeros t números primos, siendo t un valor que ingresa el usuario.
 */

#include <iostream>
using namespace std;

//Prototipo de función
bool esPrimo( int n );

int main()
{
    int t;

    cout << "Digite el numero de primos que desea ver: ";
    cin >> t;

    unsigned int tPrimos = 0; //Variable local que lleva la cuenta de cuantos numeros primos se encontraron

    //Ciclo for que controla cuantos numeros primos se encuentran
    for ( unsigned int numCalcular = 2; tPrimos < t; numCalcular++ )
    {
        //Llama a la función esPrimo y pasa numCalcular como argumento. La función retorna true si el valor de numCalcular es primo, o retorna false si el valor de numCalcular no es primo
        if ( esPrimo( numCalcular ) )
        {
            cout << numCalcular << " "; //imprime un numero primo
            tPrimos++; //postincrementa i, indicando que se encontro un primo de los t numeros primos solicitados
        } //Fin de if
    } //Fin de for

    cout << endl; //imprime un salto de linea

    system( "pause" );
    return 0;
}

//Definición de función
bool esPrimo( int n )
{
    bool primo = true; //Variable local de tipo bool que se inicializa en true para poder entrar en el ciclo for

    //El encabezado de la instrucción for incluye la inicialización (unsigned int i = 2), la condición de continuación del ciclo (i < n && primo == true) y el incremento (i++). i se inicializa en 2 porque no hace falta dividir un n entre 1 ya que todos los numeros son divisibles entre 1; el ciclo iterara mientras que i sea menor que n y primo tenga el valor true, porque buscara si n tiene algun otro divisor entre el 1 y el n en si. Por ejemplo: 2 < 10 esto buscaria si 10 tiene otros divisores en el rango de (2, 10).
    for ( int i = 2; i < n && primo == true; i++ )
    {
        //Compara si el resto de dividir n entre i es igual que cero, cuando encuentre el primer divisor (si es que lo hay) el valor de primo pasara a ser false porque si ya encuentra un divisor aparte de 1 y el n en si ya no es primo y no hace falta seguir iterando para buscar otro divisor porque con que encuentre un divisor mas ya es suficiente
        if ( n % i == 0 )
            primo = false; //cambia el valor booleano de primo a false
    } //Fin de for

    return primo; //Retorna el valor de primo, true o false
}