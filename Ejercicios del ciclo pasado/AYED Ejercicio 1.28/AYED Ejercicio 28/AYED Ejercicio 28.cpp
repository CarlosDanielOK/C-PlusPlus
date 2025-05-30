// AYED Ejercicio 28.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Se ingresa un conjunto de duplas (n, f) siendo n el nombre de una persona y f su fecha de nacimiento, informar el nombre de la persona más joven y el de la más vieja.

#include <iostream>
#include <string> //El programa usa la clase string estándar de C++
#include "Fecha.h" //Incluye la definición de la clase Fecha
using namespace std;

int main()
{
	//Crea un objeto Fecha
	Fecha miFecha;

	bool continua = true; //Crea una variable local de tipo bool. Se inicializa en true para que pueda entrar en el ciclo for

	for ( unsigned int i = 0; continua == true; i++ ) //Mientras que continua sea true, itera
	{
		continua = miFecha.pedirDatos(); //Llama a la función miembro pedirDatos de un objeto Fecha y devuelve un valor bool que sera asignado a la variable de tipo bool "continua"

		if ( continua == true ) //Si "continua" es true, ejecuta las intrucciones
		{
			miFecha.convertirFechaEnDias(); //Llama a la función miembro convertirFechaEnDias de un objeto Fecha
			miFecha.decidirPersonaJovenYVieja( i ); //Llama a la función miembro decidirPersonaJovenYVieja de un objeto Fecha y se pasa el valor de i como argumento al parámetro de la función miembro decidirPersonaJovenYVieja para que esta pueda realizar su tarea
		}
		else //De lo contrario
		{
			break; //Sale del ciclo for
		} //Fin de if...else
	} //Fin de for

	miFecha.imprimirResultados(); //Llama a la función miembro imprimirResultados de un objeto Fecha

	return 0;
}