/*
 * LibroCalificaciones.cpp
 *
 *  Created on: 17 sep. 2020
 *      Author: Carlos Daniel
 */

#include <iostream>
#include "LibroCalificaciones.h" //Incluye la definición de la clase LibroCalificaciones
using namespace std;

//El constructor inicializa a nombreCurso con la cadena que se suministra como argumento
LibroCalificaciones::LibroCalificaciones( string nombre )
{
	establecerNombreCurso( nombre ); //Valida y almacena nombreCurso
} //Fin de la clase LibroCalificaciones

//Función para establecer el nombre del curso; asegura que el nombre del curso tenga cuando menos 25 caracteres
void LibroCalificaciones::establecerNombreCurso( string nombre )
{
	if ( nombre.size() <= 25 ) //Si la condición es verdadera, es decir, si nombre tiene 25 caracteres o menos
		nombreCurso = nombre; //almacena el nombre del curso en el objeto
	else //Si la condición es falsa, es decir, si nombre tiene más de 25 caracteres
	{ //establece nombreCurso con los primeros 25 caracteres del parámetro nombre
		nombreCurso = nombre.substr( 0, 25 ); //Selecciona los primeros 25 caracteres. Empieza en 0, longitud de 25

		//cerr nos permite imprimir cadenas de caracteres en color rojo (lo podemos utilizar para reportar un error o una advertencia)
		cerr << "El nombre \"" << nombre
				<< "\" excede la longitud máxima (25).\n"
				<< "Se limito nombreCurso a los primeros 25 carácteres.\n"
				<< endl;
	} //Fin de if...else
} //Fin de la función establecerNombreCurso

//Función para obtener el nombre del curso
string LibroCalificaciones::obtenerNombreCurso() const
{
	return nombreCurso; //Devuelve nombreCurso del objeto.
} //Fin de la función obtenerNombreCurso

//Función que muestra un mensaje de bienvenida al usuario de LibroCalificaciones
void LibroCalificaciones::mostrarMensaje() const
{
	cout << "Bienvenido al libro de calificaciones para\n"
			<< obtenerNombreCurso() << endl;
} //Fin de la función mostrarMensaje

//Función que determina el promedio de la clase, con base en las 10 calificaciones escritas por el usuario
void LibroCalificaciones::determinarPromedioClase() const
{
	//Fase de inicialización
	int total = 0; //Declaro una variable local de tipo entero y la inicializo en 0, almacena la suma de las calificaciones introducidas por el usuario
	unsigned int contadorCalificacion = 1; //Declaro una variable local de tipo entero no signado (unsigned int), significa que puede almacenar sólo valores no negativos (es decir, de 0 en adelante); declaro la variable como unsigned int ya que se usa para contar de 1 a 10 en este programa (todos son valores positivos). Almacena el número de la calificación a introducir a continuación.

	//Fase de procesamiento
	while ( contadorCalificacion <= 10 ) //Itera 10 veces. Mientras que el valor de contadorCalificacion sea menor o igual a 10, la instrucción while debe continuar ejecutando el ciclo, ejecutará en forma repetida las instrucciones entre las llaves que delimitan su cuerpo (lo que también se conoce como ITERAR).
	{
		cout << "Escriba una calificación: "; //Pide la entrada

		int calificacion = 0; //Variable local que almacena el valor de la calificación introducida por el usuario. La variable calificacion se declara en el cuerpo de la instrucción while debido a que se utiliza sólo en el ciclo.

		cin >> calificacion; //Lee la calificación escrita por el usuario y se asigna a la variable calificacion. Recibe como entrada la siguiente calificación.

		total = total + calificacion; //Se suma la nueva cali￾ficacion escrita por el usuario al total, y se asigna el resultado a total, que sustituye su valor anterior. Suma la calificación al total.

		contadorCalificacion = contadorCalificacion + 1; //Incrementa el contador por 1. Se suma 1 a contadorCalificacion para indicar que el programa ha procesado la calificación actual y está listo para recibir la siguiente calificación del usuario. Al incrementar a contadorCalificacion en cada iteración, en un momento dado su valor excederá a 10. En ese momento, el ciclo while termina debido a que su condición (línea 54) se vuelve falsa.
	} //Fin de while

	//Fase de determinación
	int promedio = total / 10; //Cuando el ciclo termina se realiza el cálculo del promedio y se asigna su resultado a la variable promedio. Está bien mezclar la declaración con el cálculo. total y 10 son enteros, al dividir dos enteros se produce una división entera: se TRUNCA cualquier parte fraccio￾naria del cálculo (es decir, se descarta).

	//Muestra el total y el promedio de las calificaciones
	cout << "\nEl total de las 10 calificaciones es: " << total << endl;
	cout << "El promedio de la clase es: " << promedio << endl;
} //Fin de la función determinarPromedioClase

