// main.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
/*
 * Desarrollar la función toMin (pasar a minutos) que recibe un número entero de 4 dígitos con formato de hhhmm, que corresponde a una cantidad de tiempo expresado en horas y minutos, y retorna ese mismo valor expresado en minutos.
	int toMin(int t);
   Por ejemplo: si t fuese: 25048, que indica 250 horas y 48 minutos, la función debe retornar: 15048.
   Luego, desarrollar la función excedente, que recibe el precio de un abono telefónico, la cantidad de minutos libres incluidos en dicho abono, el cargo por cada minuto excedente y la cantidad de minutos utilizados por el abonado; y retorna la cantidad de minutos excedidos y el importe que debe pagar el abonado.
   El prototipo de la función debe ser el siguiente:
	void excedente(double precio, int minLibres, double valorMinutoExcedente,
				   int minutosUtilizados, int &minutosExcedidos, double &importeAAbonar);

 * Utilizando lo anterior, resolver el siguiente problema:
   Todos los fines de mes, una empresa de telefonía celular emite las facturas por los consumos de sus abonados. Esto se realiza en tres turnos de trabajo: Mañana, Tarde y Noche.
   Para ello, por cada número de celular, se ingresa la siguiente información:
   1. Número de celular (int).
   2. Nombre del abonado (string).
   3. Dirección del abonado (string).
   4. Tiempo de uso (hhhmm, int).
   5. Tipo de abono (A, B, C, D o E, char).

   Dependiendo del tipo de abono, el usuario tiene cierta cantidad de minutos libres, por los cuales no se le cobra ningún cargo extra, pero por cada minuto excedente deberá abonar una suma extra según se indica en la siguiente tabla: (pág. 67)
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//Prototipos de función
int toMin( int t );
void excedente( double precio, int minLibres, double valorMinutoExcedente, int minutosUtilizados, int& minutosExcedidos, double& importeAAbonar );
void pedirDatos();
void imprimirDatos( char turnoMTN, string nombre, string direccion, int minLibres, int minExcedidos, double importe );

int main()
{
    pedirDatos();

    cin.ignore();
	return 0;
}

//Definición de función

//Función que convierte horas y minutos a solo minutos.
int toMin( int t )
{
    //Como t esta en formato hhhmm debemos separar las horas de los minutos para realizar la conversión. t/100 son las horas y *60 da igual a las horas convertidas en minutos. t%100 son los minutos y luego sumamos los minutos
    return (t / 100) * 60 + (t % 100); //Devuelve los minutos
}

//Función que recibe el precio de un abono telefónico, la cantidad de minutos libres incluidos en dicho abono, el cargo por cada minuto excedente y la cantidad de minutos utilizados por el abonado; y retorna la cantidad de minutos excedidos y el importe que debe pagar el abonado.
void excedente( double precio, int minLibres, double valorMinutoExcedente, int minutosUtilizados, int& minutosExcedidos, double& importeAAbonar )
{
    //Si los minutos utilizados es mayor a los minutos libres
    if ( minutosUtilizados > minLibres )
    {
        minutosExcedidos = minutosUtilizados - minLibres; //calcula los minutos excedidos
        importeAAbonar = precio + (minutosExcedidos * valorMinutoExcedente); //calcula el importe a abonar
    }
    else //De lo contrario
    {
        minutosExcedidos = 0; //no se excedio ningun minuto
        importeAAbonar = precio; //asigna el precio normal ya que el cliente no se excedio ningun minuto
    }
}

void pedirDatos()
{
    int numeroCelular, tiempoDeUso;
    string nombreAbonado, direccionAbonado;
    char tipoDeAbono, turno;
    int minutosExcedidos = 0;
    double importeAAbonar = 0;

    cout << "Introduzca el turno M(maniana), T(tarde), N(noche) o 0(salir): ";
    cin >> turno;

    while ( turno != '0' )
    {
        int minutos;

        while ( turno == 'M' || turno == 'T' || turno == 'N' )
        {
            cout << "\nNumero de celular: ";
            cin >> numeroCelular;
            cin.ignore(); //limpia el buffer
            cout << "Nombre del abonado: ";
            getline( cin, nombreAbonado );
            cout << "Direccion del abonado: ";
            getline( cin, direccionAbonado );
            cout << "Tiempo de uso (hhhmm): ";
            cin >> tiempoDeUso;
            cout << "Tipo de abono (A, B, C, D o E): ";
            cin >> tipoDeAbono;

            minutos = toMin( tiempoDeUso ); //Llama a la función que retorna los minutos convertidos

            //Verifica cual es el tipo de abono A, B, C, D o E para calcular los precios
            switch ( tipoDeAbono )
            {
                case 'A':
                    excedente( 1500, 1000, 1, minutos, minutosExcedidos, importeAAbonar );
                    imprimirDatos( turno, nombreAbonado, direccionAbonado, 1000, minutosExcedidos, importeAAbonar );
                    break; //sale del switch
                case 'B':
                    excedente( 1000, 600, 3, minutos, minutosExcedidos, importeAAbonar );
                    imprimirDatos( turno, nombreAbonado, direccionAbonado, 1000, minutosExcedidos, importeAAbonar );
                    break; //sale del switch
                case 'C':
                    excedente( 700, 400, 5, minutos, minutosExcedidos, importeAAbonar );
                    imprimirDatos( turno, nombreAbonado, direccionAbonado, 1000, minutosExcedidos, importeAAbonar );
                    break; //sale del switch
                case 'D':
                    excedente( 500, 300, 7, minutos, minutosExcedidos, importeAAbonar );
                    imprimirDatos( turno, nombreAbonado, direccionAbonado, 1000, minutosExcedidos, importeAAbonar );
                    break; //sale del switch
                case 'E':
                    excedente( 350, 100, 10, minutos, minutosExcedidos, importeAAbonar );
                    imprimirDatos( turno, nombreAbonado, direccionAbonado, 1000, minutosExcedidos, importeAAbonar );
                    break; //sale del switch
                default:
                    break; //sale del switch
            } //Fin de switch

            cout << "\nIntroduzca el turno M(mañana), T(tarde), N(noche) o 0(salir): ";
            cin >> turno;
        }  //Fin de while anidado
    } //Fin de while

    cout << "\nAdios." << endl;
} //Fin de pedirDatos

void imprimirDatos( char turnoMTN, string nombre, string direccion, int minLibres, int minExcedidos, double importe )
{
    cout << "\nTurno: " << turnoMTN << "\n";
    cout << setw(20) << "Abonado" << setw( 20 ) << "Direccion" << setw( 20 ) << "Min. Libres" << setw( 20 ) << "Min Exced." << setw( 20 ) << "Total a abonar" << endl;
    cout << setw( 20 ) << nombre << setw( 20 ) << direccion << setw( 20 ) << minLibres << setw( 20 ) << minExcedidos << setw( 20 ) << importe << endl;
}