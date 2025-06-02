#include <iostream>
#include <string.h> // para usar la funcion strcpy()
using namespace std;

int main()
{
    char texto[100];
    char texto2[100];

    cout << "Digite su frase: ";
    cin.getline( texto, 100, '\n' ); // lee la frase con espacios en blanco. cin.getline requiere tres parametros: Primero, el nombre del array o vector donde se almacena la cadena de caracteres. Segundo, el espacio total del array o vector. Tercero, cuando termina la lectura de caracteres, en este caso, terminara cuando se introduzca un salto de linea, o la tecla enter.

    strcpy( texto2, texto ); // copia el contenido de texto a texto2

    cout << texto << endl;
    cout << texto2 << endl;

    cin.ignore();
    cin.get();
    return 0;
} // fin de main