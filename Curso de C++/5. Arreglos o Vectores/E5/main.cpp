#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numeros[100], tamanioArreglo, mayor;

    cout << "Digite la cantidad de elementos que tendra el array o vector: ";
    cin >> tamanioArreglo;
    cout << endl;

    for ( size_t i = 0; i < tamanioArreglo; i++ )
    {
        cout << "Digite un numero entero para el array numeros[ " << i << " ]: ";
        cin >> numeros[i];

        // calcula el mayor elemento del array o vector
        if ( i > 0 ) // si no es la primera iteracion, es decir, sino es el primer numero ingresado
        {
            if ( numeros[i] > mayor ) // compara si el nuevo numero es mayor al valor de "mayor"
                mayor = numeros[i];
        }
        else // de lo contrario, asigna el primer valor ingresado como mayor para tenerlo de referencia
        {
            mayor = numeros[i];
        } // fin de if...else
    } // fin de for
    
    cout << "\nEl mayor elemento del array o vector numeros es: " << mayor << endl;

    cin.ignore();
    cin.get();
    return 0;
} // fin de main