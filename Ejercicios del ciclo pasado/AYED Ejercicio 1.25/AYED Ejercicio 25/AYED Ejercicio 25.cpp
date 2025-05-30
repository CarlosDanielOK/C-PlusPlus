// AYED Ejercicio 25.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
/* 1. Dados 100 valores enteros negativos, informar cuál es el menor.
   2. Dados 100 valores enteros, todos menores que 10, informar cuál es el menor.
   3. Dados 100 valores enteros, informar cuál es el menor.
 */

#include <iostream>
using namespace std;

int main()
{
    int numero, menor;

    //Pide y recibe 100 numeros enteros negativos e informa cual es el menor
    for ( unsigned int i = 0; i < 100; i++ )
    {
        cout << "Digite un numero entero negativo: ";
        cin >> numero;

        if ( i > 0 ) //Si i es menor que 0 significa que no es la primera iteración
        {
            if ( numero < menor ) //Si el numero es menor que el valor de menor
                menor = numero; //asigno el nuevo valor menor a la variable menor
        }
        else //De lo contrario, significa que es la primera iteración, por lo que
        {
            menor = numero; //asigna el primer numero como valor de referencia a comparar con los siguientes numeros
        }
    }

    cout << "\nEl menor es: " << menor << "\n" << endl;

    //Pide y recibe 100 numeros menores que 10 e informa cual es el menor
    for ( unsigned int i = 0; i < 100; i++ )
    {
        cout << "Digite un numero menor que 10: ";
        cin >> numero;

        if ( i > 0 ) //Si i es menor que 0 significa que no es la primera iteración
        {
            if ( numero < menor ) //Si el numero es menor que el valor de menor
                menor = numero; //asigno el nuevo valor menor a la variable menor
        }
        else //De lo contrario, significa que es la primera iteración, por lo que
        {
            menor = numero; //asigna el primer numero como valor de referencia a comparar con los siguientes numeros
        }
    }

    cout << "\nEl menor es: " << menor << "\n" << endl;

    //Pide y recibe 100 numeros enteros e informa cual es el menor
    for ( unsigned int i = 0; i < 100; i++ )
    {
        cout << "Digite un numero entero: ";
        cin >> numero;

        if ( i > 0 ) //Si i es menor que 0 significa que no es la primera iteración
        {
            if ( numero < menor ) //Si el numero es menor que el valor de menor
                menor = numero; //asigno el nuevo valor menor a la variable menor
        }
        else //De lo contrario, significa que es la primera iteración, por lo que
        {
            menor = numero; //asigna el primer numero como valor de referencia a comparar con los siguientes numeros
        }
    }

    cout << "\nEl menor es: " << menor << endl;

    return 0;
}