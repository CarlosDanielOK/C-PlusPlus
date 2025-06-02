#include <iostream>
#include <string.h> // para usar la funcion strcpy()
using namespace std;

// strcpy( s1, s2 ); Copia la cadena s2 en el arreglo de caracteres s1. Se devuelve el valor de s1.

int main()
{
    char nombre[] = "Naruto";
    char nombre2[10];

    // La función strcpy copia su segundo argumento (una cadena, en este caso, nombre) en su primer argumento (en este caso, nombre2): un arreglo de caracteres que debe ser lo bastante grande como para almacenar la cadena y su carácter nulo de terminación (que también se copia).
    strcpy( nombre2, nombre );

    cout << nombre << endl;
    cout << nombre2 << endl;

    cin.ignore();
    cin.get();
    return 0;
} // fin de main