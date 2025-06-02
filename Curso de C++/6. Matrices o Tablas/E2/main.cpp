#include <iostream>
using namespace std;

int main()
{
    int matriz[3][3] = {1,2,3,
                        4,5,6,
                        7,8,9}; // define una matriz o array bidimensional de 3x3

    cout << "Matriz completa:\n" << endl;
    for ( size_t i = 0; i < 3; i++ )
    {
        for ( size_t j = 0; j < 3; j++ )
        {
            cout << matriz[i][j] << " ";
        } // fin de for

        cout << endl;
    } // fin de for    
    
    cout << "\nPrincipal diagonal de la matriz:\n" << endl;
    for ( size_t i = 0; i < 3; i++ )
    {
        for ( size_t j = 0; j < 3; j++ )
        {
            if ( i == j ) // si el numero de fila es igual al numero de columna, ej: [0][0],[1][1],[2][2]
            {
                cout << matriz[i][j] << " "; // imprime la diagonal principal de la matriz
            } // fin de if
        } // fin de for
    } // fin de for    

    cin.ignore();
    cin.get();
    return 0;
} // fin de main