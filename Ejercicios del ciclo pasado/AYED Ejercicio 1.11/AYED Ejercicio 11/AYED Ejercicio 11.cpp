// AYED Ejercicio 11.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Dados el número de un mes (1 para enero, 2 para febrero, etcétera) y el año al que corresponde, informar cuántos días tiene el mes, considerando la posibilidad del que el año sea bisiesto.

#include <iostream>
using namespace std;

int main()
{
	int anio, mes; //Declara variables de tipo entero

	//Pide y lee los datos
	cout << "Digite el anio: "; cin >> anio;
	cout << "Digite el mes: "; cin >> mes;

	//Verifica si el mes es enero, marzo, mayo, julio, agosto, octubre o diciembre
	if ( mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12 )
	{
		cout << "\nEl mes " << mes << " tiene 31 dias." << endl; //Imprime un mensaje
	}
	//De lo contrario, si el mes es abril, junio, septiembre o noviembre
	else if ( mes == 4 || mes == 6 || mes == 9 || mes == 11 )
	{
		cout << "\nEl mes " << mes << " tiene 30 dias." << endl; //Imprime un mensaje
	}
	//De lo contrario, si el mes febrero
	else if ( mes == 2 )
	{
		if ( ( anio % 4 == 0 ) && ( ( anio % 100 != 0 ) || ( anio % 400 == 0 ) ) ) //Si el año es bisiesto
			cout << "\nEl mes " << mes << " tiene 29 dias." << endl; //Imprime un mensaje
		else //Sino
			cout << "\nEl mes " << mes << " tiene 28 dias." << endl; //Imprime un mensaje
	} //Fin de if...else

	return 0;
}