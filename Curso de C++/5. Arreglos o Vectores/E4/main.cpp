#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numeros[5] = {1,2,3,4,5}; //Declaro un array o vector de 5 elementos

    cout << "\nArray y indice" << setw(15) << "Valor" << endl;
    // imprime el array numeros en orden inverso. i=4 porque el array tiene 5 elementos y siempre empieza desde la posicion 0 hasta n-1, en este caso n vale 5, por lo tanto 5-1=4
    for ( int i = 4; i >= 0; i-- )
    {
        cout << setw(10) << "numeros[ " << i << " ]" << setw(16) << numeros[i] << endl;
    } // fin de for

    cin.ignore();
    cin.get();
    return 0;
} // fin de main