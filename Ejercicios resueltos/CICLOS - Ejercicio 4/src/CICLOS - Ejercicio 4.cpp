//============================================================================
// Name        : CICLOS.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 * Escriba un programa que tome cada 4 horas la temperatura exterior, leyendola durante un período de 24 hs. Es decir, debe leer 6 temperaturas.
 * Calcule la temperatura media del dia, la temperatura m+as alta, y las más baja.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	float t1, t2, t3, t4, t5, t6;
	float temperaturamedia=0;

	cout << "Digite la temperatura a las 0 hs: ";
	cin >> t1;
	cout << "Digite la temperatura a las 4 hs: ";
	cin >> t2;
	cout << "Digite la temperatura a las 8 hs: ";
	cin >> t3;
	cout << "Digite la temperatura a las 12 hs: ";
	cin >> t4;
	cout << "Digite la temperatura a las 16 hs: ";
	cin >> t5;
	cout << "Digite la temperatura a las 20 hs: ";
	cin >> t6;

	temperaturamedia = (t1+t2+t3+t4+t5+t6)/6;
	cout << "\nLa temperatura media del dia es: " << temperaturamedia << endl;

	if (t1>t2 && t1>t3 && t1>t4 && t1>t5 && t1>t6)
	{
		cout << "\nLa temperatura más alta es: " << t1 << endl;
	} else if (t2>t1 && t2>t3 && t2>t4 && t2>t5 && t2>t6){
		cout << "\nLa temperatura más alta es: " << t2 << endl;
	} else if (t3>t1 && t3>t2 && t3>t4 && t3>t5 && t3>t6){
		cout << "\nLa temperatura más alta es: " << t3 << endl;
	} else if (t4>t1 && t4>t2 && t4>t3 && t4>t5 && t4>t6){
		cout << "\nLa temperatura más alta es: " << t4 << endl;
	} else if (t5>t1 && t5>t2 && t5>t3 && t5>t4 && t5>t6){
		cout << "\nLa temperatura más alta es: " << t5 << endl;
	} else if (t6>t1 && t6>t2 && t6>t3 && t6>t4 && t6>t5){
		cout << "\nLa temperatura más alta es: " << t6 << endl;
	}

	if (t1<t2 && t1<t3 && t1<t4 && t1<t5 && t1<t6)
	{
		cout << "\nLa temperatura más baja es: " << endl;
	} else if (t2<t1 && t2<t3 && t2<t4 && t2<t5 && t2<t6){
		cout << "\nLa temperatura más baja es: " << t2 << endl;
	} else if (t3<t1 && t3<t2 && t3<t4 && t3<t5 && t3<t6){
		cout << "\nLa temperatura más baja es: " << t3 << endl;
	} else if (t4<t1 && t4<t2 && t4<t3 && t4<t5 && t4<t6){
		cout << "\nLa temperatura más baja es: " << t4 << endl;
	} else if (t5<t1 && t5<t2 && t5<t3 && t5<t4 && t5<t6){
		cout << "\nLa temperatura más baja es: " << t5 << endl;
	} else if (t6<t1 && t6<t2 && t6<t3 && t6<t4 && t6<t5){
		cout << "\nLa temperatura más baja es: " << t6 << endl;
	}

	getch();
	return 0;
}
