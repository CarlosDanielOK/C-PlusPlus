#include <iostream>
using namespace std;

int main()
{
    int filas, columnas;

    cout << "Digite el numero de filas: ";
    cin >> filas;
    cout << "Digite el numero de columnas: ";
    cin >> columnas;

    int matriz[filas][columnas]; // define una matriz o array bidimensional
    cout << endl;

    // almacena elementos en la matriz
    for ( size_t i = 0; i < filas; i++ ) // controla las filas de la matriz
    {
        for ( size_t j = 0; j < columnas; j++ ) // controla las columnas de la matriz
        {
            cout << "Digite un numero para matriz[ " << i << " ][ " << j << " ]: ";
            cin >> matriz[i][j];
        } // fin de for
    } // fin de for

    cout << endl;

    // imprime la matriz
    for ( size_t i = 0; i < filas; i++ )
    {
        for ( size_t j = 0; j < columnas; j++ )
        {
            cout << matriz[i][j] << " ";
        } // fin de for

        cout << endl;
    } // fin de for

    cin.ignore();
    cin.get();
    return 0;
} // fin de main