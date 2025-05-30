#include <iostream>
using namespace std;

int main()
{
    int fecha;

    cout << "Digite una fecha en formato AAAAMMDD: ";
    cin >> fecha;

    cout << "Dia: " << fecha % 100 << endl; // calcula el dia y lo imprime
    cout << "Mes: " << (fecha % 10000) / 100 << endl; // calcula el mes y lo imprime
    cout << "Anio: " << fecha / 10000 << endl; // calcula el año y lo imprime

    cin.ignore();
    cin.get();
    return 0;
} // fin de main