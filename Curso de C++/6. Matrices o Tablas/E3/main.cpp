#include <iostream>
using namespace std;

int main()
{
    int matriz1[2][2] = {1,2,
                         3,4}; // define una matriz o array bidimensional de 2x2
    int matriz2[2][2] = {}; // define e inicializa los elementos de la matriz o array bidimensional con 0

    // copia los elementos de matriz1 a matriz2
    for ( size_t i = 0; i < 2; i++ ) // filas
    {
        for ( size_t j = 0; j < 2; j++ ) // columnas
        {
            matriz2[i][j] = matriz1[i][j]; // copia los elementos de matriz1 a matriz2
        } // fin de for
    } // fin de for

    // imprime los elementos de matriz2
    for ( size_t i = 0; i < 2; i++ ) // filas
    {
        for ( size_t j = 0; j < 2; j++ ) // columnas
        {
            cout << matriz2[i][j] << " ";
        } // fin de for

        cout << endl;
    } // fin de for

    cin.ignore();
    cin.get();
    return 0;
} // fin de main