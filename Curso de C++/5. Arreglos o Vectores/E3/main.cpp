#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numeros[100], n; //Declaro el array numeros. n sera el numero de elementos que almacenara el vector o array

    cout << "Digite la cantidad de elementos que almacenara el vector o array: ";
    cin >> n;
    cout << endl;

    // pide y almacena los n elementos del array numeros.
    for (size_t i = 0; i < n; i++)
    {
        cout << "Digite un numero: ";
        cin >> numeros[i]; // Ejemplo: Si el primer número que digita es 1 se guardara en numeros[0] (porque i empieza su conteo desde 0)
    } // fin de for
    
    // Ahora voy a mostrar los numeros del vector con sus indices asociados.
    cout << "\nArray y indice" << setw(15) << "Valor" << endl;

    for ( size_t i = 0; i < n; i++ )
    {
        cout << setw(10) << "numeros[ " << i << " ]" << setw(16) << numeros[i] << endl;
    } // fin de for

    cin.ignore();
    cin.get();
    return 0;
} // fin de main