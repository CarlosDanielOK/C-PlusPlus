// AYED Ejercicio 26.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Dado un conjunto de valores numéricos que finaliza con el ingreso de un 0 (cero), informar el mayor de los negativos, y el menor de los positivos.

#include <iostream>
using namespace std;

int main()
{
	int numero = 1, mayor, menor;
    unsigned int contadorMayor = 0, contadorMenor = 0; //Contadores que nos ayudaran a comparar los numeros

	while ( numero != 0 )
	{
		cout << "Digite un numero: ";
		cin >> numero;
		
		//Si numero es negativo
		if ( numero < 0 )
		{
            if ( contadorMayor > 0 ) //Si contadorMayor es mayor que 0 significa que no es la primera iteración
            {
                if ( numero > mayor ) //Si el numero es mayor que el valor de mayor
                    mayor = numero; //asigno el nuevo valor mayor a la variable mayor
            }
            else //De lo contrario, significa que es la primera iteración, por lo que
            {
                mayor = numero; //asigna el primer numero como valor de referencia a comparar con los siguientes numeros
            }

            contadorMayor++; //Postincremta contadorMayor, indicando que i itera una vez en la parte de los numeros negativos
		} //Fin de if

        //Si numero es positivo
        if ( numero > 0 )
        {
            if ( contadorMenor > 0 ) //Si contadorMenor es mayor que 0 significa que no es la primera iteración
            {
                if ( numero < menor ) //Si el numero es menor que el valor de menor
                    menor = numero; //asigno el nuevo valor menor a la variable menor
            }
            else //De lo contrario, significa que es la primera iteración, por lo que
            {
                menor = numero; //asigna el primer numero como valor de referencia a comparar con los siguientes numeros
            }

            contadorMenor++; //Postincremta contadorMenor, indicando que i itera una vez en la parte de los numeros positivos
        } //Fin de if
	}

    cout << "\nEl mayor de los negativos es: " << mayor << endl;
    cout << "El menor de los positivos es: " << menor << endl;

	return 0;
}