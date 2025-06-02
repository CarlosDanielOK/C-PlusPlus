#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char palabra1[30], palabra2[30];

    cout << "Digite una palabra: ";
    cin.getline( palabra1, 30 );
    cout << "Digite una palabra: ";
    cin.getline( palabra2, 30 );

    // convierte de minusculas a mayusculas
    strupr( palabra1 );
    strupr( palabra2 );

    if ( strcmp( palabra1, palabra2 ) == 0 )
        cout << palabra1 << " es igual a " << palabra2 << endl;
    else
        cout << palabra1 << " no es igual a " << palabra2 << endl;

    cin.ignore();
    cin.get();
    return 0;
}