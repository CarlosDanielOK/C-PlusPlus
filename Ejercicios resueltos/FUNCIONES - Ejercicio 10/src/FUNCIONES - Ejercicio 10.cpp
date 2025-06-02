//============================================================================
// Name        : FUNCIONES.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Ejercicio 10: Escriba una función nombrada calc_años() que tenga un parámetro entero que represente el número total de días desde la fecha 1/1/2000
y parámetros de referencia nombrados año, mes y día. La función es calcular el año, mes y día actual para el número dado de días que se le transmitan.
Usando las referencias, la función deberá alterar en forma directa los argumentos respectivos en la función que llama. Para este problema suponga
que cada año tiene 365 días y cada mes tiene 30 días.*/

#include <iostream>
#include <conio.h>
using namespace std;

//Prototipo de función
void calc_anios(int, int&, int&, int&); //Un parámetro por valor, y tres por referencia

int main() {
	int TotalDias, anio=0, mes=1, dia=1;

	cout << "Digite los dias que desea convertir en año, mes y dia: "; cin >> TotalDias;

	calc_anios(TotalDias, anio, mes, dia); //Llamo a la función

	cout << "\nLa fecha despues de los dias que digito que transcurrieron desde la fecha 1/1/2000 es: " << dia+1 << "/" << mes+1 << "/" << anio+2000 << endl;

	getch();
	return 0;
}

//Definición de función
void calc_anios(int TotalDias, int& anio, int& mes, int& dia) {
	anio = TotalDias / 365; //Calculamos los años, 365 dias equivalen a 1 año
	TotalDias = TotalDias % 365; //Sacamos el resto de la división para seguir dividiendo para despues calcular los meses
	mes = TotalDias / 30; //Calculamos los meses, 30 dias equivalen a 1 mes
	dia = TotalDias % 30; //Calculamos los dias, que son el resto de hacer la división para calcular los meses
}
