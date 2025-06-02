#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char letras1[] = {'a','b','c','d','e'};
    char letras2[] = {'f','g','h','i','j'};
    char letras3[10];

    // copia los elementos de letras1 a letras3
    for ( size_t i = 0; i < 5; i++ )
    {
        letras3[i] = letras1[i];
    }

    // copia los elementos de letras2 a letras3 a partir de la posicion letras3[5]
    for ( size_t i = 0; i < 5; i++ )
    {
        letras3[i+5] = letras2[i]; // i+5 porque letras1 se copio en letras3 desde letras3[0] hasta la posicion letras3[4], y letras2 debe copiarse a partir de la posicion letras3[5] hasta letras3[9], y 0+5=5, entonces letras3 en la primera iteracion seria letras3[5], en la segunda seria letras3[6], y asi sucesivamente.
    }

    // imprime letras3
    for ( size_t i = 0; i < 10; i++ )
    {
        cout << letras3[i] << " ";
    }

    cin.ignore();
    cin.get();
    return 0;
} // fin de main