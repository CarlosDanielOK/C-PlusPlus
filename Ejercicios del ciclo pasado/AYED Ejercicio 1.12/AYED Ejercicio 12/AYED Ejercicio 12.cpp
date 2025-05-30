// AYED Ejercicio 12.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Dados dos enteros, informar su producto calculándolo mediantes sumas sucesivas. 1. Considerar que los valores ingresados serán números positivos o cero. 2. Considerar que los valores ingresados también podrían ser negativos.

#include <iostream>
using namespace std;

int main()
{
    int a, b, suma = 0, contador = 1; //Variables de tipo entero

    //Pide y lee los numeros
    cout << "Digite un numero entero: "; cin >> a;
    cout << "Digite un numero entero: "; cin >> b;

    //Si a o b son mayores que cero, es decir, si son numeros positivos
    if ( a > 0 && b > 0 )
    {
        while ( contador <= b ) //Mientras que contador sea menor o igual que b realizara la multiplicacion mediante sumas sucesivas
        {
            suma += a; //suma = suma + numero
            contador++; //Postincrementa contador
        } //Fin de while
    }
    else if ( a < 0 && b < 0 ) //De lo contrario, si los numeros son negativos
    {
        //La función abs retorna el valor absoluto del valor que recibe como parámetro
        b = abs( b ); //Si b fuera negativo, la función abs retornaria su valor positivo. Si es positivo, retornara su valor positivo

        while ( contador <= b ) //Mientras que contador sea menor o igual que b realizara la multiplicacion mediante sumas sucesivas
        {
            suma += a; //suma = suma + numero
            contador++; //Postincrementa contador
        } //Fin de while

        suma *= -1; //Asigna el signo positivo al valor de suma; al multiplicar dos numeros negativos el resultado es positivo
    }
    else if ( ( a < 0 && b > 0 ) || ( b < 0 && a > 0 ) ) //Si solo uno de los numeros es negativo
    {
        //La función abs retorna el valor absoluto del valor que recibe como parámetro
        a = abs( a ); //Si a fuera negativo, la función abs retornaria su valor positivo. Si es positivo, retornara su valor positivo
        b = abs( b ); //Si b fuera negativo, la función abs retornaria su valor positivo. Si es positivo, retornara su valor positivo

        //Ciclo while que realizara una multiplicacion mediante sumas sucesivas. Ej: 5*2, lo que hace es sumar 2 veces 5.
        while ( contador <= b ) //Mientras que contador sea menor o igual que b
        {
            suma += a; //suma = suma + numero
            contador++; //Postincrementa contador
        } //Fin de while

        suma *= -1; //Asigna el signo negativo al valor de suma; al multiplicar un numero por -1 el resultado es negativo
    } //Fin de if...else

    //Nota: si a o b tienen un valor de cero no hace falta calcular porque suma se inicializa en 0, por lo que no entraria en ninguno de los if

    cout << "\nEl producto calculado mediante sumas sucesivas es: " << suma << endl; //Imprime el resultado

    return 0;
} //Fin de main