#include <iostream>
#include <cstring>
using namespace std;

// strcat( s1, s2 ); Adjunta la cadena s2 a s1. El primer carácter de s2 sobrescribe el carácter nulo de terminación de s1. Se devuelve el valor de s1.

int main()
{
    char s1[100] = "Naruto Uzumaki";
    char s2[] = " vs. Sasuke Uchiha";

    // La función strcat adjunta su segundo argumento (una cadena) a su primer argumento (un arreglo de caracteres que contiene una cadena). El primer carácter del segundo argumento reemplaza al carácter nulo ('\0') que termina la cadena en el primer argumento. Hay que asegurarse que el arreglo utilizado para almacenar la primera cadena sea lo bastante grande como para almacenar la combinación de la primera cadena, la segunda cadena y el carácter nulo de terminación (que se copia de la segunda cadena).
    cout << strcat( s1, s2 ) << endl;

    cin.ignore();
    cin.get();
    return 0;
} // fin de main