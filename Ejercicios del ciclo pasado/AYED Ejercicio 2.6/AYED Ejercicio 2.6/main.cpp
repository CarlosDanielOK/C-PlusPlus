// main.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Desarrollar la función today que retorna la fecha actual expresada como un entero de 8 dígitos con formato aaaammdd. int today();

// En C++ desarrollaremos la función getDate, que devuelve el día, mes y año actual en tres parámetros que recibe por referencia. No es importante entender el código que expondremos a continuación. Sólo debemos saber que, desde ahora, cada vez que sea necesario podremos obtener la fecha del sistema invocando a la función getDate.

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <time.h> //Libreria necesaria para utilizar la función getDate
using namespace std;

//Asigna la fecha actual a los parametros dia, mes y anio
void getDate( int& dia, int& mes, int& anio )
{
    //Fecha actual expresada en segundos
    time_t timestamp;
    time( &timestamp );

    //Separo la fecha actual en atributos
    struct tm* fechaActual = localtime( &timestamp );
    dia = fechaActual->tm_mday;
    mes = fechaActual->tm_mon + 1;
    anio = fechaActual->tm_year + 1900;
}

//Prototipo de función
int today();

int main()
{
    cout << "Fecha en formato AAAAMMDD: " << today() << endl;

    return 0;
}

//Definición de función
int today()
{
    int d, m, a; //Variables locales que almacenaran el dia, mes y año actual del sistema

    //Obtengo la fecha actual invocando a getDate, pasa por referencia d, m y a como argumentos
    getDate( d, m, a );

    //Ahora d almacena el dia actual del sistema, m el mes del sistema, a el año del sistema
    cout << "Dia: " << d << endl;
    cout << "Mes: " << m << endl;
    cout << "Anio: " << a << endl;

    return a * 10000 + m * 100 + d; //Retorna la fecha actual del sistema en formato AAAAMMDD
}