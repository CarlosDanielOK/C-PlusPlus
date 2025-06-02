#include <iostream>
#include <string.h> // para usar la funcion strlen()
using namespace std;

// strlen( s ); Determina la longitud de la cadena s. Se devuelve el número de caracteres antes del carácter nulo de terminación.

int main()
{
    int numeros[] = {1,2,3,4,5};
    char texto[] = "Naruto"; // Un arreglo de caracteres se puede inicializar mediante el uso de una literal de cadena. Es importante observar que la cadena "Naruto" contiene seis caracteres más un carácter especial de terminación de cadena, conocido como carácter nulo. Por ende, el arreglo texto en realidad contiene siste elementos. La constante tipo carácter que representa el carácter nulo es '\0' (barra diagonal inversa seguida de un cero). Todas las cadenas representadas mediante arreglos de caracteres terminan con este carácter. Un arreglo de caracteres que representa a una cadena siempre debe declararse con el tamaño sufi ciente como para contener el número de caracteres en la cadena, junto con el carácter nulo de terminación.
    char texto2[] = {'N','a','r','u','t','o','\0'}; // Los arreglos de caracteres también se pueden inicializar mediante constantes tipo carácter individuales en una lista inicializadora. Observe que hemos proporciona- do de manera explícita el carácter nulo de terminación como el último valor inicializador. Sin él, este arreglo representaría tan sólo un arreglo de caracteres, no una cadena. Si no se proporciona un carácter nulo de terminación para una cadena, se pueden producir errores lógicos.

    char nombre[100];

    cout << "Digite su nombre: ";
    cin.getline( nombre, 100,'\n' ); // lee el nombre con espacios en blanco. cin.getline requiere tres parametros: Primero, el nombre del array o vector donde se almacena la cadena de caracteres. Segundo, el espacio total del array o vector. Tercero, cuando termina la lectura de caracteres, en este caso, terminara cuando se introduzca un salto de linea, o la tecla enter.

    // los array o vectores que almacenan cadenas de caracteres, o vectores de tipo char, se pueden imprimir mediante cout. Los demas tipos como int, double, float, etc. no se pueden imprimir ya que al hacerlo solo se imprimira su direccion de memoria.
    // La función strlen recibe una cadena como argumento y devuelve el número de caracteres en la misma; el carácter nulo de terminación no se incluye en la longitud. La longitud es también el subíndice del carácter nulo.
    cout << "texto tiene " << strlen( texto ) << " elementos." << endl;
    cout << "texto2 tiene " << strlen( texto2 ) << " elementos." << endl;
    cout << "nombre tiene " << strlen( nombre ) << " elementos." << endl;
    // cout << "numeros tiene " << strlen( numeros ) << " elementos." << endl; No se puede porque es un int

    cin.ignore();
    cin.get();
    return 0;
} // fin de main