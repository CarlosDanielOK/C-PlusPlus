#include <iostream>
using namespace std;

int main()
{
    char gravedadInfraccion;
    int tipoInfraccion, valorMulta, clausurarFabrica = 0;
    string motivoInfraccion;
    unsigned int totalL = 0, totalM = 0, totalG = 0;

    // itera 20 veces oorque se detectaron 20 infracciones
    for ( int i = 0; i < 5; i++ )
    {
        cout << "Tipo de infraccion (1, 2, 3, o 4): "; cin >> tipoInfraccion;
        cin.ignore(); // Limpiamos el Buffer de tal manera que el programa pueda continuar
        cout << "Motivo de la infraccion: "; getline( cin, motivoInfraccion );
        cout << "Valor de la multa: $"; cin >> valorMulta;
        cout << "Gravedad de la infraccion ('L','M', 'G'): "; cin >> gravedadInfraccion;

        // suma los valores totales de la multa a pagar de acuerdo al tipo de gravedad
        switch ( gravedadInfraccion )
        {
        case 'L':
            totalL += valorMulta; // suma las multas de gravedad L
            break; // sale de switch
        case 'M':
            totalM += valorMulta; // suma las multas de gravedad M
            break; // sale de switch
        case 'G':
            totalG += valorMulta; // suma las multas de gravedad G
            // calcula la cantidad de infracciones 3 y 4 con gravedad “G”
            if ( tipoInfraccion == 3 || tipoInfraccion == 4 )
            {
                clausurarFabrica++; // incrementa en uno la variable para luego definir si se clausura o no
            } // fin de if
            break; // sale de switch
        default:
            cout << "El programa nunca deberia llegar aqui!" << endl;
            break;
        } // fin de switch

        cin.ignore(); // Limpiamos el Buffer de tal manera que el programa pueda continuar
        cout << endl; // imprime un salto de linea
    } // fin de for

    // imprime lo pedido en el enunciado del problema
    cout << "\nValor total de la multa a pagar de gravedad 'L': $" << totalL;
    cout << "\nValor total de la multa a pagar de gravedad 'M': $" << totalM;
    cout << "\nValor total de la multa a pagar de gravedad 'G': $" << totalG;

    // si clausurarFabrica > 3 es true entonces imprime "Clausurar fabrica.", si es false imprime "No clausurar fabrica."
    cout << ( clausurarFabrica > 3 ? "\n\nClausurar fabrica." : "\n\nNo clausurar fabrica." ) << endl;

    cin.ignore();
    cin.get();
    return 0;
} // fin de main