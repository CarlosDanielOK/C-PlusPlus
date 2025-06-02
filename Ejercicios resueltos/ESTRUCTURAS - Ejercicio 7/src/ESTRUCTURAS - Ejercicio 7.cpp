//============================================================================
// Name        : ESTRUCTURAS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Defina una estructura que indique el tiempo empleado por un ciclista en una etapa. La estructura debe tener tres campos: horas, minutos y segundos.
Escriba un programa que dado n etapas calcule el tiempo total empleado en correr todas las etapas. */

#include <iostream>
#include <conio.h>
using namespace std;

struct Etapas {
	int horas;
	int minutos;
	int segundos;
} etapa[100];

int main() {
	int n_etapas, horasT=0, minutosT=0, segundosT=0;

	cout << "Digite el número de etapas: "; cin >> n_etapas;
	cout << "\n";

	//Pidiendo los datos al usuario
	for(int i=0; i<n_etapas; i++) {
		fflush(stdin);
		cout << "Horas: "; cin >> etapa[i].horas;
		cout << "Minutos: "; cin >> etapa[i].minutos;
		cout << "Segundo: "; cin >> etapa[i].segundos;

		//Calculando el tiempo total de todas la etapas
		horasT = horasT + etapa[i].horas;
		minutosT = minutosT + etapa[i].minutos;
		if(minutosT >= 60) { //Si pasaron mas o igual de 60 min significa que paso una hora mas
			minutosT = minutosT - 60; //Le restamos 60 min, asi le sumaria una hora mas y min quedaria 0 min
			horasT++; //Entonces le sumamos una hora mas a horasT
		}
		segundosT = segundosT + etapa[i].segundos;
		if(segundosT >= 60) { //Si pasaron mas o igual de 60 seg significa que paso un minuto mas
			segundosT = segundosT - 60;
			minutosT++; //Entonces le sumamos un minuto mas a minutosT
		}
		cout << "\n";
	}

	cout << "El tiempo total empleado en correr todas las etapas es: " << horasT << " hs. " << minutosT << " min. " << segundosT << " seg." << endl;

	getch();
	return 0;
}
