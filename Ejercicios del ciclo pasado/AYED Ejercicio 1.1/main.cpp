/*
 * Se ingresan por teclado dos valores numéricos enteros, a y b, se pide calcular e informar por consola el resultado de las siguientes operaciones:
   1. La suma: a+b.
   2. La diferencia: a-b.
   3. El producto: a*b.
   4. El cociente: a/b, aceptando que b es distinto de 0 (cero).
 */

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

    //Calcula la suma y almacena el resultado en la variable resultado
    resultado = a + b;
    cout << a << " + " << b << " = " << resultado << endl; //Imprime el resultado

    //Calcula la resta y almacena el resultado en la variable resultado
    resultado = a - b;
    cout << a << " - " << b << " = " << resultado << endl; //Imprime el resultado

    //Calcula la multiplicación y almacena el resultado en la variable resultado
    resultado = a * b;
    cout << a << " * " << b << " = " << resultado << endl; //Imprime el resultado

    //Calcula la división y almacena el resultado en la variable resultado
    if (b != 0) //Si b es distinto de cero
    {
        resultado = a / b;
        cout << a << " / " << b << " = " << resultado << endl; //Imprime el resultado
    } else //De lo contrario, es decir, si b es cero
        cout << "Error. No se puede dividir un numero por " << b << "." << endl;

    return 0;
}