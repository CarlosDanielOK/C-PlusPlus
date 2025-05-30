// main.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
/* Se ingresa un conjunto de ternas (d, p, i) siendo d el DNI de una persona, p la fecha de pago e i el importe pagado en la fecha p. El lote de datos se ingresa ordenado (agrupado) por DNI. De este modo se garantiza que todos los pagos efectuados por una misma persona se ingresarán juntos (uno detrás del otro). Se pide:
	1. Por cada persona:
		a. Cantidad de pagos efectuados.
		b. Importe promedio de los pagos.
		c. Cantidad total abonada.
	2. En general:
		a. Cuántas personas efectuaron, al menos, un pago.
		b. Promedio de los importes pagados.
		c. DNI de la persona que, en total, abonó la mayor cantidad de dinero.
 */

#include <iostream>
using namespace std;

int main()
{
	int d = 0; //Almacena el DNI de una persona
	int p = 0; //Almacena la fecha de pago
	int i = 0; //Almacena el importe pagado en la fecha "p"
	int personas = 0;
	double promedioGeneral = 0;
	int mayor = -1; //Se inicializa en -1 porque una persona no puedo pagar en negativo, asi ademas logramos que la primer persona ingresada su pago sea el mayor pago para luego tener ese valor de referencia para comparar con los demas
	unsigned int contador = 0;

	//Ciclo while que controla una persona por su DNI
	while ( d != -1 )
	{
		unsigned int cantidadPagos = 0; //Almacena la cantidad de pagos efectuados por persona
		int sumaPagos = 0; //Almacena la suma de los pagos de la persona y luego almacena el promedio

		cout << "Digite su DNI (o -1 para salir): ";
		cin >> d;
		cout << endl; //imprime un salto de linea

		//Ciclo while que procesa todos los pagos de la persona
		while ( d != -1 && p != -1 && i != -1 )
		{
			cout << "Fecha de pago en formato AAAAMMDD (o -1 para salir): ";
			cin >> p;
			cout << "Importe pagado (o -1 para salir): $";
			cin >> i;

			//Lleva la cuenta de pagos efectuados por persona
			if ( p != -1 && i != -1 )
			{
				cantidadPagos++; //suma un pago efectuado de la persona
				sumaPagos += i; //suma los pagos de la persona
			}

			//Suma cuántas personas efectuaron, al menos, un pago
			if ( contador == 0 && p != -1 && i != -1 ) //Si es la primera iteración (contador==0) y p != -1 y i != -1
				personas++; //suma una persona

			contador++; //Postincrementa contador, indicando que se proceso el primer pago o un -1 para salir
		} //Fin de while anidado

		//Si el usuario no digito -1 para salir
		if ( d != -1 )
		{
			//Imprime los resultados pedidos en el enunciado
			cout << "\nCantidad de pagos efectuados: " << cantidadPagos << "\n";
			cout << "Importe promedio de los pagos: $" << (double)sumaPagos / cantidadPagos << "\n";
			cout << "Cantidad total abonada: $" << sumaPagos << "\n\n";

			//Suma todos los pagos de todas las personas
			promedioGeneral += sumaPagos;

			//Verfica el DNI de la persona que, en total, abonó la mayor cantidad de dinero
			if ( sumaPagos > mayor )
			{
				mayor = d; //asina a mayor el DNI
			}

			//Reinicia los valores de la fecha "p", el importe pagado "i" y de "contador" para que pueda volver a entrar en ciclo while anidado y funcione correctamente
			p = 0;
			i = 0;
			contador = 0;
		} //Fin de if anidado
	} //Fin de while

	cout << "Personas que efectuaron, al menos, un pago: " << personas << endl;
	cout << "Promedio de todos los importes pagados: " << promedioGeneral / personas << endl;
	cout << "DNI de la persona que, en total, abono la mayor cantidad de dinero: " << mayor << endl;

	system( "pause" );
	return 0;
}