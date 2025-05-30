//Se ingresan por teclado dos valores numéricos enteros: a y b, se pide calcular e informar el cociente a/b, validando que b sea distinto de cero; en tal caso, mostrar un mensaje de error en la consola.

#include <iostream>
using namespace std;

int main()
{
    int a, b, resultado; //Declara variables de tipo entero

    //Pide y recibe los datos
    cout << "Ingrese un numero entero: ";
    cin >> a;
    cout << "Ingrese un numero entero: ";
    cin >> b;

    cout << endl; //Imprime un salto de linea

    if (b != 0) //Si b es distinto de cero
    {
        resultado = a / b; //Calcula la división y almacena el resultado en la variable resultado
        cout << a << " / " << b << " = " << resultado << endl; //Imprime el resultado
    } else //De lo contrario, es decir, si b es cero
        cout << "Error. No se puede dividir un numero por " << b << "." << endl; //Imprime un mensaje de error

    return 0;
}