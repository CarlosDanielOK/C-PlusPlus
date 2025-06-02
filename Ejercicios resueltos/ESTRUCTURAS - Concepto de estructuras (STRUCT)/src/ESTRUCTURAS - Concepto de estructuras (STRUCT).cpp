//============================================================================
// Name        : ESTRUCTURAS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//ESTRUCTURA: Es una colección de uno a más tipos de elementos denominados campos, cada uno de los cuales puede ser un tipo de dato diferente.

#include <iostream>
#include <conio.h>
using namespace std;

/*Supongamos que se desea almacenar los datos de una colección de discos compactos (CD) de música. Estos datos pueden ser:
 * .Título
 * .Artista
 * .Número de canciones
 * .Precio
 * .Fecha de compra

Declaración de una Estructura:

struct <NombreDeLaEstructura> {
   <TipoDeDato>   <NombreDeCampo>  (cada uno de estas lineas se denomina campo)
   <TipoDeDato>   <NombreDeCampo>  (cada uno de estas lineas se denomina campo)
   <TipoDeDato>   <NombreDeCampo>  (cada uno de estas lineas se denomina campo)
   ... (puedes tener n campos)
   <TipoDeDato>   <NombreDeCampo>  (cada uno de estas lineas se denomina campo)
}; //El ";" es importante. Siempre va al final de la estructura.
*/
struct coleccion_CD {
	char titulo[30]; //Definimos de tipo char porque el titulo va a ser una cadena de caracteres
	char artista[20]; //Lo mismo aca
	int numero_de_canciones; //tipo int porque el numero de canciones va a ser un numero entero
	float precio_de_compra; //Por ejemplo: $ 10.50
	char fecha_de_compra[20]; //Ejemplo: 11/07/2018 ó 11 de julio de 2018
}CD1,CD2,CD3; //Declarando variables struct: Esta es una forma de declarar variables struct

/*Declarando variables struct
Otra forma de declarar variables struct es:
int main() {
	struct coleccion_CD CD1,CD2,CD3; //Cada una de estas variables(CD1,CD2,CD3) contiene todos los campos. Nos sirve para ahorrar variables.
	//Porque sino tendriamos que declarar variables diferentes para cada CD. En el siguiente ejercicio se estendera mejor.
*/
//Esto es un codigo de concepto, no es para ejecutarlo.

	getch();
	return 0;
}
