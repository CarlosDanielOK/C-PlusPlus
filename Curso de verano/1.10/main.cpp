#include <iostream>
using namespace std;

int main()
{
    float sueldo;
    int cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0;

    cout << "Ingrese el sueldo (o 0 para salir): $"; 
    cin >> sueldo;

    while ( sueldo != 0 )
    {
        if ( sueldo < 1520 )
        {
            cont1++; // incrementa en uno el numero de empleados que ganan menos de $1.520
        }
        else if ( sueldo >= 1520 && sueldo < 2780 )
        {
            cont2++; // incrementa en uno el numero de empleados que ganan $1.520 o mas pero menos de $2.780
        }
        else if ( sueldo >= 2780 && sueldo < 5999 )
        {
            cont3++; // incrementa en uno el numero de empleados que ganan $2.780 o mas pero menos de $5.999
        }
        else if ( sueldo >= 5999 )
        {
            cont4++; // incrementa en uno el numero de empleados que ganan $5.999 o mas
        } // fin de if...else

        cout << "Ingrese el sueldo (o 0 para salir): $";
        cin >> sueldo;
    } // fin de while
    
    cout << "\n" << cont1 << " empleados ganan menos de $1.520.";
    cout << "\n" << cont2 << " empleados ganan $1.520 o mas pero menos de $2.780.";
    cout << "\n" << cont3 << " empleados ganan $2.780 o mas pero menos de $5.999.";
    cout << "\n" << cont4 << " empleados ganan $5.999 o mas.";

    cin.ignore();
    cin.get();
    return 0;
} // fin de main