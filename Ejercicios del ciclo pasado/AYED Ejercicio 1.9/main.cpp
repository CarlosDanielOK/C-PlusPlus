//Dada una terna de números naturales, que representan el día, mes y año de una fecha, se pide unificarlos en un único valor numérico entero de 8 dígitos (aaaammdd) tal que los primeros 4 dígitos representen el año, los dos siguientes el mes y los dos últimos el día.

#include <iostream>
using namespace std;

int main()
{
    int anio, mes, dia; //Declaro tres variables de tipo entero
    int aaaammdd; //Declaro una variable de tipo entero que almacena la fecha de 8 digitos

    //Pide y recibe la fecha
    cout << "Digite un anio en formato AAAA: ";
    cin >> anio;
    cout << "Digite un mes en formato MM: ";
    cin >> mes;
    cout << "Digite un dia en formato DD: ";
    cin >> dia;

    /*
     * Calcula la fecha en un formato de 8 digitos. Por ejemplo: anio=2020, mes=04, dia=05; 2020*10000 = 20200000, 04*100 = 400
     * 20200000
     * +    400
     * --------
     * 20200400
     * +     05
     * --------
     * 20200405 ---> Asi unificamos en un único valor numérico entero de 8 dígitos (aaaammdd) el anio, mes y dia tal que los primeros 4 dígitos representen el año, los dos siguientes el mes y los dos últimos el día.
     */

    aaaammdd = anio*10000 + mes*100 + dia;

    cout << "\nLa fecha en formato AAAAMMDD es: " << aaaammdd << endl; //Imprime la fecha

    return 0;
}