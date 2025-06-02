#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numeros1[5], numeros2[5];

    // pide y almacena los elementos del array numeros1
    for ( size_t i = 0; i < 5; i++ )
    {
        cout << "Digite un numero entero para numeros1[ " << i << " ]: ";
        cin >> numeros1[i];
    }

    // copia los elementos de numeros1 a numeros2 multiplicados por 2
    for ( size_t i = 0; i < 5; i++ )
    {
        numeros2[i] = numeros1[i] * 2;
    }

    cout << "\nMostrando los elementos del array multiplicados por 2." << endl;

    // imprime numeros2
    for ( size_t i = 0; i < 5; i++ )
    {
        cout << numeros2[i] << " ";
    }

    cin.ignore();
    cin.get();
    return 0;
} // fin de main