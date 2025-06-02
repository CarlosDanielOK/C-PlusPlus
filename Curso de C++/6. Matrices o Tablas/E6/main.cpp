#include <iostream>
using namespace std;

int main()
{
    int matriz1[3][3] = {1,2,3,
                        4,5,6,
                        7,8,9}; // define una matriz o array bidimensional de 3x3
    int matriz2[3][3] = {10,20,30,
                        40,50,60,
                        70,80,90}; // define una matriz o array bidimensional de 3x3

    cout << "Matriz1:" << endl;
    for ( size_t i = 0; i < 3; i++ ) // filas
    {
        for ( size_t j = 0; j < 3; j++ ) // columnas
        {
            cout << matriz1[i][j] << " ";
        } // fin de for

        cout << endl;
    } // fin de for

    cout << "\nMatriz2:" << endl;
    for ( size_t i = 0; i < 3; i++ ) // filas
    {
        for ( size_t j = 0; j < 3; j++ ) // columnas
        {
            cout << matriz2[i][j] << " ";
        } // fin de for

        cout << endl;
    } // fin de for

    cout << "\nSuma de matriz1 + matriz2:" << endl;
    for ( size_t i = 0; i < 3; i++ ) // filas
    {
        for ( size_t j = 0; j < 3; j++ ) // columnas
        {
            cout << matriz1[i][j] + matriz2[i][j] << " "; // suma ambas matrices y las imprime
        } // fin de for

        cout << endl;
    } // fin de for

    cin.ignore();
    cin.get();
    return 0;
} // fin de main