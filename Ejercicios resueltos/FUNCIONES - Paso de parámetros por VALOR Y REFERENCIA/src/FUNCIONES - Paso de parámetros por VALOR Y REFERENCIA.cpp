//============================================================================
// Name        : FUNCIONES.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*PASO DE PARÁMETROS POR VALOR: Cuando se pasa un parámetro(o argumento) por valor, se crea una COPIA exacta del valor del parámetro original en el
parámetro de la función que se llamó. Las MODIFICACIONES A LA COPIA NO AFECTAN AL VALOR DE LA VARIABLE ORIGINAL en la función que se hizo la llamada.

PASO DE PARÁMETROS POR REFERENCIA: Mediante el paso de parámetros por referencia, la función que hace la llamada proporciona a la función que llamó
la habilidad de ACCEDER DIRECTAMENTE A LOS DATOS DE LA PRIMERA, y de MODIFICARLOS. En el paso por referencia no pasamos una copia del valor original
sino que le PASAMOS LA DIRECCIÓN DE MEMORIA donde esta almacenada dicho valor original. Un PARÁMETRO POR REFERENCIA es un ALIAS para su
correspondiente argumento en la llamada a una función. Para indicar que un parámetro de función se pasa por referencia, simplemente hay que colocar
un signo & despues del tipo de parámetro en el prototipo de la función. Por ej: int &cuenta | se lee "cuenta es una referencia a un valor int".
El alias es simplemente otro nombre para la variable original.
*/

#include <iostream>
#include <conio.h>
using namespace std;

//Prototipos de función
int CuadradoPorValor(int); //Prototipo de función (paso por valor)
void CuadradoPorReferencia(int &); //Prototipo de función (paso por referencia)
//No hace falta poner el nombre de la variable en el prototipo porque vamos a hacer un paso de parámetros por referencia.

int main() {
	int x, y; //"x" sera para ejemplo de CuadradoPorValor y "y" para CuadradoPorReferencia

	cout << "Digite un valor entero para x: "; cin >> x;
	cout << "Digite un valor entero para y: "; cin >> y;
	cout << "\n"; //Solo es un espacio

	//Demuestro CuadradoPorValor
	cout << "x = " << x << " antes de CuadradoPorValor" << endl;
	cout << "Valor devuelto por CuadradoPorValor: " << CuadradoPorValor(x) << endl;
	cout << "x = " << x << " despues de CuadradoPorValor\n" << endl;

	//Demuestro CuadradoPorReferencia
	cout << "y = " << y << " antes de CuadradoPorReferencia" << endl;
	CuadradoPorReferencia(y);
	cout << "y = " << y << " despues de CuadradoPorReferencia" << endl;

	getch();
	return 0;
}

//Definición de función

//CuadradoPorValor multiplica "numero" por si mismo, almacena el resultado en "numero", y devuelve el nuevo valor del numero
int CuadradoPorValor(int numero) {
	return numero *= numero; //No se modifico el argumento(parámetro) de la función que hizo la llamada
} //No se modifica el valor de la variable original(x) porque a la variable "numero" solo le estamos dando una copia del valor de x y no su direccion

//CuadradoPorReferencia multiplica a refnumero por si solo, y almacena el resultado en la variable a la que refnumero hace referencia en la función
//main (en este caso, refnumero hace referencia a la variable y)
void CuadradoPorReferencia(int &refnumero) { //Tambien se úede escribir asi: int& refnumero
	refnumero *= refnumero; //Se modifico el argumento de la función que hizo la llamada.
} //Se modifica el valor de la variable original(y), porque refnumero tiene acceso a la dirección de memoria de la variable original
