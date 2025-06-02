#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numeros[100] = {1,2,10,3,4}, suma = 0, mayor;

    for ( size_t i = 0; i < 5; i++ )
    {
        suma += numeros[i]; // almacena la suma de todos los elementos del array

        // calcula el mayor elemento del array o vector
        if ( i > 0 ) // si no es la primera iteracion, es decir, sino es el primer numero del array
        {
            if ( numeros[i] > mayor ) // compara si el siguiente numero es mayor al valor de "mayor"
                mayor = numeros[i];
        }
        else // de lo contrario, asigna el primer valor del array como mayor para tenerlo de referencia
        {
            mayor = numeros[i];
        } // fin de if...else
    }

    // si el mayor elemento del array es igual a la suma de los demas elementos del array (excepto el mayor)
    if ( mayor == suma - mayor )
        cout << "El numero " << mayor << " equivale a la suma de los demas elementos del array." << endl;
    else
        cout << "No existe un numero que equivale a la suma de los demas elementos del array." << endl;

    cin.ignore();
    cin.get();
    return 0;
} // fin de main