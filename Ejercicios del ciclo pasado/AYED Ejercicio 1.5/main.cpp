//Se ingresa por teclado dos valores numéricos enteros. Informar cuál es el mayor y cuál es el menor. Si son iguales entonces mostrar un mensaje con el siguiente texto: “Los valores ingresados son iguales”.

#include <iostream>
using namespace std;

int main()
{
    int a, b; //Declaro dos variables de tipo entero

    //Pide y recibe los numeros
    cout << "Ingrese dos numeros enteros (separelos por un espacio): ";
    cin >> a >> b;

    //Verifica cuál es el mayor, cuál es el menor y si son iguales
    if (a == b) //Si a y b son iguales
    {
        cout << "Los valores ingresados son iguales" << endl; //imprime su mensaje correspondiente
    } else //De lo contrario
    {
        if (a > b) //si a es mayor que b
        {
            cout << "El mayor es " << a << endl; //imprime que el mayor es a
            cout << "El menor es " << b << endl; //imprime que el menor es b
        } else //De lo contrario, significa que b es mayor que a, por lo tanto
        {
            cout << "El mayor es " << b << endl; //imprime que el mayor es b
            cout << "El menor es " << a << endl; //imprime que el menor es a
        } //Fin de if...else anidado
    } //Fin de if...else

    return 0;
}