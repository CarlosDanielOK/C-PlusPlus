#include <iostream>
using namespace std;

int main()
{
    int numeros[5] = {1,2,3,4,5}; // define un array o vector de 5 elementos
    int producto = 1; // almacena el producto de todos los elementos del array numeros

    for ( size_t i = 0; i < 5; i++ )
    {
        producto *= numeros[i]; // multiplica todos los elementos del array numeros y almacena el resultado en producto
    } // fin de for
    
    cout << "El resultado de la multiplicacion de todos los elementos del array o vector numeros es: " << producto << endl;

    cin.ignore();
    cin.get();
    return 0;
} // fin de main