//============================================================================
// Name        : CICLOS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <conio.h>
using namespace std;

/*En una clase de x alumnos se han realizado 3 exámenes y se requiere determinar el número de:
 *
 * 1) Alumnos que aprobaron todos los exámenes.
 * 2) Alumnos que aprobaron al menos un exámen.
 * 3) Alumnos aprobaron únicamente el último exámen.
 *
 * Realice un programa que permita la lectura de datos y el cálculo de las estadísticas.
 */

int main()
{
	int i=1, alumno, e1, e2, e3, aprobotodo=0, solounparcial=0, ultimoparcial=0;

	cout << "Digite la cantidad de alumnos: "; cin >> alumno;
	cout << "\n";

	do {
		cout << "Digite la nota del primer parcial: "; cin >> e1;
		cout << "Digite la nota del segundo parcial: "; cin >> e2;
		cout << "Digite la nota del tercer parcial: "; cin >> e3;
		cout << "\n";

		if ((e1>=6) && (e2>=6) && (e3>=6)) {
			aprobotodo += 1;
			i++;
		} else if ((e1>=6) || (e2>=6) || (e3>=6)) {
			solounparcial += 1;
			if (e3>=6) {
				ultimoparcial += 1;
			}
			i++;
		}
	} while (i<=alumno);

	cout << "\nAlumnos que aprobaron todos los exámenes: " << aprobotodo << endl;
	cout << "Alumnos que aprobaron al menos un exámen: " << solounparcial << endl;
	cout << "Alumnos aprobaron únicamente el último exámen: " << ultimoparcial << endl;

	getch();
	return 0;
}
