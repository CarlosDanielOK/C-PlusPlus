#include <iostream>
#include <string.h> // para usar la funcion strcmp()
using namespace std;

// strcmp( s1, s2 ); Compara la cadena s1 con la cadena s2. La función devuelve un valor de cero, menor que cero o mayor que cero si s1 es igual a, menor que, o mayor que s2, respectivamente.

int main()
{
    char texto[100] = "Hola";
    char texto2[100] = "Hola";

    // La función strcmp compara su primer argumento con su segundo argumento de cadena, carácter por carácter. La función devuelve cero (0) si las cadenas son iguales, un valor negativo (-1) si la primera cadena es menor que la segunda, y un valor positivo (1) si la primera cadena es mayor que la segunda.
    if ( strcmp( texto, texto2 ) == 0 ) // si texto es igual a texto2
    {
        cout << texto << " es igual a " << texto2 << endl;
    }
    else // de lo contrario, si texto no es igual a texto2
    {
        cout << texto << " no es igual a " << texto2 << endl;
    }

    cin.ignore();
    cin.get();
    return 0;
} // fin de main