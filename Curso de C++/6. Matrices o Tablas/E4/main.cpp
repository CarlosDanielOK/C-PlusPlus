#include <iostream>
#include <iomanip>
#include <random> // contiene herramientas de generación de números aleatorios de C++11
using namespace std;

int main()
{
    int filas, columnas;

    cout << "Digite el numero de filas de la matriz o array bidimensional: ";
    cin >> filas;
    cout << "Digite el numero de columnas de la matriz o array bidimensional: ";
    cin >> columnas;

    int matriz1[filas][columnas];
    int matriz2[filas][columnas];

    // usa el motor de generación de números aleatorios predeterminado para producir valores int seudoaleatorios del 1 al 100, distribuidos de manera uniforme
	default_random_engine motor( static_cast<unsigned int>( time( 0 ) ) ); // crea un objeto default_random_engine llamado motor. El argumento de su constructor siembra el motor de generación de números aleatorios con la hora actual. Si no pasamos un valor al constructor, se utilizará la semilla predeterminada y el programa producirá la misma secuencia de números cada vez que se ejecute.
	uniform_int_distribution<unsigned int> intAleatorio( 1, 100 ); // crea intAleatorio: un objeto uniform_int_distribution que produce valores unsigned int (según lo especificado por <unsigned int>) en el rango de 1 a 100 (como lo especifican los argumentos del constructor). La notación <unsigned int> indica que uniform_int_distribution es una plantilla de clase. En este caso, puede especificarse cualquier tipo entero entre los signos < y >.

    cout << "\nRellenando la matriz con numeros aleatorios..." << endl;
    // almacena en la matriz numeros aleatorios
    for ( size_t i = 0; i < filas; i++ ) // filas
    {
        for ( size_t j = 0; j < columnas; j++ ) // columnas
        {
            matriz1[i][j] = intAleatorio( motor ); // elije un número aleatorio del 1 al 100 y lo almacena en la matriz. La expresión intAleatorio(motor) devuelve un valor unsigned int en el rango de 1 a 100.
        } // fin de for
    } // fin de for

    cout << "\nMatriz completa: \n" << endl;
    for ( size_t i = 0; i < filas; i++ ) // filas
    {
        for ( size_t j = 0; j < columnas; j++ ) // columnas
        {
            cout << matriz1[i][j] << " ";
        } // fin de for
        cout << endl;
    } // fin de for
    
    cout << "\nCopiando contenido de la matriz a otra matriz..." << endl;
    for ( size_t i = 0; i < filas; i++ ) // filas
    {
        for ( size_t j = 0; j < columnas; j++ ) // columnas
        {
            matriz2[i][j] = matriz1[i][j]; // copia los elementos de matriz2 a matriz1
        } // fin de for
    } // fin de for
    
    cout << "\nMatriz nueva:\n" << endl;
    for ( size_t i = 0; i < filas; i++ ) // filas
    {
        for ( size_t j = 0; j < columnas; j++ ) // columnas
        {
            cout << matriz2[i][j] << " ";
        } // fin de for
        cout << endl;
    } // fin de for

    cin.ignore();
    cin.get();
    return 0;
} // fin de main