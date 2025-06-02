#include <iostream>
using namespace std;

int main()
{
    int numeros[5] = {1,2,3,4,5}; // define un array o vector de 5 elementos
    int suma = 0; // almacena la suma de todos los elementos del array numeros

    for ( size_t i = 0; i < 5; i++ )
    {
        suma += numeros[i]; // suma todos los elementos del array numeros y almacena el resultado en suma
    } // fin de for
    
    cout << "El resultado de la suma de todos los elementos del array o vector numeros es: " << suma << endl;

    cin.ignore();
    cin.get();
    return 0;
} // fin de main