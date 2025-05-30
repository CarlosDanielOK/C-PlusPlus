/*
 * ALGORITMO PARA CALCULAR AÑOS BISIESTOS
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
#include <cstring>
using namespace std;

int main()
{
    int fechaNacimiento;
    string nombre = 'FIFSF';
    
    cout << strcmp( nombre, 'FIN' );

    /*cout << "Introduzca un nombre: ";
    getline( cin, nombre );
    cout << "";
    */

    cin.ignore();
    cin.get();
    return 0;
} // fin de main