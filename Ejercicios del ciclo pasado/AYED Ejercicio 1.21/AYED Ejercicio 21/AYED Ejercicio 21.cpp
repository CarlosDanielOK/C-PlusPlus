// AYED Ejercicio 21.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Dados 50 valores numéricos enteros (se ingresan de a 1 por vez), informar: el promedio de los mayores que 100 y la suma de los menores que - 10.

#include <iostream>
using namespace std;

int main()
{
    int numero;
    unsigned int i = 0, mayores100 = 0; //Contadores
    double mayores = 0; //Almacena la suma de los numeros mayores que 100
    int menores = 0; //Almacena la suma de los numeros menores que -10

    //Controla cuantos numeros deben introducirse
    while ( i < 50 )
    {
        cout << "Ingrese un numero: ";
        cin >> numero;

        if ( numero > 100 )
        {
            mayores += numero; //suma los numeros para luego calcular su promedio
            mayores100++; //postincrementa mayores100
        }

        if ( numero < -10 )
        {
            menores += numero; //suma los numeros menores que -10
        }

        i++; //Postincrementa i
    } //Fin de while

    cout << "\nEl promedio de los mayores que 100 es: " << mayores / mayores100 << endl;
    cout << "La suma de los menores que - 10 es: " << menores << endl;

    return 0;
}