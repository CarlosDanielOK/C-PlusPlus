//============================================================================
// Name        : Hola.cpp
// Author      : Carlos
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <conio.h>
#include "LibroCalificaciones.h" //Incluye la definición de la clase LibroCalificaciones
using namespace std;

int main()
{
	//Crea un objeto LibroCalificaciones llamado miLibroCalificaciones y pasa el nombre del curso al constructor
	LibroCalificaciones miLibroCalificaciones( "CS101 Programacion en C++" );

	miLibroCalificaciones.mostrarMensaje(); //Llamo a la función miembro mostrarMensaje de miLibroCalificaciones para mostrar un mensaje de bienvenida al usuario.

	miLibroCalificaciones.determinarPromedioClase(); //Llamo a la función miembro determinar￾PromedioClase de miLibroCalificaciones para permitir que el usuario introduzca 10 calificaciones, para las cuales la función miembro posteriormente calcula e imprime el promedio.

	getch();
	return 0;
} //Fin de main
