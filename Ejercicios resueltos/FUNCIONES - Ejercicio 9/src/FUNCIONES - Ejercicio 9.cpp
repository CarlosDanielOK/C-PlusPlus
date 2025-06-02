//============================================================================
// Name        : FUNCIONES.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Ejercicio 9: Escriba una función nombrada tiempo() que tenga un parámetro en número entero llamado totalSeg y tres parámetros de referencia
enteros nombrados horas, min y seg. La función es convertir el número de segundos transmitido en un número equivalente de horas, minutos y segundos.*/

#include <iostream>
#include <conio.h>
using namespace std;

//Prototipo de función
void tiempo(int, int&, int&, int&);

int main() {
	int totalseg, horas=0, min=0, seg=0;

	cout << "Digite los segundos que desea convertir en horas, minutos y segundos: "; cin >> totalseg;

	tiempo(totalseg, horas, min, seg); //Llamamos a la función

	cout << "\nTiempo equivalente: " << horas << " hs. " << min << " min. " << seg << " seg." << endl;

	getch();
	return 0;
}

//Definición de función
void tiempo(int totalseg, int& horas, int& min, int& seg) { //Para pasar de segundos a h,m,s; tenemos que dividir los segundos por 60 dos veces
	horas = totalseg / 3600; //Primero calculamos las horas, 3600 segundos equivalen a 1 hora.
	totalseg = totalseg % 3600; //Calculamos el resto de la división, para seguir dividiendo despues para calcular los minutos
	min = totalseg / 60; //Segundo calculamos los minutos, 60 segundos equivalen a 1 minuto.
	seg = totalseg % 60; //Tercero calculamos los segundos, que son el resto de hacer la división de los minutos.
}
