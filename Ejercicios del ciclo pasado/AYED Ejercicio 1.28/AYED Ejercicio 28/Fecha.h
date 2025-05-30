//Fecha.h: Definición de la interfaz de la clase Fecha mediante prototipos de funciones

#pragma once

class Fecha
{
public:
	bool pedirDatos(); //Prototipo de función que pide los datos al usuario y retorna un valor booleando, es decir, true o false
	int convertirFechaEnDias(); //Prototipo de función que convierte una fecha en dias y devuelve la cantidad de dias
	void decidirPersonaJovenYVieja( int i ); //Prototipo de función que compara las fechas convertidas en dias y decide cual es la persona más joven y más vieja
	void imprimirResultados() const; //Prototipo de función que imprime los resultados. Declaramos la función miembro imprimirResultados como const debido a que, en el proceso de mostrar los resultados la función no modifica (y no debería hacerlo) el objeto Fecha sobre el cual se llama. Al declararlo como const indicamos al compilador que “esta función no debe modificar el objeto sobre el cual se llama; y si lo hace, hay que generar un error de compilación”.
private:
	//Datos miembros
	std::string nombre; //Almacena el nombre de una persona
	int fecha; //Almacena una fecha de nacimiento de una persona
	unsigned int dias = 0; //Almacena la fecha convertida en dias
	std::string nJoven, nVieja; //Almacenan las nombres de la persona más joven y más vieja
	unsigned int diasJoven, diasVieja; //Almacenan las fechas de nacimiento convertidas en dias de la persona más joven y más vieja
};