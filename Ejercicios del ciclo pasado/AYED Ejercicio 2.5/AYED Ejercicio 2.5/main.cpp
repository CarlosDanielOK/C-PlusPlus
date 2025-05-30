// main.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
/*
 * Desarrollar la siguiente función:
    void fechaDividir(int f,int& a,int& m,int& d);
   La función recibe en f una fecha representada como un entero de 8 dígitos con formato aaaammdd y debe dividir sus componentes y asignarlos a los parámetros a, m y d (año, mes y día respectivamente).
   Invocando a fechaDividir, desarrollar un programa donde el usuario ingresa una fecha con formato aaaammdd y obtiene sus atributos por separado.
 */

 /*
  * Un parámetro recibe una copia del VALOR del argumento. Por esto, si en la función modificamos el valor de algún parámetro esa modificación sólo tendrá alcance local, y no trascenderá más allá de la misma función.
  * Para que una función pueda modificar las valores de los argumentos que recibe como parámetros, debe recibirlos por REFERENCIA. Para esto, alcanza con anteponer el símbolo & (ampersand) al nombre del parámetro que la función necesita modificar.
  * Por ejemplo:
     void nombreFuncion( int &a, int &b )
     ó
     void nombreFuncion( int& a, int& b )
    Ambas son válidas.
  */

#include <iostream>
using namespace std;

//Prototipo de función
void fechaDividir( int f, int& a, int& m, int& d );

int main()
{
    int fecha, anio = 0, mes = 0, dia = 0;

    cout << "Ingrese una fecha en formato AAAAMMDD: ";
    cin >> fecha;

    fechaDividir( fecha, anio, mes, dia );

    //Imprime los resultados
    cout << "Anio: " << anio << endl;
    cout << "Mes: " << mes << endl;
    cout << "Dia: " << dia << endl;

    system( "pause" );
    return 0;
}

//Definición de función
void fechaDividir( int f, int& a, int& m, int& d )
{
    //Obtiene el año, el mes y el dia. Por ejemplo: 20201021
    a = f / 10000; //a vale 2020
    m = ( f % 10000 ) / 100; //m vale 10
    d = f % 100; //d vale 21
}