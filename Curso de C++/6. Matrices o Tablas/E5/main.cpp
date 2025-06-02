#include <iostream>
using namespace std;

int main()
{
    int matriz[3][3] = {}; // define una matriz o array bidimensional de 3x3 inicializadas en 0

    // almacena elementos en la matriz
    for ( size_t i = 0; i < 3; i++ ) // controla las filas de la matriz
    {
        for ( size_t j = 0; j < 3; j++ ) // controla las columnas de la matriz
        {
            cout << "Digite un numero para matriz[ " << i << " ][ " << j << " ]: ";
            cin >> matriz[i][j];
        } // fin de for
    } // fin de for

    cout << "\nMatriz original:" << endl;
    for ( size_t i = 0; i < 3; i++ ) // filas
    {
        for ( size_t j = 0; j < 3; j++ ) // columnas
        {
            cout << matriz[i][j] << " ";
        } // fin de for

        cout << endl;
    } // fin de for

    cout << "\nMatriz transpuesta:" << endl;
    for ( size_t i = 0; i < 3; i++ ) // filas
    {
        for ( size_t j = 0; j < 3; j++ ) // columnas
        {
            // haciendo un intercambio entre filas(i) y columnas(j) se obtiene la matriz transpuesta
            cout << matriz[j][i] << " ";
        } // fin de for

        cout << endl;
    } // fin de for

    cin.ignore();
    cin.get();
    return 0;
} // fin de main