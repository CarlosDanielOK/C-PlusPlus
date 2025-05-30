// AYED Ejercicio 6.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Se ingresan tres valores numéricos enteros que serán diferentes entre sí. Informar cuál es el mayor, cuál está en el medio y cuál es el menor.

#include <iostream>
using namespace std;

int main()
{
    int a, b, c; //Declara tres variables de tipo entero

    //Pide y recibe los numeros enteros
    cout << "Digite tres numeros enteros diferentes entre si (separelos por un espacio): ";
    cin >> a >> b >> c;

    //Verifica cuál es el mayor, cuál está en el medio y cuál es el menor.

    //Prueba con a como el numero mayor
    if ( a > b && a > c ) //Si a es mayor que b y c
    {
        if ( b > c ) //si b es mayor que c, significa que
        {
            cout << "\nEl numero mayor es " << a << endl;
            cout << "El numero que esta en el medio es " << b << endl;
            cout << "El numero menor es " << c << endl;
        }
        else //De lo contrario, significa que c es mayor que b, por lo tanto
        {
            cout << "\nEl numero mayor es " << a << endl;
            cout << "El numero que esta en el medio es " << c << endl;
            cout << "El numero menor es " << b << endl;
        } //Fin de if...else anidado
    }
    //De lo contrario. Prueba con b como el numero mayor
    else if ( b > a && b > c ) //Si b es mayor que a y c
    {
        if ( a > c ) //si a es mayor que c, significa que
        {
            cout << "\nEl numero mayor es " << b << endl;
            cout << "El numero que esta en el medio es " << a << endl;
            cout << "El numero menor es " << c << endl;
        }
        else //De lo contrario, significa que c es mayor que a, por lo tanto
        {
            cout << "\nEl numero mayor es " << b << endl;
            cout << "El numero que esta en el medio es " << c << endl;
            cout << "El numero menor es " << a << endl;
        } //Fin de if...else anidado
    } //Fin de else...if anidado
    //De lo contrario. Prueba con c como el numero mayor
    else if ( c > a && c > b ) //Si c es mayor que a y b
    {
        if ( a > b ) //si a es mayor que b, significa que
        {
            cout << "\nEl numero mayor es " << c << endl;
            cout << "El numero que esta en el medio es " << a << endl;
            cout << "El numero menor es " << b << endl;
        }
        else //De lo contrario, significa que a es mayor que b, por lo tanto
        {
            cout << "\nEl numero mayor es " << c << endl;
            cout << "El numero que esta en el medio es " << b << endl;
            cout << "El numero menor es " << a << endl;
        } //Fin de if...else anidado
    } //Fin de else...if
}