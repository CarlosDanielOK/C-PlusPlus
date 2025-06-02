#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char nombre[30];

    cout << "Digite su nombre en mayusculas: ";
    cin.getline( nombre, 30 );

    if ( nombre[0] == 'A' ) // si su nombre comienza por la letra A
        cout << strlwr( nombre ) << endl; // convierte su nombre a minusculas
    else
        cout << "El nombre " << nombre << " no comienza por la letra A." << endl;

    cin.ignore();
    cin.get();
    return 0;
}