#include <iostream>
using namespace std;

int main()
{
    float l1, l2, l3;
    int cont = 0; // almacena si los if se cumplen

    cout << "Digite un valor: "; cin >> l1;
    cout << "Digite un valor: "; cin >> l2;
    cout << "Digite un valor: "; cin >> l3;

    // segun el teorema de la desigualdad del triángulo, el cual establece que la suma de dos lados del triángulo siempre es mayor que la medida del tercer lado. Si esto resulta ser verdad para todas las tres combinaciones de las sumas, entonces tienes un triángulo.
    if ( l1 + l2 > l3 )
    {
        cont++;
        if ( l1 + l3 > l2 )
        {
            cont++;
            if ( l2 + l3 > l1 )
            {
                cont++;    
            } // fin de if
        } // fin de if
    } // fin de if

    // verifica si se cumple el teorema de la desigualdad del triángulo
    if ( cont == 3 )
        cout << "Forman un triangulo." << endl;
    else
        cout << "No forman un triangulo." << endl;

    cin.ignore();
    cin.get();
    return 0;
} // fin de main