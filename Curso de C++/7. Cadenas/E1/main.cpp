#include <iostream>
#include <string.h> // para usar la funcion strlen()
using namespace std;

int main()
{
    char texto[100];

    cout << "Digite su frase: ";
    cin.getline(texto, 100, '\n'); // lee la frase con espacios en blanco. cin.getline requiere tres parametros: Primero, el nombre del array o vector donde se almacena la cadena de caracteres. Segundo, el espacio total del array o vector. Tercero, cuando termina la lectura de caracteres, en este caso, terminara cuando se introduzca un salto de linea, o la tecla enter.

    // strlen() devuelve el numero de elementos que posee el array de tipo char, devuelve un entero. Si texto posee mas de 10 caracteres
    if ( strlen( texto ) > 10 )
    {
        cout << texto << endl;
    }
    else
        cout << "Su frase no supera los 10 caracteres." << endl;

    cin.ignore();
    cin.get();
    return 0;
} // fin de main