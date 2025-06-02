#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char texto[100] = "", textoInvertido[100] = "";

    cout << "Digite un palabra: ";
    cin.getline( texto, 100 );

    strcpy( textoInvertido, texto ); // copia el contenido de texto a textoInvertido
    strrev( textoInvertido ); // invierte la cadena de textoInvertido

    // La función strcmp compara su primer argumento con su segundo argumento de cadena, carácter por carácter. La función devuelve cero (0) si las cadenas son iguales, un valor negativo (-1) si la primera cadena es menor que la segunda, y un valor positivo (1) si la primera cadena es mayor que la segunda.
    if ( strcmp( texto, textoInvertido ) == 0 )
        cout << "Es palindromo." << endl;
    else // de lo contrario
        cout << "No es palindromo." << endl;

    cin.ignore();
    cin.get();
    return 0;
}