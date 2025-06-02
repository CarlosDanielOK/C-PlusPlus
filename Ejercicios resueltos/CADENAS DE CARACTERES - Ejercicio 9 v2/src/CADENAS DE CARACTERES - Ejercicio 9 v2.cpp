//============================================================================
// Name        : CADENAS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Realice un programa que lea una cadena de caracteres de la entrada estándar y
//muestre en la salida estándar cuántas ocurrencias de cada vocal existen en la cadena.

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main() {
	char frase[30]; //Para guardar la cadena de caracteres que escriba el usuario
	int vocal_a=0, vocal_e=0, vocal_i=0, vocal_o=0, vocal_u=0; //Variables para almacenar la cantidad de veces que aparece cada vocal en la frase

	cout << "Escriba una frase: ";
	cin.getline(frase,30,'\n');

	strlwr(frase); //Convertimos la frase en letras minusculas para que no salga un error a la hora de comparar en el swicth. | Ej: 'a' no es = a 'A'

	for (int i=0; i<30; i++) {
		switch(frase[i]) { //Vamos a comparar letra por letra para saber cuantas y que vocales apararecen en la frase
		case 'a': vocal_a++; break; //Si aparece una 'a' le sumamos "1" al contador "vocal_a"
		case 'e': vocal_e++; break;//Asi tambien con los demas casos
		case 'i': vocal_i++; break;
		case 'o': vocal_o++; break;
		case 'u': vocal_u++; break; //El "break" es muy importante en switch(). ya que si no lo ponemos se iria al siguiente "case" y lo ejecutaria
                                    //sin comprobar la condicion. Ejemplo: case'a':vocal_a++;(le sumaria a "vocal_a" un "1") y a "vocal_e" tambien
		                            //le sumaria 1 porque no hay un break. | El "break" hace que pase al siguiente caso o "case"
		}
	}

	cout << "\nEn la frase aparecen:" << endl;
	cout << "\nLa vocal 'a': " << vocal_a << " veces.";
	cout << "\nLa vocal 'e': " << vocal_e << " veces.";
	cout << "\nLa vocal 'i': " << vocal_i << " veces.";
	cout << "\nLa vocal 'o': " << vocal_o << " veces.";
	cout << "\nLa vocal 'u': " << vocal_u << " veces.";

	getch();
	return 0;
}
