//Se ingresa por teclado dos valores numéricos enteros, diferentes entre sí. informar cuál es el mayor.

#include <iostream>
using namespace std;

int main()
{
    int a, b; //Declaro dos variables de tipo entero

    //Pide y recibe los numeros
    cout << "Ingrese dos numeros enteros (separelos por un espacio): ";
    cin >> a >> b;

    if (a > b) //Si a es mayor que b
        cout << "El mayor es " << a << endl; //imprime el mayor
    else if (b > a) //Si b es mayor que a
        cout << "El mayor es " << b << endl; //imprime el mayor
    else if (a == b) //Si a y b son iguales
        cout << "Los numeros son iguales." << endl; //imprime su mensaje correspondiente

    return 0;
}