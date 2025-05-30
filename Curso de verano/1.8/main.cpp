#include <iostream>
using namespace std;

int main()
{
    int numero, suma = 0, cont = 0;
    double promedio = 0;

    for ( int i = 0; i < 50; i++ ) // pide 50 numeros enteros
    {
        cout << "Introduzca un numero: ";
        cin >> numero;

        if ( numero > 100 )
        {
            promedio += numero; // suma todos los numeros mayores que 100
            cont++; // incrementa en 1 el contador para luego calcular el promedio
        }
        else
        {
            if ( numero < -10 )
            {
                suma += numero; // suma todos los numeros menores que -10
            }
        } // fin de if...else
    } // fin de for

    promedio = promedio / cont; // calcula el promedio de los numeros mayores que 100

    cout << "\nEl promedio de los mayores que 100 es: " << promedio << endl;
    cout << "La suma de los menores que -10 es: " << suma << endl;

    cin.ignore();
    cin.get();
    return 0;
} // fin de main