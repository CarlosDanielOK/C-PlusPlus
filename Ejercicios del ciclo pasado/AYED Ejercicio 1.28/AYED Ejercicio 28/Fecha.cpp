//Fecha.cpp: Definiciones de las funciones miembro de Fecha. Este archivo contiene implementaciones de las funciones miembro cuyo prototipo está en Fecha.h

#include <iostream>
#include <string>
#include "Fecha.h" //Incluye la definición de la clase Fecha
using namespace std;

//Función que pide los datos al usuario y retorna un valor booleando, es decir, true o false
bool Fecha::pedirDatos()
{
	cout << "Ingrese el nombre o -1 para salir: ";
	getline( cin, nombre ); //Lee el nombre de la persona con espacios en blanco
	cout << "Ingrese la fecha de nacimiento en formato AAAAMMDD o -1 para salir: ";
	cin >> fecha;

	cin.ignore(); //Elimina el ultimo caracter en el bufer de entrada que es "\n" que se introduce al introducir la fecha y presionar enter, sino lo eliminamos causaria un error al ejecutar no dejandonos introducir los datos

	bool continua = nombre != "-1" || fecha != -1; //Esta expresión lógica: nombre != "-1" || fecha != -1 puede ser true o false, para que sea true con que solo una proposión sea true toda la expresión es true, para que sea false ambas proposiciones deben ser false. Y el resultado se le asigna a la variable de tipo bool "continua"

	return continua; //La instrucción return se utiliza para devolver un resultado a la función que la llamó, en este caso la función devuelve un bool, es decir, el valor de continua, true o false.
} //Fin de pedirDatos

//Función que convierte una fecha en dias y devuelve la cantidad de dias
int Fecha::convertirFechaEnDias()
{
	//Convierte la fecha en dias contando desde el dia 0001/01/01 (AAAAMMDD)
	
	//Primero obtiene el año, mes y dia del formato AAAAMMDD. Por ejemplo: 20201021
	int anio = fecha / 10000; //anio vale 2020
	int mes = ( fecha % 10000 ) / 100; //mes vale 10
	int dia = fecha % 100; //dia vale 21

	//Convierte los años trancurridos en dias
	dias = ( anio - 1 ) * 365; //anio - 1 porque el año actual (el valor de anio) todavia esta transcurriendo, no termino el año, por lo tanto si restamos a anio un año y lo multiplicamos por 365 (no tenemos en cuenta los años bisiestos) obtiene los años convertidos en dias

	//Verifica que años son bisiestos. Este ciclo for itera mientras que i sea menor que anio, no va contar el año actual (el valor de anio).
	for ( unsigned int i = 1; i < anio; i++ )
	{
		if ( ( i % 4 == 0 ) && ( ( i % 100 != 0 ) || ( i % 400 == 0 ) ) ) //Si el año es bisiesto
			dias++; //postincrementa dias, le suma un dia a los años convertidos en dias
	} //Fin de for

	//Verifica cuantos dias deben sumarse a "dias" según los dias transcurridos en el año actual de la fecha de nacimiento. Dependiendo del mes suma los dias transcurridos del año actual (el valor de anio) hasta la fecha de nacimiento de la persona
	if ( mes == 1 ) //Si el mes es enero
		dias += dias + dia; //suma la cantidad de dias transcurridos hasta la fecha de nacimiento
	else if ( mes == 2 ) //Si el mes es febrero
		dias += 31 + dia; //suma la cantidad de dias transcurridos (enero) hasta la fecha de nacimiento
	//A partir de aca asume que febrero tiene 28 dias. Despues verifica si es un año bisiesto
	else if ( mes == 3 ) //Si el mes es marzo
		dias += 59 + dia; //suma la cantidad de dias transcurridos (enero+febrero) hasta la fecha de nacimiento
	//El algoritmo funciona igual hasta llegar a diciembre
	else if ( mes == 4 ) //Si el mes es abril
		dias += 90 + dia;
	else if ( mes == 5 ) //Si el mes es mayo
		dias += 120 + dia;
	else if ( mes == 6 ) //Si el mes es junio
		dias += 151 + dia;
	else if ( mes == 7 ) //Si el mes es julio
		dias += 181 + dia;
	else if ( mes == 8 ) //Si el mes es agosto
		dias += 212 + dia;
	else if ( mes == 9 ) //Si el mes es septiembre
		dias += 243 + dia;
	else if ( mes == 10 ) //Si el mes es octubre
		dias += 273 + dia;
	else if ( mes == 11 ) //Si el mes es noviembre
		dias += 304 + dia;
	else if ( mes == 12 ) //Si el mes es diciembre
		dias += 334 + dia;

	//Verifica si el año actual (el valor de anio) es bisiesto para sumarle un dia a "dias" pero a partir de febrero porque en febrero es donde esta el dia más que se suma a un año bisiesto (366 dias)
	if ( mes > 2 )
		if ( ( anio % 4 == 0 ) && ( ( anio % 100 != 0 ) || ( anio % 400 == 0 ) ) ) //Si el año es bisiesto
			dias++; //suma un dia, porque antes asumimos que febrero tenia 28 dias y en realidad tiene 29

	return dias; //La instrucción return se utiliza para devolver un resultado a la función que la llamó, en este caso la función devuelve un entero, la fecha convertida en dias.
} //Fin de convertirFechaEnDias

//Función que compara las fechas convertidas en dias y decide cual es la persona más joven y más vieja. La función necesita un parámetro "i" que indica el numero de datos que se introducen, se utiliza en ciclo for en la función main
void Fecha::decidirPersonaJovenYVieja( int i )
{
	if ( i > 0 ) //Si i es mayor que 0 significa que los datos de la primera persona fueron ingresadas, por lo tanto
	{
		if ( dias > diasJoven ) //si la condición es true, significa que la nueva persona ingresada es la más joven
		{
			nJoven = nombre; //asigna el nuevo nombre de la persona más joven
			diasJoven = dias; //asigna la fecha (convertida en dias) de la nueva persona más joven
		}
		else if ( dias < diasVieja ) //si la condición es true, significa que la nueva persona ingresada es la más vieja
		{
			nVieja = nombre; //asigna el nuevo nombre de la persona más vieja
			diasVieja = dias; //asigna la fecha (convertida en dias) de la nueva persona más vieja
		}
	}
	else //De lo contrario, significa que i == 0, es decir, es la primera iteración y por lo tanto
	{
		//asigna el primer nombre y la primer fecha (convertida en dias) de la persona a los datos miembros para tener un valor de referencia a comparar con los datos de las siguientes personas ingresadas
		nJoven = nombre;
		diasJoven = dias;
		nVieja = nombre;
		diasVieja = dias;
	} //Fin de if...else
} //Fin de decidirPersonaJovenYVieja

//Función que imprime los resultados. Declaramos la función miembro imprimirResultados como const debido a que, en el proceso de mostrar los resultados la función no modifica (y no debería hacerlo) el objeto Fecha sobre el cual se llama. Al declararlo como const indicamos al compilador que “esta función no debe modificar el objeto sobre el cual se llama; y si lo hace, hay que generar un error de compilación”.
void Fecha::imprimirResultados() const
{
	cout << "\nLa persona mas joven es: " << nJoven << endl;
	cout << "La persona mas vieja es: " << nVieja << endl;
} //Fin de imprimirResultados