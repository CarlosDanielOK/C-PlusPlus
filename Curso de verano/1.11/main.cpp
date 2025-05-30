#include <iostream>
using namespace std;

int main()
{
    int n, mayor, menor, posMayor, posMenor, posicion = 0;
    bool valoresReferencia = true; // variable usada para que en la primera iteracion se guarde el valor de n en mayor y menor
    
    cout << "Ingrese un valor entero (o 0 para salir): ";
    cin >> n;

    // mientras que n sea distinto de 0, itera
    while ( n != 0 )
    {
        // el primer valor ingresado va ser tanto el mayor como el menor y va a estar en la posicion 1
        if ( valoresReferencia == true )
        {
            mayor = n;
            menor = n;
            posMayor = posicion;
            posMenor = posicion;
            valoresReferencia = false; // cambia el valor a false para que no vuelva a entrar en este if
        } // fin de if

        // estos if se evaluan a partir de la segunda iteracion ya que en la primera obtenemos los valores de referencia
        if ( n > mayor)
        {
            mayor = n; // actualiza el valor de mayor por el nuevo numero mayor
            posMayor = posicion; // guarda la posicion del nuevo numero mayor
        }
        else if ( n < menor )
        {
            menor = n; // actualiza el valor de menor por el nuevo numero menor
            posMenor = posicion; // guarda la posicion del nuevo numero menor
        } // fin de if...else

        // pide un nuevo valor o el valor centinela
        cout << "Ingrese un valor entero (o 0 para salir): ";
        cin >> n;

        posicion++; // incrementa posicion porque pasa a la siguiente iteracion
    } // fin de while

    if ( posicion == 0 && n == 0 ) // si el usuario no introdujo ningun numero
    {
        cout << "\nNo se introdujo ningun numero, usted ingreso 0 para salir." << endl;
    }
    else // de lo contrario, si introdujo al menos un numero
    {
        cout << "\nEl numero mayor es: " << mayor << "\nFue ingresado en la posicion: " << posMayor << endl;
        cout << "\nEl numero menor es: " << menor << "\nFue ingresado en la posicion: " << posMenor << endl;
    } // fin de if...else

    cin.ignore();
    cin.get();
    return 0;
} // fin de main