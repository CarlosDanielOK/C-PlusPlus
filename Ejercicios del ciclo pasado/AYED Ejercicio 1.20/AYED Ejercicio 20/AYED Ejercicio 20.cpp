// AYED Ejercicio 20.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
/*
 * Se ingresan varios valores enteros, finalizando el ingreso al llegar un valor 0 (cero). Se pide:
    1. Cantidad positivos.
    2. Cantidad de negativos.
    3. Porcentaje de pares.
    4. Promedio de los positivos.
    5. Porcentaje de negativos.
 */

#include <iostream>
using namespace std;

int main()
{
    int num;
    unsigned int positivos = 0, negativos = 0, numPar = 0, numerosPositivos = 0;

    cout << "Ingrese un valor: ";
    cin >> num;

    while ( num != 0 )
    {
        if ( num > 0 ) //Si num es positivo
        {
            positivos++; //postincrementa positivos
            numerosPositivos += num; //Sumo los numeros positivos para luego calcular el promedio de los positivos
        }
        else //De lo contrario, significa que num es negativo
        {
            negativos++; //postincrementa negativos
        } //Fin de if...else

        if ( num % 2 == 0 ) //Si num es par
            numPar++; //Postincrementa numPar

        cout << "Ingrese un valor: ";
        cin >> num;
    } //Fin de while

    //Calcula el porcentaje de pares. Formula: cantidad / total * 100 = x (porcentaje)
    double porcentajePares = static_cast< double >( numPar ) / ( positivos + negativos ) * 100; //Como numPar y el resultado de sumar positivos + negativos son enteros, al realizar la división se piede la parte fraccionaria del resultado antes de asignarlo a porcentajePares. Para realizar un cálculo de punto flotante con valores enteros, creamos un valor temporal de punto flotante de numPar mediante el operador de conversión static_cast< double >(numPar) y como el compilador sabe cómo evaluar sólo expresiones en las que los tipos de datos de los operandos sean idénticos, realiza una operación llamada PROMOCIÓN (o CONVERSIÓN IMPLÍCITA) en los operandos seleccionados. Esta expresión contiene valores de los tipos de datos int (positivos + negativos) y double (la versión temporal double de numPar), C++ promueve los operandos int a valores double, con lo cual permite realizar el cálculo y el resultado de la división es de punto flotante y luego se multplica por 100

    //Calcula el promedio de los positivos
    double promedioPositivos = static_cast< double >( numerosPositivos ) / positivos;

    //Calcula el porcentaje de negativos
    double porcentajeNegativos = static_cast< double >( negativos ) / ( positivos + negativos ) * 100;

    //Imprime los resultados
    cout << "\nCantidad positivos: " << positivos << endl;
    cout << "Cantidad de negativos: " << negativos << endl;
    cout << "Porcentaje de pares: " << porcentajePares << "%" << endl;
    cout << "Promedio de los positivos: " << promedioPositivos << endl;
    cout << "Porcentaje de negativos: " << porcentajeNegativos << "%" << endl;

    return 0;
}