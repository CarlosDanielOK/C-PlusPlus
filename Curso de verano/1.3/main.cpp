#include <iostream>
using namespace std;

int main()
{
    unsigned int suma = 0;

    for ( int i = 2; i <= 1000; i+=2 )
    {
        suma = suma + i; // suma todos los numeros pares
    } // fin de for
    
    cout << "La suma de todos los numeros pares entre 2 y 1000 es: " << suma << endl;

    cin.ignore();
    cin.get();
    return 0;
} // fin de main