#include <iostream>
using namespace std;

int main()
{
    int numeros[] = {1,2,3,4,5};
    char texto[] = "Naruto"; // Un arreglo de caracteres se puede inicializar mediante el uso de una literal de cadena. Es importante observar que la cadena "Naruto" contiene seis caracteres más un carácter especial de terminación de cadena, conocido como carácter nulo. Por ende, el arreglo texto en realidad contiene siste elementos. La constante tipo carácter que representa el carácter nulo es '\0' (barra diagonal inversa seguida de un cero). Todas las cadenas representadas mediante arreglos de caracteres terminan con este carácter. Un arreglo de caracteres que representa a una cadena siempre debe declararse con el tamaño sufi ciente como para contener el número de caracteres en la cadena, junto con el carácter nulo de terminación.
    char texto2[] = {'N','a','r','u','t','o','\0'}; // Los arreglos de caracteres también se pueden inicializar mediante constantes tipo carácter individuales en una lista inicializadora. Observe que hemos proporciona- do de manera explícita el carácter nulo de terminación como el último valor inicializador. Sin él, este arreglo representaría tan sólo un arreglo de caracteres, no una cadena. Si no se proporciona un carácter nulo de terminación para una cadena, se pueden producir errores lógicos.

    char nombre[100];

    cout << "Digite su nombre: ";

    // En algunos casos es conveniente recibir como entrada una línea completa de texto y colocarla en un arreglo. Para este fin, C++ proporciona la función cin.getline en el archivo de encabezado <iostream>. La función cin.getline recibe tres argumentos: un arreglo de caracteres en el que se va a almacenar la línea de texto, una longitud y un carácter delimitador. La función deja de leer caracteres al momento de encontrar el carácter delimitador '\n', cuando se introduce el indicador de fin de archivo o cuando el número de caracteres leídos hasta ese momento sea uno menos que la longitud especificada en el segundo argumento (el último carácter en el arreglo se reserva para el carácter nulo de terminación). Al encontrar el carácter delimitador, éste se lee y se descarta. El tercer argumento para cin.getline tiene '\n' como valor predeterminado, por lo que la llamada a la función anterior podría escribirse de la siguiente manera: cin.getline( nombre, 100 );
    cin.getline( nombre, 100,'\n' );

    // los array o vectores que almacenan cadenas de caracteres, o vectores de tipo char, se pueden imprimir mediante cout. Los demas tipos como int, double, float, etc. no se pueden imprimir ya que al hacerlo solo se imprimira su direccion de memoria.
    cout << texto << endl;
    cout << texto2 << endl;
    cout << nombre << endl;
    cout << numeros << endl; // imprime la direccion de memoria de numeros

    cin.ignore();
    cin.get();
    return 0;
} // fin de main