//============================================================================
// Name        : ESTRUCTURAS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Hacer un arreglo de estructura llamada atleta para N atletas que contenga los siguientes campos: nombre, país, numero_medallas.
Y devuelva los datos (Nombre, país) del atleta que ha ganado el mayor número de medallas. */

#include <iostream>
#include <conio.h>
using namespace std;

struct atleta {
	char nombre[20];
	char pais[20];
	int numero_medallas;
} atletas[100];

int main() {
	int n, mayor=0, pos;

	cout << "Digite el número de atletas: "; cin >> n;
	cout << "\n";

	//Vamos a pedir los datos para n atletas
	for(int i=0; i<n; i++) {
		fflush(stdin);
		cout << i+1 << ". Nombre del atleta: "; cin.getline(atletas[i].nombre,20,'\n');
		cout << i+1 << ". País: "; cin.getline(atletas[i].pais,20,'\n');
		cout << i+1 << ". Número de medallas ganadas: "; cin >> atletas[i].numero_medallas;

		//Calculando el atleta con mayor numero de medallas ganadas
		if(atletas[i].numero_medallas > mayor) {
			mayor = atletas[i].numero_medallas; //Guardamos el numero de medallas ganadas
			pos = i; //Guardamos la posicion del atleata con mayor medallas ganadas
		}
		cout << "\n";
	}

	cout << "El atleta con mayor número de medallas ganadas es:" << endl;
	cout << "\nNombre del atleta: " << atletas[pos].nombre << endl;
	cout << "País: " << atletas[pos].pais << endl;

	getch();
	return 0;
}
