/*
 * Author: Carlos Daniel
 * Created on: 17 sep. 2020
 * Name: LibroCalificaciones.h
 * Description: Definición de la interfaz de una clase mediante prototipos de funciones.
 */

#ifndef LIBROCALIFICACIONES_H_
#define LIBROCALIFICACIONES_H_

#include <string> //El programa usa la clase string estándar de C++

//Definición de la clase LibroCalificaciones
class LibroCalificaciones
{
	public:
		LibroCalificaciones( std::string ); //Prototipo de función. Constructor que inicializa el dato miembro nombreCurso
		void establecerNombreCurso( std::string ); //Prototipo de función que establece el nombre del curso
		std::string obtenerNombreCurso() const; //Prototipo de función que obtiene el nombre del curso
		void mostrarMensaje() const; //Prototipo de función que muestra un mensaje de bienvenida al usuario
		void determinarPromedioClase() const; //Prototipo de función que promedia las calificaciones escritas por el usuario
	private:
		std::string nombreCurso; //Dato miembro. Nombre del curso para este LibroCalificaciones
};
//Fin de la clase LibroCalificaciones

#endif /* LIBROCALIFICACIONES_H_ */
