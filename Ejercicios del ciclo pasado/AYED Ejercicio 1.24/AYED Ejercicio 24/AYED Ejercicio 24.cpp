// AYED Ejercicio 24.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
/* 1. Dados 100 valores enteros positivos, informar cuál es el mayor.
   2. Dados 100 valores enteros, todos mayores que - 10, informar cuál es el mayor.
   3. Dados 100 valores enteros, informar cuál es el mayor.
 */

#include <iostream>
using namespace std;

int main()
{
    int numero, mayor;

    //Pide y recibe 100 numeros enteros positivos e informa cual es el mayor
    for ( unsigned int i = 0; i < 100; i++ )
    {
        cout << "Digite un numero entero positivo: ";
        cin >> numero;

        if ( i > 0 ) //Si i es mayor que 0 significa que no es la primera iteración
        {
            if ( numero > mayor ) //Si el numero es mayor que el valor de mayor
                mayor = numero; //asigno el nuevo valor mayor a la variable mayor
        }
        else //De lo contrario, significa que es la primera iteración, por lo que
        {
            mayor = numero; //asigna el primer numero como valor de referencia a comparar con los siguientes numeros
        }
    }

    cout << "\nEl mayor es: " << mayor << "\n" << endl;

    //Pide y recibe 100 numeros mayores que -10 e informa cual es el mayor
    for ( unsigned int i = 0; i < 100; i++ )
    {
        cout << "Digite un numero mayor que -10: ";
        cin >> numero;

        if ( i > 0 ) //Si i es mayor que 0 significa que no es la primera iteración
        {
            if ( numero > mayor ) //Si el numero es mayor que el valor de mayor
                mayor = numero; //asigno el nuevo valor mayor a la variable mayor
        }
        else //De lo contrario, significa que es la primera iteración, por lo que
        {
            mayor = numero; //asigna el primer numero como valor de referencia a comparar con los siguientes numeros
        }
    }

    cout << "\nEl mayor es: " << mayor << "\n" << endl;

    //Pide y recibe 100 numeros enteros e informa cual es el mayor
    for ( unsigned int i = 0; i < 100; i++ )
    {
        cout << "Digite un numero entero: ";
        cin >> numero;

        if ( i > 0 ) //Si i es mayor que 0 significa que no es la primera iteración
        {
            if ( numero > mayor ) //Si el numero es mayor que el valor de mayor
                mayor = numero; //asigno el nuevo valor mayor a la variable mayor
        }
        else //De lo contrario, significa que es la primera iteración, por lo que
        {
            mayor = numero; //asigna el primer numero como valor de referencia a comparar con los siguientes numeros
        }
    }

    cout << "\nEl mayor es: " << mayor << endl;

    return 0;
}