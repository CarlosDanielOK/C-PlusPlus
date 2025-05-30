//Fecha.h: Definici�n de la interfaz de la clase Fecha mediante prototipos de funciones

#pragma once

class Fecha
{
public:
	bool pedirDatos(); //Prototipo de funci�n que pide los datos al usuario y retorna un valor booleando, es decir, true o false
	int convertirFechaEnDias(); //Prototipo de funci�n que convierte una fecha en dias y devuelve la cantidad de dias
	void decidirPersonaJovenYVieja( int i ); //Prototipo de funci�n que compara las fechas convertidas en dias y decide cual es la persona m�s joven y m�s vieja
	void imprimirResultados() const; //Prototipo de funci�n que imprime los resultados. Declaramos la funci�n miembro imprimirResultados como const debido a que, en el proceso de mostrar los resultados la funci�n no modifica (y no deber�a hacerlo) el objeto Fecha sobre el cual se llama. Al declararlo como const indicamos al compilador que �esta funci�n no debe modificar el objeto sobre el cual se llama; y si lo hace, hay que generar un error de compilaci�n�.
private:
	//Datos miembros
	std::string nombre; //Almacena el nombre de una persona
	int fecha; //Almacena una fecha de nacimiento de una persona
	unsigned int dias = 0; //Almacena la fecha convertida en dias
	std::string nJoven, nVieja; //Almacenan las nombres de la persona m�s joven y m�s vieja
	unsigned int diasJoven, diasVieja; //Almacenan las fechas de nacimiento convertidas en dias de la persona m�s joven y m�s vieja
};