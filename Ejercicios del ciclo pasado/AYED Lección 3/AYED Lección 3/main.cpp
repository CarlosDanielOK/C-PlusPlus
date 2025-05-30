// main.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Las ESTRUCTURAS permiten crear nuevos tipos de datos agrupando datos que tienen coherencia entre sí. Por ejemplo la estructura Fecha que agrupa : día, mes y año. La fecha se compone por un día, mes y año; y estos datos son coherentes entre sí, ya que dia representa un día del mes, y mes representa un mes del año anio. Y los tres datos identifican una fecha.

#include <iostream>
using namespace std;

//Los datos (variables) que están agrupados dentro de una estructura se llaman CAMPOS. La estructura Fecha tiene tres campos: dia, mes y anio.
struct Fecha
{
	int dia; //campo
	int mes; //campo
	int anio; //campo
};

//LOS CAMPOS DE UNA ESTRUCTURA PUEDE SER DE CUALQUIER TIPO, INCLUSO UNA ESTRUCTURA. Veamos la estructura Direccion:
struct Direccion
{
	string calle;
	int numero;
	int piso;
	char departamento;
	string codigoPostal; //Ej: C1432BQZ
};
//y ahora la estructura Persona con los campos fechaNacimiento( tipo Fecha ) y direccion( tipo Direccion ). El ejemplo continua en la linea 67
struct Persona
{
	string nombre;
	int dni;
	Fecha fechaNacimiento;
	Direccion direccion;
};

int main()
{
	//Luego de declarar una estructura, ésta establece un nuevo tipo de dato. En nuestro caso, ahora disponemos del tipo Fecha.

	//Declaro una fecha
	Fecha f1;
	f1.dia = 13;
	//Para ASIGNARLE VALOR a los campos de una estructura (variable cuyo tipo de dato es una estructura) utilizamos el punto (.) como separador: variable.campo.
	f1.mes = 05;
	f1.anio = 2020;

	cout << "Fecha f1\n" << f1.dia << "/" << f1.mes << "/" << f1.anio << "\n\n"; //Imprime sus valores

	//------------------------------------------------------------------------------------------------

	//INICIALIZACIÓN DE UNA ESTRUCTURA: Cuando le asignamos valores iniciales a los campos de una estructura decimos que la estamos inicializando. Esto podemos hacerlo de dos maneras diferentes:
	//1. ASIGNANDO LOS VALORES DE SUS CAMPOS, UNO POR UNO:
	Fecha f2; //Declaro otra fecha
	f2.dia = 25;
	f2.mes = 12;
	f2.anio = 2019;

	cout << "Fecha f2\n" << f2.dia << "/" << f2.mes << "/" << f2.anio << "\n\n"; //Imprime sus valores

	//2. ASIGNANDO EL CONJUNTO COMPLETO DE LOS VALORES DE SUS CAMPOS:
	Fecha f3 = { 25,12,2020 };

	cout << "Fecha f3\n" << f3.dia << "/" << f3.mes << "/" << f3.anio << "\n\n"; //Imprime sus valores

	//------------------------------------------------------------------------------------------------

	//Si tuviésemos una variable p tipo Persona, con el . (punto) podremos asignarle valores a sus campos, y a los campos de los campos que son estructuras.
	Persona p;//Declara una persona
	p.nombre = "Pablo Augusto";
	p.fechaNacimiento.dia = 5;

	//También, con el operador {} (llave) para asignar el conjunto de valores de aquellos campos que sean estructuras.
	p.fechaNacimiento = { 10,5,2021 };

	cout << "Persona p\n" << p.nombre << "\n" << p.fechaNacimiento.dia << "\n\n";

	system( "pause" );
	return 0;
}