#include <iostream>
using namespace std;

int main()
{
    int segundos, segundosGanador = INT_MAX; // asigna el mayor valor int a la variable segundosGanador
    string nombre, nombreGanador;
    

    while ( nombre != "-1" || segundos != -1 )
    {
        cout << "Escriba el nombre del participante (o -1 para salir): ";
        getline( cin, nombre ); // Lee el nombre con espacios en blanco
        
        if ( nombre == "-1" )
            break; // sale de while
        
        cout << "Tiempo en segundos en recorrer 1500 metros (o -1 para salir): ";
        cin >> segundos;

        if ( segundos == -1 )
            break; // sale de while

        cin.ignore(); // Limpiamos el Buffer de tal manera que el programa pueda continuar

        // si segundos es menor que segundosGanador significa que el nuevo participante es mas veloz
        if ( segundos < segundosGanador )
        {
            nombreGanador = nombre;
            segundosGanador = segundos;
        } // fin de if
    } // fin de while

    float velocidad = 1500.0 / segundosGanador; // la formula para calcular la velocidad es velocidad = distancia/tiempo

    cout << "\nGanador: " << nombreGanador << "\nTiempo: " << segundosGanador << " segundos" << "\nVelocidad: " << velocidad << " m/s" << endl;

    cin.ignore();
    cin.get();
    return 0;
} // fin de main