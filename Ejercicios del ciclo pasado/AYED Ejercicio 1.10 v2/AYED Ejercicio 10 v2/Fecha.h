#pragma once
//Fecha.h: Definición de la interfaz de la clase Fecha mediante prototipos de funciones

class Fecha
{
public:
	Fecha(); //Constructor que inicializa los datos miembros
	//Prototipos de funciones
	void pedirFechas();
	void calcularDistanciaEnDias();
	void compararFechas();
private:
	//Datos miembros
	int dia, mes, anio, dia1, mes1, anio1, dia2, mes2, anio2; //Variables locales de tipo entero que almacenan las fechas
	unsigned int contadorDias1, contadorDias2; //Variables de tipo entero no signado que almacenan cuantos dias de diferencia hay entre la fecha actual
};