//============================================================================
// Name        : Prueba.cpp
// Author      : Carlos
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int tirar();

int main()
{
    int cara = 0, cruz = 0; // contadores

    for ( int i = 0; i < 100; i++ )
    {
        if ( tirar() == 0 ) // si es cara
        {
            cout << "Cara" << endl;
            cara++;
        } else
        {
            cout << "Cruz" << endl;
            cruz++;
        } // fin de if...else
    } // fin de for

    cout << cara << " vece salio Cara." << endl;
    cout << cruz << " veces salio Cruz." << endl;

    cin.ignore();
    cin.get();
    return 0;
} // fin de main

int tirar()
{
    srand( static_cast<unsigned int>(time( 0 )) ); // randomizar
    return 0 + rand() % 1; // elige un número aleatorio entre 0 y 1, y lo retorna
} // fin de tirar
