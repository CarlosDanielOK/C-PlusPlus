/*
 * Se ingresa por teclado un valor numérico entero, informar:
   1. La quinta parte de dicho valor.
   2. El valor residual, que surge al dividir el valor ingresado en 5 partes iguales.
   3. La séptima parte de la quinta parte.
 */

#include <iostream>
using namespace std;

int main()
{
    int numero; //Declara una variable de tipo entero
    int cinco = 5; //Divisor
    int siete = 7; //Divisor

    //Pide y recibe el numero
    cout << "Ingrese un numero entero: ";
    cin >> numero;

    //Calcula la séptima parte de la quinta parte del valor de la variable numero
    double resultado = ( static_cast< double >(numero) / cinco ) / siete; //Declaro la variable resultado como de tipo double para poder almacenar el resultado del cálculo de la división como un número de punto flotante. numero, cinco y siete son variables enteras, y al dividir enteros se produce una división entera, en la cual cualquier parte fraccionaria del cálculo se trunca. Se utiliza el operador de conversión de tipo static_cast< double >(numero) para crear una copia de punto flotante TEMPORAL de su operando entre paréntesis: numero. El valor almacenado en numero sigue siendo un entero. El cálculo ahora consiste de un valor de punto flotante (la versión temporal double de numero) dividido entre el entero cinco y luego siete. En una expresión que contenga valores de los tipos de datos int y double, C++ promueve los operandos int a valores double. En este programa, tratamos a numero como double (mediante el operador static_cast), por lo que el compilador promueve el valor de cinco y siete al tipo double, con lo cual permite realizar el cálculo; el resultado de la división de punto flotante se asigna a resultado.

    //Calcula e imprime los resultados
    cout << "La quinta parte de " << numero << " es: " << numero / cinco << endl;
    cout << "El valor residual, que surge al dividir " << numero << " en 5 partes iguales es: " << numero % cinco << endl;
    cout << "La septima parte de la quinta parte de " << numero << " es: " << resultado << endl;

    return 0;
}