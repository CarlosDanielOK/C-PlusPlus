#include <iostream>
using namespace std;

int main()
{
    float a, b;

    cout << "Ingrese un numero entero: "; cin >> a;
    cout << "Ingrese un numero entero: "; cin >> b;

    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    if ( b == 0 )
        cout << a << " / " << b << " = " "No se puede dividir entre 0." << endl;
    else
        cout << a << " / " << b << " = " << a / b << endl;

    cin.ignore();
    cin.get();
    return 0;
} // fin de main