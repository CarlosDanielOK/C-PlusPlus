// main.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
/*
 * Se ingresan dos fechas, informar cuál es la más cercana a la fecha del proceso (día de hoy). Determinar:
    1. En qué formato el usuario deberá ingresar las fechas solicitadas.
    2. Cuáles son los datos de entrada que el algoritmo necesita para resolver el problema.
    3. Tener en cuenta los años bisiestos.

 * NOTA: Un año es bisiesto si es divisible por 4 exceptuando a aquellos que son divisibles por 100 pero no son divisibles por 400.

 * Obtener el valor absoluto de un número
   La función abs, contenida en la biblioteca stdlib.h, retorna el valor absoluto del valor que recibe como parámetro. Por ejemplo:
    int a = -1;
    int b = abs(a); // b vale: 1

 * ALGORITMO BISIESTO
   Un año es bisiesto en el calendario Gregoriano, si es divisible entre 4 y no divisible entre 100, y también si es divisible entre 400.
   
   Considérese las siguientes proposiciones o enunciados lógicos:
	p: Es divisible entre 4
	~q: No es divisible entre 100
	r: Es divisible entre 400
   
   La fórmula lógica que se suele usar para establecer si un año es bisiesto sería cuando [p y ~q] ó [r] es verdadera, pero esta otra p y [~q ó r] sería más eficiente.
   
   [p y ¬q] ó [r] en C++
   return if ( ( anio % 4 == 0 && anio % 100 != 0 ) || anio % 400 == 0 );

   p y [~q ó r] en C++
   return if ( anio % 4 == 0 && ( anio % 100 != 0 || anio % 400 == 0 ) );

 * EXPLICACIÓN DEL ALGORITMO: Un año bisiesto es divisible por 4, esta condición (anio % 4 == 0) calcula el residuo de dividir la variable anio entre 4 y si es igual que 0 significa que es divisible por 4 y se vuelve true, por lo que cumple una condición para el año sea bisiesto, una sola porque esta condicion esta combinada mediante el operador AND (&&) con otras dos condiciones mas. Ahora estas condiciones combinadas mediante el operador OR (||), ( (anio % 100 != 0) || (anio % 400 == 0) ) la primera calcula el residuo de dividir anio entre 100 y si es distinto de cero es true, de ser false pasa a verificar la siguiente condicion que calcula el residuo de dividir anio entre 400 y si es igual que 0 es true por lo que si alguna de estas dos condiciones es true y tambien la condicion antes de && es true entra en el if y significa que es un año bisiesto. De ser alguna de las dos condiciones falsas, es decir, 1ra: ( (anio % 4 == 0) && 2da: ( (anio % 100 != 0) || (anio % 400 == 0) ) ) significa que no es un año bisiesto.

 * CANTIDAD DE DIAS DE LOS MESES:
   Enero: 31 dias
   Febrero: 28 o 29 dias (depende si el año es o no bisiesto)
   Marzo: 31 dias
   Abril: 30 dias
   Mayo: 31 dias
   Junio: 30 dias
   Julio: 31 dias
   Agosto: 31 dias
   Septiembre: 30 dias
   Octubre: 31 dias
   Noviembre: 30 dias
   Diciembre: 31 dias
 */

#include <iostream>
#include "Fecha.h" //Incluye la definición de la clase Fecha
using namespace std;

int main()
{
    //Crea un objeto Fecha llamado miFecha
    Fecha miFecha;

    //Llama a la funciones miembros del objeto Fecha
    miFecha.pedirFechas();
    miFecha.calcularDistanciaEnDias();
    miFecha.compararFechas();

    system( "pause" );
    return 0;
} //Fin de main

/*
    ALGORITMO QUE SOLO FUNCIONA CON ALGUNAS FECHAS, DA ERRORES CON FECHAS QUE SON IGUAL DE CERCANAS

    int diaA, mesA, anioA, dia1, mes1, anio1, dia2, mes2, anio2; //Variables de tipo entero que almacenan las fechas

    cout << "FECHA ACTUAL" << endl;
    cout << "Digite el anio actual: "; cin >> anioA;
    cout << "Digite el mes actual: "; cin >> mesA;
    cout << "Digite el dia actual: "; cin >> diaA;
    cout << "\nIngrese dos fechas y este programa le dira cual es la mas cercana a la fecha actual.\n" << endl;
    cout << "FECHA 1" << endl;
    cout << "Digite el anio: "; cin >> anio1;
    cout << "Digite el mes: "; cin >> mes1;
    cout << "Digite el dia: "; cin >> dia1;
    cout << "\nFECHA 2" << endl;
    cout << "Digite el anio: "; cin >> anio2;
    cout << "Digite el mes: "; cin >> mes2;
    cout << "Digite el dia: "; cin >> dia2;
    
    //Convierte los años, meses y dias ingresados a formato AAAAMMDD
    int fecha1 = ( ( anio1 * 10000 ) + ( mes1 * 100 ) ) + dia1;
    int fecha2 = ( ( anio2 * 10000 ) + ( mes2 * 100 ) ) + dia2;
    int fechaA = ( ( anioA * 10000 ) + ( mesA * 100 ) ) + diaA;

    //Resta las fechas y compara en cada caso cual es menor para saber cual es la mas cercana o si tienen la misma cercania asignando un valor booleano true o false
    bool fecha2Cerca = abs( fechaA - fecha2 ) < abs( fechaA - fecha1 );
    bool fecha1Cerca = abs( fechaA - fecha1 ) < abs( fechaA - fecha2 );
    bool iguales = abs( fechaA - fecha1 ) == abs( fechaA - fecha2 );

    cout << endl; //Imprime un salto de linea

    if ( fecha1Cerca )
    {
        cout << dia1 << "/" << mes1 << "/" << anio1 << " es la mas cercana a " << diaA << "/" << mesA << "/" << anioA << endl;
    }

    if ( fecha2Cerca )
    {
        cout << dia2 << "/" << mes2 << "/" << anio2 << " es la mas cercana a " << diaA << "/" << mesA << "/" << anioA << endl;;
    }

    if ( iguales )
    {
        cout << "Las fechas están igual de cerca de la fecha actual." << endl;
    }
*/