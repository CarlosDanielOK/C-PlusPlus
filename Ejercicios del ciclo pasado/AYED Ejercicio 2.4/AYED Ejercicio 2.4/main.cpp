// main.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
/*
 * Desarrollar la siguiente función:
    int fechaUnificar(int anio,int mes,int dia);
   La función recibe debe unificar los valores de anio, mes y dia en un número entero de 8 dígitos, con formato aaaammdd. Por ejemplo: si anio fuese 2020, mes 10 y dia 15 entonces el valor de retorno de fechaUnificar será: 20201015.
   Invocando a fechaUnificar, desarrollar un programa donde el usuario ingresa el día, mes y año de una fecha (como valores separados) y obtiene por consola la fecha unificada con formato aaaammdd.
 */

#include <iostream>
using namespace std;

//Prototipo de función
int fechaUnificar( int anio, int mes, int dia );

int main()
{
    int anio, mes, dia; //Declaro tres variables de tipo entero

    //Pide y recibe la fecha
    cout << "Digite un anio en formato AAAA: ";
    cin >> anio;
    cout << "Digite un mes en formato MM: ";
    cin >> mes;
    cout << "Digite un dia en formato DD: ";
    cin >> dia;

    //Llama a la función y pasa anio, mes, dia como argumentos
    cout << "\nFecha en formato AAAAMMDD: " << fechaUnificar( anio, mes, dia ) << endl;

	system( "pause" );
	return 0;
}

//Definición de función
int fechaUnificar( int anio, int mes, int dia )
{
    /*
     * Calcula la fecha en un formato de 8 digitos. Por ejemplo: anio=2020, mes=04, dia=05; 2020*10000 = 20200000, 04*100 = 400
       20200000
       +    400
       --------
       20200400
       +     05
       --------
       20200405 ---> Asi unificamos en un único valor numérico entero de 8 dígitos (AAAAMMDD) el anio, mes y dia tal que los primeros 4 dígitos representen el año, los dos siguientes el mes y los dos últimos el día.
     */

    return anio * 10000 + mes * 100 + dia; //Retorna a la función que la llamo la fecha en formato AAAAMMDD
}