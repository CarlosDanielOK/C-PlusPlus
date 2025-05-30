// main.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
/* Desarrollar la siguientes funciones:
	bool fechaEsAnioBisiesto(int a);
   La función debe retornar true o false según el año a que recibe como parámetro sea o no bisiesto.
	int fechaDiasMes(int m,int a);
   La función debe retornar la cantidad de días que tiene el mes m; siendo 1 para enero, 2 para febrero, etcétera.
   Invocando a las funciones anteriores, desarrollar un programa que, dado un mes y un año que el usuario ingresará por teclado, le indica cuántos días tiene el mes.
 */

/* ALGORITMO BISIESTO
   Un año es bisiesto en el calendario Gregoriano, si es divisible entre 4 y no divisible entre 100, y también si es divisible entre 400.
   
   Considérese las siguientes proposiciones o enunciados lógicos:
	p: Es divisible entre 4
	~q: No es divisible entre 100
	r: Es divisible entre 400
   
   La fórmula lógica que se suele usar para establecer si un año es bisiesto sería cuando [p y ~q] ó [r] es verdadera, pero esta otra p y [~q ó r] sería más eficiente.
   
   [p y ¬q] ó [r] en C++
   return if ( ( anio % 4 == 0 && anio % 100 != 0 ) || anio % 400 == 0 );

   p y [~q ó r] en C++
   return if ( anio % 4 == 0 && ( anio % 100 != 0 || anio % 400 == 0 ) );
 */

#include <iostream>
using namespace std;

//Prototipos de función
bool fechaEsAnioBisiesto( int a );
int fechaDiasMes( int m, int a );

int main()
{
	int mes, anio;

	cout << "Digite un mes: ";
	cin >> mes;
	cout << "Digite un anio: ";
	cin >> anio;

	cout << "\nEl mes tiene: " << fechaDiasMes( mes, anio ) << " dias." << endl;

	system( "pause" );
	return 0;
}

//Definiciones de función
bool fechaEsAnioBisiesto( int a )
{
	//Si el año es bisiesto
	if ( a % 400 == 0 || ( a % 4 == 0 && a % 100 != 0 ) )
	{
		return true; //devuelve true
	}
	else //En caso contrario
	{
		return false; //devuelve false
	}
}

int fechaDiasMes( int m, int a )
{
	int dias;

	//Si m es enero, marzo, mayo, julio, agosto, octubre o diciembre
	if ( m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12 )
	{
		dias = 31; //asigna 31 dias, porque esos meses tienen 31 dias
	}
	//Si m es abril, junio, septiembre o noviembre
	else if ( m == 4 || m == 6 || m == 9 || m == 11 )
	{
		dias = 30; //asigna 30 dias, porque esos meses tienen 30 dias
	}
	//Si m es febrero
	else if ( m == 2 )
	{
		//Llama a la función fechaEsAnioBisiesto y le pasa a como argumento, la función al finalizar devuelve un resultado a la función que la llamó, en este caso la función fechaEsAnioBisiesto devuelve un bool, es decir, true o false.
		if ( fechaEsAnioBisiesto( a ) )
		{
			dias = 29; //asigna 29 dias, porque es un año bisiesto
		}
		else //De lo contrario, la función fechaEsAnioBisiesto devuelve false, por lo tanto
		{
			dias = 28; //asigna 28 dias, porque no es un año bisiesto
		} //Fin if...else anidado
	}

	return dias; //La instrucción return se utiliza para devolver un resultado a la función que la llamó, en este caso la función devuelve un int
}