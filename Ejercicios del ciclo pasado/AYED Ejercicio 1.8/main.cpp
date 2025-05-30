//Dado un número de 8 dígitos que representa una fecha con formato aaaammdd, se pide mostrar por separado el día, el mes y el año de la fecha ingresada.

#include <iostream>
using namespace std;

int main()
{
    int fecha, anio, mes, dia; //Declaro variables de tipo entero

    //Pide y recibe la fecha
    cout << "Ingrese una fecha en formato AAAAMMDD: ";
    cin >> fecha;

    //Obtiene el año, el mes y el dia. Por ejemplo: 20201021
    anio = fecha / 10000; //anio vale 2020
    mes = (fecha%10000) / 100; //mes vale 10
    dia = fecha % 100; //dia vale 21

    //Imprime los resultados
    cout << "\nEl anio es: " << anio << endl;
    cout << "El mes es: " << mes << endl;
    cout << "El dia es: " << dia << endl;
    cout << anio << "/" << mes << "/" << dia << endl;

    return 0;
}