#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char texto1[100], texto2[100];

    cout << "Digite una cadena de caracteres: ";
    cin.getline( texto1, 100 );
    cout << "Digite otra cadena de caracteres: ";
    cin.getline( texto2, 100 );

    // La función strcmp compara su primer argumento con su segundo argumento de cadena, carácter por carácter. La función devuelve cero (0) si las cadenas son iguales, un valor negativo (-1) si la primera cadena es menor que la segunda, y un valor positivo (1) si la primera cadena es mayor que la segunda.
    if ( strcmp( texto1, texto2 ) == 0 )
        cout << texto1 << " es igual a " << texto2 << endl;
    else if ( strcmp( texto1, texto2 ) < 0 ) // si devuelve un valor negativo
        cout << texto1 << " es menor que " << texto2 << endl;
    else if ( strcmp( texto1, texto2 ) > 0 ) // si devuelve un valor positivo
        cout << texto1 << " es mayor que " << texto2 << endl;

    cin.ignore();
    cin.get();
    return 0;
}