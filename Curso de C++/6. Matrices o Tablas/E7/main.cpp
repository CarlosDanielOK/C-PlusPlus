#include <iostream>
using namespace std;

int main()
{
    int filas, columnas;
    bool simetrica = false;

    cout << "Digite el numero de filas de la matriz o array bidimensional: ";
    cin >> filas;
    cout << "Digite el numero de columnas de la matriz o array bidimensional: ";
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

    cout << "\nMatriz original:" << endl;
    for ( size_t i = 0; i < filas; i++ ) // filas
    {
        for ( size_t j = 0; j < columnas; j++ ) // columnas
        {
            cout << matriz[i][j] << " ";
        } // fin de for

        cout << endl;
    } // fin de for

    // verifica si la matriz es cuadrada
    if ( filas == columnas ) // si el numero de filas es igual al numero de columnas es una matriz cuadrada
    {
        int coincidencia = 0; // almacena la cantidad de coincidencias entre la matriz original y transpuesta

        // imprime la matriz transpuesta
        cout << "\nMatriz transpuesta:" << endl;
        for ( size_t i = 0; i < filas; i++ ) // filas
        {
            for ( size_t j = 0; j < columnas; j++ ) // columnas
            {
                // haciendo un intercambio entre filas(i) y columnas(j) se obtiene la matriz transpuesta
                cout << matriz[j][i] << " ";
            } // fin de for

            cout << endl;
        } // fin de for
        
        // compara si la matriz original es igual que su matriz transpuesta
        for ( size_t i = 0; i < filas; i++ ) // filas
        {
            for ( size_t j = 0; j < columnas; j++ ) // columnas
            {
                if ( matriz[i][j] == matriz[j][i] ) // calcula la matriz transpuesta y compara si son iguales
                {
                    coincidencia++; // incrementa en uno
                }
            } // fin de for
        } // fin de for

        // verifica si la matriz es simetrica
        if ( coincidencia == filas * columnas ) // Ej: si es una matriz 3x3=9 elementos y hay 9 coincidencias
            simetrica = true;
        else
            simetrica = false;
    } // fin de if

    // si simetrica es true imprime que la matriz es simetrica
    ( simetrica == true ? cout << "\nLa matriz es simetrica." : cout << "\nLa matriz no es simetrica." );

    cin.ignore();
    cin.get();
    return 0;
} // fin de main