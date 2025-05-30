//Fecha.cpp: Definiciones de las funciones miembro de Fecha. Este archivo contiene implementaciones de las funciones miembro cuyo prototipo está en Fecha.h
//Se puede mejorar mucho el rendimiendo pero seria una perdida de tiempo solo para un solo ejercicio. Una mejor resolución lo hago en el ejercicio 28.

#include <iostream>;
#include "Fecha.h" //Incluye la definición de la clase Fecha
using namespace std;

//El constructor inicializa contadorDias1 y contadorDias2 con el objeto int suministrado como argumento
Fecha::Fecha()
	:contadorDias1( 0 ), contadorDias2( 0 ) //Inicializador de miembro que inicializa el dato miembro contadorDias1 y contadorDias2 con el valor 0 entre parentesis
{
	//Cuerpo vacio
}

//Función que pide las fechas al usuario
void Fecha::pedirFechas()
{
    cout << "FECHA ACTUAL" << endl;
    cout << "Digite el anio actual: "; cin >> anio;
    cout << "Digite el mes actual: "; cin >> mes;
    cout << "Digite el dia actual: "; cin >> dia;
    cout << "\nIngrese dos fechas y este programa le dira cual es la mas cercana a la fecha actual.\n" << endl;
    cout << "FECHA 1" << endl;
    cout << "Digite el anio: "; cin >> anio1;
    cout << "Digite el mes: "; cin >> mes1;
    cout << "Digite el dia: "; cin >> dia1;
    cout << "\nFECHA 2" << endl;
    cout << "Digite el anio: "; cin >> anio2;
    cout << "Digite el mes: "; cin >> mes2;
    cout << "Digite el dia: "; cin >> dia2;

    //Muestra al usuario que los datos ingresados sean correctos
    cout << "\nFECHA ACTUAL: " << anio << "/" << mes << "/" << dia << endl;
    cout << "FECHA 1: " << anio1 << "/" << mes1 << "/" << dia1 << endl;
    cout << "FECHA 2: " << anio2 << "/" << mes2 << "/" << dia2 << endl;
}

//Función que calcula la distancia en dias entre una fecha y la fecha actual, y otra fecha y la actual para saber cual es la mas cercana a la fecha actual
void Fecha::calcularDistanciaEnDias()
{
    unsigned int aux; //Variable local de tipo entero no signado que almacena una copia de los años

    //SI ANIO1 ES IGUAL A ANIO, ES DECIR SI EL AÑO DE LA FECHA 1 Y EL AÑO DE LA FECHA ACTUAL SON IGUALES...
    if ( anio1 == anio )
    {
        //Calcula la diferencia de dias dependiendo del mes en que este mes1
        if ( mes1 == 1 ) //Si es enero
        {
            if ( mes == 1 ) //Si es enero
                contadorDias1 = abs( dia - dia1 ); //Calcula los dias de diferencia y asigna el valor absoluto a contadorDias1. Al obtener el valor absoluto nos aseguramos de que si el resultado es negativo lo convierte en positivo porque la distancia de dias aunque sea negativa sigue siendo igual
            else if ( mes == 2 ) //Si es febrero
                contadorDias1 = 31 - dia1 + dia; //Total de dias de enero - dias transcurridos de enero + dias de febrero = dias de diferencia entre la fecha 1 y la fecha actual
            //A partir de aca asume que febrero tiene 28 dias.
            else if ( mes == 3 ) //Si es marzo
                contadorDias1 = 59 - dia1 + dia; //(ene+feb) - dias transcurridos de enero + dias de marzo = dias de diferencia entre la fecha 1 y la fecha actual
            //El algoritmo funciona igual hasta llegar a diciembre
            else if ( mes == 4 ) //Si es abril
                contadorDias1 = 90 - dia1 + dia;
            else if ( mes == 5 ) //Si es mayo
                contadorDias1 = 120 - dia1 + dia;
            else if ( mes == 6 ) //Si es junio
                contadorDias1 = 151 - dia1 + dia;
            else if ( mes == 7 ) //Si es julio
                contadorDias1 = 181 - dia1 + dia;
            else if ( mes == 8 ) //Si es agosto
                contadorDias1 = 212 - dia1 + dia;
            else if ( mes == 9 ) //Si es septiembre
                contadorDias1 = 243 - dia1 + dia;
            else if ( mes == 10 ) //Si es octubre
                contadorDias1 = 273 - dia1 + dia;
            else if ( mes == 11 ) //Si es noviembre
                contadorDias1 = 304 - dia1 + dia;
            else if ( mes == 12 ) //Si es diciembre
                contadorDias1 = 334 - dia1 + dia;

            //Luego, verificamos si el año actual es bisiesto para sumarle un dia a contadorDias1 pero a partir de febrero
            if ( mes > 2 )
                if ( ( anio1 % 4 == 0 ) && ( ( anio1 % 100 != 0 ) || ( anio1 % 400 == 0 ) ) ) //Si es bisiesto
                    contadorDias1++; //suma un dia, porque antes asumimos que febrero tenia 28 dias y en realidad tiene 29
        } //Fin de if anidado

        if ( mes1 == 2 ) //Si es febrero
        {
            if ( mes == 1 ) //Si es enero
                contadorDias1 = 31 - dia + dia1; //Total de dias de enero - dias transcurridos de enero + dias trancurridos de febrero = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 2 ) //Si es febrero
                contadorDias1 = abs( dia - dia1 ); //Calcula los dias de diferencia y asigna el valor absoluto a contadorDias1. Al obtener el valor absoluto nos aseguramos de que si el resultado es negativo lo convierte en positivo porque la distancia de dias aunque sea negativa sigue siendo igual
            //A partir de aca asume que febrero tiene 28 dias
            else if ( mes == 3 ) //Si es marzo
                contadorDias1 = 28 - dia1 + dia; //Total de dias de febrero - dias transcurridos de febrero de fecha 1 + dias transcurridos de marzo = diferencia de dias entre fecha 1 y fecha actual
            else if ( mes == 4 ) //Si es abril
                contadorDias1 = 59 - dia1 + dia; //(ene+feb) - dias transcurridos de febrero de fecha 1 + dias transcurridos de abril
            else if ( mes == 5 ) //Si es mayo
                contadorDias1 = 90 - dia1 + dia; //(ene+feb+mar) - dias transcurridos de febrero de fecha 1 + dias transcurridos de mayo
            else if ( mes == 6 ) //Si es junio
                contadorDias1 = 120 - dia1 + dia; //(ene+feb+mar+abr) - dias transcurridos de febrero de fecha 1 + dias transcurridos de junio
            //El algoritmo funciona igual hasta llegar a diciembre
            else if ( mes == 7 ) //Si es julio
                contadorDias1 = 151 - dia1 + dia;
            else if ( mes == 8 ) //Si es agosto
                contadorDias1 = 181 - dia1 + dia;
            else if ( mes == 9 ) //Si es septiembre
                contadorDias1 = 212 - dia1 + dia;
            else if ( mes == 10 ) //Si es octubre
                contadorDias1 = 243 - dia1 + dia;
            else if ( mes == 11 ) //Si es noviembre
                contadorDias1 = 273 - dia1 + dia;
            else if ( mes == 12 ) //Si es diciembre
                contadorDias1 = 304 - dia1 + dia;

            //Luego, verificamos si el año actual es bisiesto para sumarle un dia a contadorDias1 pero a partir de febrero
            if ( mes > 2 )
            {
                if ( ( anio1 % 4 == 0 ) && ( ( anio1 % 100 != 0 ) || ( anio1 % 400 == 0 ) ) ) //Si es bisiesto
                    contadorDias1++; //suma un dia, porque antes asumimos que febrero tenia 28 dias y en realidad tiene 29
            } //Fin de if anidado
        } //Fin de if anidado

        if ( mes1 == 3 ) //Si es marzo
        {
            if ( mes == 1 ) //Si es enero
                contadorDias1 = 59 - dia + dia1; //(ene+feb) - dias transcurridos de enero + dias trancurridos de marzo = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 2 ) //Si es febrero
                contadorDias1 = 28 - dia + dia1; //febrero - dia trascurridos de febrero + dias transcurridos de marzo = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 3 ) //Si es marzo
                contadorDias1 = abs( dia - dia1 ); //Calcula los dias de diferencia y asigna el valor absoluto a contadorDias1. Al obtener el valor absoluto nos aseguramos de que si el resultado es negativo lo convierte en positivo porque la distancia de dias aunque sea negativa sigue siendo igual
            else if ( mes == 4 ) //Si es abril
                contadorDias1 = 31 - dia1 + dia; //marzo - dias transcurridos de marzo de fecha 1 + dias transcurridos de abr
            else if ( mes == 5 ) //Si es mayo
                contadorDias1 = 61 - dia1 + dia; //(mar+abr) - dias transcurridos de marzo de fecha 1 + dias transcurridos de may
            else if ( mes == 6 ) //Si es junio
                contadorDias1 = 92 - dia1 + dia; //(mar+abr+may) - dias transcurridos de marzo de fecha 1 + dias transcurridos de jun
            else if ( mes == 7 ) //Si es julio
                contadorDias1 = 122 - dia1 + dia; //(mar+abr+may+jun) - dias transcurridos de marzo de fecha 1 + dias transcurridos de jul
            //El algoritmo funciona igual hasta llegar a diciembre
            else if ( mes == 8 ) //Si es agosto
                contadorDias1 = 153 - dia1 + dia;
            else if ( mes == 9 ) //Si es septiembre
                contadorDias1 = 184 - dia1 + dia;
            else if ( mes == 10 ) //Si es octubre
                contadorDias1 = 214 - dia1 + dia;
            else if ( mes == 11 ) //Si es noviembre
                contadorDias1 = 245 - dia1 + dia;
            else if ( mes == 12 ) //Si es diciembre
                contadorDias1 = 275 - dia1 + dia;

            //Luego, verificamos si el año actual es bisiesto para sumarle un dia a contadorDias1 pero antes de febrero porque el dia de mas que provoca un año bisiesto se encuentra en febrero y no despues de los demas meses
            if ( mes <= 2 )
            {
                if ( ( anio1 % 4 == 0 ) && ( ( anio1 % 100 != 0 ) || ( anio1 % 400 == 0 ) ) ) //Si es bisiesto
                    contadorDias1++; //suma un dia, porque antes asumimos que febrero tenia 28 dias y en realidad tiene 29
            } //Fin de if anidado
        } //Fin de if anidado

        if ( mes1 == 4 ) //Si es abril
        {
            //Asume que febrero tiene 28 dias
            if ( mes == 1 ) //Si es enero
                contadorDias1 = 90 - dia + dia1; //(ene+feb+mar) - dias transcurridos de enero + dias trancurridos de abril = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 2 ) //Si es febrero
                contadorDias1 = 59 - dia + dia1; //(feb+mar) - dia trascurridos de febrero + dias transcurridos de abril = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 3 ) //Si es marzo
                contadorDias1 = 31 - dia + dia1; //mar - dia trascurridos de marzo + dias transcurridos de abril = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 4 ) //Si es abril
                contadorDias1 = abs( dia - dia1 ); //Calcula los dias de diferencia y asigna el valor absoluto a contadorDias1. Al obtener el valor absoluto nos aseguramos de que si el resultado es negativo lo convierte en positivo porque la distancia de dias aunque sea negativa sigue siendo igual
            else if ( mes == 5 ) //Si es mayo
                contadorDias1 = 30 - dia1 + dia; //abril - dias transcurridos de abril de fecha 1 + dias transcurridos de mayo
            else if ( mes == 6 ) //Si es junio
                contadorDias1 = 61 - dia1 + dia; //(abr+may) - dias transcurridos de abril de fecha 1 + dias transcurridos de junio
            else if ( mes == 7 ) //Si es julio
                contadorDias1 = 91 - dia1 + dia; //(abr+may+jun) - dias transcurridos de abril de fecha 1 + dias transcurridos de julio
            //El algoritmo funciona igual hasta llegar a diciembre
            else if ( mes == 8 ) //Si es agosto
                contadorDias1 = 122 - dia1 + dia;
            else if ( mes == 9 ) //Si es septiembre
                contadorDias1 = 153 - dia1 + dia;
            else if ( mes == 10 ) //Si es octubre
                contadorDias1 = 183 - dia1 + dia;
            else if ( mes == 11 ) //Si es noviembre
                contadorDias1 = 214 - dia1 + dia;
            else if ( mes == 12 ) //Si es diciembre
                contadorDias1 = 244 - dia1 + dia;

            //Luego, verificamos si el año actual es bisiesto para sumarle un dia a contadorDias1 pero antes de febrero porque el dia de mas que provoca un año bisiesto se encuentra en febrero y no despues de los demas meses
            if ( mes <= 2 )
            {
                if ( ( anio1 % 4 == 0 ) && ( ( anio1 % 100 != 0 ) || ( anio1 % 400 == 0 ) ) ) //Si es bisiesto
                    contadorDias1++; //suma un dia, porque antes asumimos que febrero tenia 28 dias y en realidad tiene 29
            } //Fin de if anidado
        } //Fin de if anidado

        if ( mes1 == 4 ) //Si es abril
        {
            //Asume que febrero tiene 28 dias
            if ( mes == 1 ) //Si es enero
                contadorDias1 = 90 - dia + dia1; //(ene+feb+mar) - dias transcurridos de enero + dias trancurridos de abril = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 2 ) //Si es febrero
                contadorDias1 = 59 - dia + dia1; //(feb+mar) - dia trascurridos de febrero + dias transcurridos de abril = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 3 ) //Si es marzo
                contadorDias1 = 31 - dia + dia1; //mar - dia trascurridos de marzo + dias transcurridos de abril = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 4 ) //Si es abril
                contadorDias1 = abs( dia - dia1 ); //Calcula los dias de diferencia y asigna el valor absoluto a contadorDias1. Al obtener el valor absoluto nos aseguramos de que si el resultado es negativo lo convierte en positivo porque la distancia de dias aunque sea negativa sigue siendo igual
            else if ( mes == 5 ) //Si es mayo
                contadorDias1 = 30 - dia1 + dia; //abril - dias transcurridos de abril de fecha 1 + dias transcurridos de mayo
            else if ( mes == 6 ) //Si es junio
                contadorDias1 = 61 - dia1 + dia; //(abr+may) - dias transcurridos de abril de fecha 1 + dias transcurridos de junio
            else if ( mes == 7 ) //Si es julio
                contadorDias1 = 91 - dia1 + dia; //(abr+may+jun) - dias transcurridos de abril de fecha 1 + dias transcurridos de julio
                //El algoritmo funciona igual hasta llegar a diciembre
            else if ( mes == 8 ) //Si es agosto
                contadorDias1 = 122 - dia1 + dia;
            else if ( mes == 9 ) //Si es septiembre
                contadorDias1 = 153 - dia1 + dia;
            else if ( mes == 10 ) //Si es octubre
                contadorDias1 = 183 - dia1 + dia;
            else if ( mes == 11 ) //Si es noviembre
                contadorDias1 = 214 - dia1 + dia;
            else if ( mes == 12 ) //Si es diciembre
                contadorDias1 = 244 - dia1 + dia;

            //Luego, verificamos si el año actual es bisiesto para sumarle un dia a contadorDias1 pero antes de febrero porque el dia de mas que provoca un año bisiesto se encuentra en febrero y no despues de los demas meses
            if ( mes <= 2 )
            {
                if ( ( anio1 % 4 == 0 ) && ( ( anio1 % 100 != 0 ) || ( anio1 % 400 == 0 ) ) ) //Si es bisiesto
                    contadorDias1++; //suma un dia, porque antes asumimos que febrero tenia 28 dias y en realidad tiene 29
            } //Fin de if anidado
        } //Fin de if anidado

        if ( mes1 == 5 ) //Si es mayo
        {
            //Asume que febrero tiene 28 dias
            if ( mes == 1 ) //Si es enero
                contadorDias1 = 120 - dia + dia1; //(ene+feb+mar+abr) - dias transcurridos de enero + dias trancurridos de mayo = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 2 ) //Si es febrero
                contadorDias1 = 89 - dia + dia1; //(feb+mar+abr) - dia trascurridos de febrero + dias transcurridos de mayo = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 3 ) //Si es marzo
                contadorDias1 = 61 - dia + dia1; //(mar+abr) - dia trascurridos de marzo + dias transcurridos de mayo = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 4 ) //Si es abril
                contadorDias1 = 30 - dia + dia1; //abr - dia trascurridos de abril + dias transcurridos de mayo = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 5 ) //Si es mayo
                contadorDias1 = abs( dia - dia1 ); //Calcula los dias de diferencia y asigna el valor absoluto a contadorDias1. Al obtener el valor absoluto nos aseguramos de que si el resultado es negativo lo convierte en positivo porque la distancia de dias aunque sea negativa sigue siendo igual
            else if ( mes == 6 ) //Si es junio
                contadorDias1 = 31 - dia1 + dia; //may - dias transcurridos de may de fecha 1 + dias transcurridos de junio
            else if ( mes == 7 ) //Si es julio
                contadorDias1 = 61 - dia1 + dia; //(may+jun) - dias transcurridos de may de fecha 1 + dias transcurridos de julio
            //El algoritmo funciona igual hasta llegar a diciembre
            else if ( mes == 8 ) //Si es agosto
                contadorDias1 = 92 - dia1 + dia;
            else if ( mes == 9 ) //Si es septiembre
                contadorDias1 = 123 - dia1 + dia;
            else if ( mes == 10 ) //Si es octubre
                contadorDias1 = 153 - dia1 + dia;
            else if ( mes == 11 ) //Si es noviembre
                contadorDias1 = 184 - dia1 + dia;
            else if ( mes == 12 ) //Si es diciembre
                contadorDias1 = 214 - dia1 + dia;

            //Luego, verificamos si el año actual es bisiesto para sumarle un dia a contadorDias1 pero antes de febrero porque el dia de mas que provoca un año bisiesto se encuentra en febrero y no despues de los demas meses
            if ( mes <= 2 )
            {
                if ( ( anio1 % 4 == 0 ) && ( ( anio1 % 100 != 0 ) || ( anio1 % 400 == 0 ) ) ) //Si es bisiesto
                    contadorDias1++; //suma un dia, porque antes asumimos que febrero tenia 28 dias y en realidad tiene 29
            } //Fin de if anidado
        } //Fin de if anidado

        if ( mes1 == 6 ) //Si es junio
        {
            //Asume que febrero tiene 28 dias
            if ( mes == 1 ) //Si es eneroB
                contadorDias1 = 151 - dia + dia1; //(ene+feb+mar+abr+may) - dias transcurridos de enero + dias trancurridos de junio = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 2 ) //Si es febreroB
                contadorDias1 = 120 - dia + dia1; //(feb+mar+abr+may) - dia trascurridos de febrero + dias transcurridos de junio = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 3 ) //Si es marzo
                contadorDias1 = 92 - dia + dia1; //(mar+abr+may) - dia trascurridos de marzo + dias transcurridos de junio = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 4 ) //Si es abril
                contadorDias1 = 61 - dia + dia1; //(abr+may) - dia trascurridos de abril + dias transcurridos de junio = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 5 ) //Si es mayo
                contadorDias1 = 31 - dia1 + dia; //may - dias transcurridos de mayo de fecha 1 + dias transcurridos de junio
            else if ( mes == 6 ) //Si es junio
                contadorDias1 = abs( dia - dia1 ); //Calcula los dias de diferencia y asigna el valor absoluto a contadorDias1. Al obtener el valor absoluto nos aseguramos de que si el resultado es negativo lo convierte en positivo porque la distancia de dias aunque sea negativa sigue siendo igual
            else if ( mes == 7 ) //Si es julio
                contadorDias1 = 30 - dia1 + dia; //jun - dias transcurridos de junio de fecha 1 + dias transcurridos de julio
            //El algoritmo funciona igual hasta llegar a diciembre
            else if ( mes == 8 ) //Si es agosto
                contadorDias1 = 61 - dia1 + dia;
            else if ( mes == 9 ) //Si es septiembre
                contadorDias1 = 92 - dia1 + dia;
            else if ( mes == 10 ) //Si es octubre
                contadorDias1 = 122 - dia1 + dia;
            else if ( mes == 11 ) //Si es noviembre
                contadorDias1 = 153 - dia1 + dia;
            else if ( mes == 12 ) //Si es diciembre
                contadorDias1 = 183 - dia1 + dia;

            //Luego, verificamos si el año actual es bisiesto para sumarle un dia a contadorDias1 pero antes de febrero porque el dia de mas que provoca un año bisiesto se encuentra en febrero y no despues de los demas meses
            if ( mes <= 2 )
            {
                if ( ( anio1 % 4 == 0 ) && ( ( anio1 % 100 != 0 ) || ( anio1 % 400 == 0 ) ) ) //Si es bisiesto
                    contadorDias1++; //suma un dia, porque antes asumimos que febrero tenia 28 dias y en realidad tiene 29
            } //Fin de if anidado
        } //Fin de if anidado

        if ( mes1 == 7 ) //Si es julio
        {
            //Asume que febrero tiene 28 dias
            if ( mes == 1 ) //Si es eneroB
                contadorDias1 = 181 - dia + dia1; //(ene+feb+mar+abr+may+jun) - dias transcurridos de enero + dias trancurridos de julio = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 2 ) //Si es febreroB
                contadorDias1 = 150 - dia + dia1; //(feb+mar+abr+may+jun) - dia trascurridos de febrero + dias transcurridos de julio = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 3 ) //Si es marzo
                contadorDias1 = 122 - dia + dia1; //(mar+abr+may+jun) - dia trascurridos de marzo + dias transcurridos de julio = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 4 ) //Si es abril
                contadorDias1 = 91 - dia + dia1; //(abr+may+jun) - dia trascurridos de abril + dias transcurridos de julio = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 5 ) //Si es mayo
                contadorDias1 = 61 - dia + dia1; //(may+jun) - dias transcurridos de mayo de fecha 1 + dias transcurridos de julio = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 6 ) //Si es junio
                contadorDias1 = 30 - dia + dia1; //jun - dias transcurridos de junio de fecha 1 + dias transcurridos de julio
            else if ( mes == 7 ) //Si es julio
                contadorDias1 = abs( dia - dia1 ); //Calcula los dias de diferencia y asigna el valor absoluto a contadorDias1. Al obtener el valor absoluto nos aseguramos de que si el resultado es negativo lo convierte en positivo porque la distancia de dias aunque sea negativa sigue siendo igual
            else if ( mes == 8 ) //Si es agosto
                contadorDias1 = 31 - dia1 + dia; //jul - dias transcurridos de julio de fecha 1 + dias transcurridos de agosto
            //El algoritmo funciona igual hasta llegar a diciembre
            else if ( mes == 9 ) //Si es septiembre
                contadorDias1 = 62 - dia1 + dia;
            else if ( mes == 10 ) //Si es octubre
                contadorDias1 = 92 - dia1 + dia;
            else if ( mes == 11 ) //Si es noviembre
                contadorDias1 = 123 - dia1 + dia;
            else if ( mes == 12 ) //Si es diciembre
                contadorDias1 = 153 - dia1 + dia;

            //Luego, verificamos si el año actual es bisiesto para sumarle un dia a contadorDias1 pero antes de febrero porque el dia de mas que provoca un año bisiesto se encuentra en febrero y no despues de los demas meses
            if ( mes <= 2 )
            {
                if ( ( anio1 % 4 == 0 ) && ( ( anio1 % 100 != 0 ) || ( anio1 % 400 == 0 ) ) ) //Si es bisiesto
                    contadorDias1++; //suma un dia, porque antes asumimos que febrero tenia 28 dias y en realidad tiene 29
            } //Fin de if anidado
        } //Fin de if anidado

        if ( mes1 == 8 ) //Si es agosto
        {
            //Asume que febrero tiene 28 dias
            if ( mes == 1 ) //Si es eneroB
                contadorDias1 = 212 - dia + dia1; //(ene+feb+mar+abr+may+jun+jul) - dias transcurridos de enero + dias trancurridos de agosto = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 2 ) //Si es febreroB
                contadorDias1 = 181 - dia + dia1; //(feb+mar+abr+may+jun+jul) - dia trascurridos de febrero + dias transcurridos de agosto = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 3 ) //Si es marzo
                contadorDias1 = 153 - dia + dia1; //(mar+abr+may+jun+jul) - dia trascurridos de marzo + dias transcurridos de agosto = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 4 ) //Si es abril
                contadorDias1 = 122 - dia + dia1; //(abr+may+jun+jul) - dia trascurridos de abril + dias transcurridos de agosto = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 5 ) //Si es mayo
                contadorDias1 = 92 - dia + dia1; //(may+jun+jul) - dias transcurridos de mayo de fecha 1 + dias transcurridos de agosto = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 6 ) //Si es junio
                contadorDias1 = 61 - dia + dia1; //(jun+jul) - dias transcurridos de junio de fecha 1 + dias transcurridos de agosto
            else if ( mes == 7 ) //Si es julio
                contadorDias1 = 31 - dia + dia1; //jul - dias transcurridos de julio de fecha 1 + dias transcurridos de agosto
            else if ( mes == 8 ) //Si es agosto
                contadorDias1 = abs( dia - dia1 ); //Calcula los dias de diferencia y asigna el valor absoluto a contadorDias1. Al obtener el valor absoluto nos aseguramos de que si el resultado es negativo lo convierte en positivo porque la distancia de dias aunque sea negativa sigue siendo igual
            else if ( mes == 9 ) //Si es septiembre
                contadorDias1 = 31 - dia1 + dia; //agosto - dias transcurridos de agosto de fecha 1 + dias transcurridos de septiembre
            //El algoritmo funciona igual hasta llegar a diciembre
            else if ( mes == 10 ) //Si es octubre
                contadorDias1 = 61 - dia1 + dia;
            else if ( mes == 11 ) //Si es noviembre
                contadorDias1 = 92 - dia1 + dia;
            else if ( mes == 12 ) //Si es diciembre
                contadorDias1 = 122 - dia1 + dia;

            //Luego, verificamos si el año actual es bisiesto para sumarle un dia a contadorDias1 pero antes de febrero porque el dia de mas que provoca un año bisiesto se encuentra en febrero y no despues de los demas meses
            if ( mes <= 2 )
            {
                if ( ( anio1 % 4 == 0 ) && ( ( anio1 % 100 != 0 ) || ( anio1 % 400 == 0 ) ) ) //Si es bisiesto
                    contadorDias1++; //suma un dia, porque antes asumimos que febrero tenia 28 dias y en realidad tiene 29
            } //Fin de if anidado
        } //Fin de if anidado

        if ( mes1 == 9 ) //Si es septiembre
        {
            //Asume que febrero tiene 28 dias
            if ( mes == 1 ) //Si es eneroB
                contadorDias1 = 243 - dia + dia1; //(ene+feb+mar+abr+may+jun+jul+ago) - dias transcurridos de enero + dias trancurridos de septiembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 2 ) //Si es febreroB
                contadorDias1 = 212 - dia + dia1; //(feb+mar+abr+may+jun+jul+ago) - dia trascurridos de febrero + dias transcurridos de septiembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 3 ) //Si es marzo
                contadorDias1 = 184 - dia + dia1; //(mar+abr+may+jun+jul+ago) - dia trascurridos de marzo + dias transcurridos de septiembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 4 ) //Si es abril
                contadorDias1 = 153 - dia + dia1; //(abr+may+jun+jul+ago) - dia trascurridos de abril + dias transcurridos de septiembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 5 ) //Si es mayo
                contadorDias1 = 123 - dia + dia1; //(may+jun+jul+ago) - dias transcurridos de mayo de fecha 1 + dias transcurridos de septiembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 6 ) //Si es junio
                contadorDias1 = 92 - dia + dia1; //(jun+jul+ago) - dias transcurridos de junio de fecha 1 + dias transcurridos de septiembre
            else if ( mes == 7 ) //Si es julio
                contadorDias1 = 62 - dia + dia1; //(jul+ago) - dias transcurridos de julio de fecha 1 + dias transcurridos de septiembre
            else if ( mes == 8 ) //Si es agosto
                contadorDias1 = 31 - dia + dia1; //agosto - dias transcurridos de agosto de fecha 1 + dias transcurridos de septiembre
            else if ( mes == 9 ) //Si es septiembre
                contadorDias1 = abs( dia - dia1 ); //Calcula los dias de diferencia y asigna el valor absoluto a contadorDias1. Al obtener el valor absoluto nos aseguramos de que si el resultado es negativo lo convierte en positivo porque la distancia de dias aunque sea negativa sigue siendo igual
            else if ( mes == 10 ) //Si es octubre
                contadorDias1 = 30 - dia1 + dia; //septiembre - dias transcurridos de septiembre de fecha 1 + dias transcurridos de octubre
            //El algoritmo funciona igual hasta llegar a diciembre
            else if ( mes == 11 ) //Si es noviembre
                contadorDias1 = 61 - dia1 + dia;
            else if ( mes == 12 ) //Si es diciembre
                contadorDias1 = 91 - dia1 + dia;

            //Luego, verificamos si el año actual es bisiesto para sumarle un dia a contadorDias1 pero antes de febrero porque el dia de mas que provoca un año bisiesto se encuentra en febrero y no despues de los demas meses
            if ( mes <= 2 )
            {
                if ( ( anio1 % 4 == 0 ) && ( ( anio1 % 100 != 0 ) || ( anio1 % 400 == 0 ) ) ) //Si es bisiesto
                    contadorDias1++; //suma un dia, porque antes asumimos que febrero tenia 28 dias y en realidad tiene 29
            } //Fin de if anidado
        } //Fin de if anidado

        if ( mes1 == 10 ) //Si es octubre
        {
            //Asume que febrero tiene 28 dias
            if ( mes == 1 ) //Si es eneroB
                contadorDias1 = 273 - dia + dia1; //(ene+feb+mar+abr+may+jun+jul+ago+sep) - dias transcurridos de enero + dias trancurridos de octubre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 2 ) //Si es febreroB
                contadorDias1 = 242 - dia + dia1; //(feb+mar+abr+may+jun+jul+ago+sep) - dia trascurridos de febrero + dias transcurridos de octubre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 3 ) //Si es marzo
                contadorDias1 = 214 - dia + dia1; //(mar+abr+may+jun+jul+ago+sep) - dia trascurridos de marzo + dias transcurridos de octubre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 4 ) //Si es abril
                contadorDias1 = 183 - dia + dia1; //(abr+may+jun+jul+ago+sep) - dia trascurridos de abril + dias transcurridos de octubre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 5 ) //Si es mayo
                contadorDias1 = 153 - dia + dia1; //(may+jun+jul+ago+sep) - dias transcurridos de mayo de fecha 1 + dias transcurridos de octubre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 6 ) //Si es junio
                contadorDias1 = 122 - dia + dia1; //(jun+jul+ago+sep) - dias transcurridos de junio de fecha 1 + dias transcurridos de octubre
            else if ( mes == 7 ) //Si es julio
                contadorDias1 = 92 - dia + dia1; //(jul+ago+sep) - dias transcurridos de julio de fecha 1 + dias transcurridos de octubre
            else if ( mes == 8 ) //Si es agosto
                contadorDias1 = 61 - dia + dia1; //(ago+sep) - dias transcurridos de agosto de fecha 1 + dias transcurridos de octubre
            else if ( mes == 9 ) //Si es septiembre
                contadorDias1 = 30 - dia + dia1; //septiembre - dias transcurridos de septiembre de fecha 1 + dias transcurridos de octubre
            else if ( mes == 10 ) //Si es octubre
                contadorDias1 = abs( dia - dia1 ); //Calcula los dias de diferencia y asigna el valor absoluto a contadorDias1. Al obtener el valor absoluto nos aseguramos de que si el resultado es negativo lo convierte en positivo porque la distancia de dias aunque sea negativa sigue siendo igual
            else if ( mes == 11 ) //Si es noviembre
                contadorDias1 = 31 - dia1 + dia; //octubre - dias transcurridos de octubre de fecha 1 + dias transcurridos de noviembre
            else if ( mes == 12 ) //Si es diciembre
                contadorDias1 = 61 - dia1 + dia; //(oct+nov) - dias transcurridos de noviembre de fecha 1 + dias transcurridos de diciembre

            //Luego, verificamos si el año actual es bisiesto para sumarle un dia a contadorDias1 pero antes de febrero porque el dia de mas que provoca un año bisiesto se encuentra en febrero y no despues de los demas meses
            if ( mes <= 2 )
            {
                if ( ( anio1 % 4 == 0 ) && ( ( anio1 % 100 != 0 ) || ( anio1 % 400 == 0 ) ) ) //Si es bisiesto
                    contadorDias1++; //suma un dia, porque antes asumimos que febrero tenia 28 dias y en realidad tiene 29
            } //Fin de if anidado
        } //Fin de if anidado

        if ( mes1 == 11 ) //Si es noviembre
        {
            //Asume que febrero tiene 28 dias
            if ( mes == 1 ) //Si es eneroB
                contadorDias1 = 304 - dia + dia1; //(ene+feb+mar+abr+may+jun+jul+ago+sep+oct) - dias transcurridos de enero + dias trancurridos de noviembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 2 ) //Si es febreroB
                contadorDias1 = 273 - dia + dia1; //(feb+mar+abr+may+jun+jul+ago+sep+oct) - dia trascurridos de febrero + dias transcurridos de noviembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 3 ) //Si es marzo
                contadorDias1 = 245 - dia + dia1; //(mar+abr+may+jun+jul+ago+sep+oct) - dia trascurridos de marzo + dias transcurridos de noviembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 4 ) //Si es abril
                contadorDias1 = 214 - dia + dia1; //(abr+may+jun+jul+ago+sep+oct) - dia trascurridos de abril + dias transcurridos de noviembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 5 ) //Si es mayo
                contadorDias1 = 184 - dia + dia1; //(may+jun+jul+ago+sep+oct) - dias transcurridos de mayo de fecha 1 + dias transcurridos de noviembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 6 ) //Si es junio
                contadorDias1 = 153 - dia + dia1; //(jun+jul+ago+sep+oct) - dias transcurridos de junio de fecha 1 + dias transcurridos de noviembre
            else if ( mes == 7 ) //Si es julio
                contadorDias1 = 123 - dia + dia1; //(jul+ago+sep+oct) - dias transcurridos de julio de fecha 1 + dias transcurridos de noviembre
            else if ( mes == 8 ) //Si es agosto
                contadorDias1 = 92 - dia + dia1; //(ago+sep+oct) - dias transcurridos de agosto de fecha 1 + dias transcurridos de noviembre
            else if ( mes == 9 ) //Si es septiembre
                contadorDias1 = 61 - dia + dia1; //(sep+oct) - dias transcurridos de septiembre de fecha 1 + dias transcurridos de noviembre
            else if ( mes == 10 ) //Si es octubre
                contadorDias1 = 31 - dia + dia1; //octubre - dias transcurridos de octubre de fecha 1 + dias transcurridos de noviembre
            else if ( mes == 11 ) //Si es noviembre
                contadorDias1 = abs( dia - dia1 ); //Calcula los dias de diferencia y asigna el valor absoluto a contadorDias1. Al obtener el valor absoluto nos aseguramos de que si el resultado es negativo lo convierte en positivo porque la distancia de dias aunque sea negativa sigue siendo igual
            else if ( mes == 12 ) //Si es diciembre
                contadorDias1 = 30 - dia1 + dia; //noviembre - dias transcurridos de noviembre de fecha 1 + dias transcurridos de diciembre

            //Luego, verificamos si el año actual es bisiesto para sumarle un dia a contadorDias1 pero antes de febrero porque el dia de mas que provoca un año bisiesto se encuentra en febrero y no despues de los demas meses
            if ( mes <= 2 )
            {
                if ( ( anio1 % 4 == 0 ) && ( ( anio1 % 100 != 0 ) || ( anio1 % 400 == 0 ) ) ) //Si es bisiesto
                    contadorDias1++; //suma un dia, porque antes asumimos que febrero tenia 28 dias y en realidad tiene 29
            } //Fin de if anidado
        } //Fin de if anidado

        if ( mes1 == 12 ) //Si es diciembre
        {
            //Asume que febrero tiene 28 dias
            if ( mes == 1 ) //Si es eneroB
                contadorDias1 = 334 - dia + dia1; //(ene+feb+mar+abr+may+jun+jul+ago+sep+oct+nov) - dias transcurridos de enero + dias trancurridos de diciembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 2 ) //Si es febreroB
                contadorDias1 = 303 - dia + dia1; //(feb+mar+abr+may+jun+jul+ago+sep+oct+nov) - dias transcurridos de enero + dias trancurridos de diciembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 3 ) //Si es marzo
                contadorDias1 = 275 - dia + dia1; //(mar+abr+may+jun+jul+ago+sep+oct+nov) - dias transcurridos de enero + dias trancurridos de diciembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 4 ) //Si es abril
                contadorDias1 = 244 - dia + dia1; //(abr+may+jun+jul+ago+sep+oct+nov) - dias transcurridos de enero + dias trancurridos de diciembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 5 ) //Si es mayo
                contadorDias1 = 214 - dia + dia1; //(may+jun+jul+ago+sep+oct+nov) - dias transcurridos de enero + dias trancurridos de diciembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 6 ) //Si es junio
                contadorDias1 = 183 - dia + dia1; //(jun+jul+ago+sep+oct+nov) - dias transcurridos de enero + dias trancurridos de diciembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 7 ) //Si es junio
                contadorDias1 = 153 - dia + dia1; //(jul+ago+sep+oct+nov) - dias transcurridos de enero + dias trancurridos de diciembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 8 ) //Si es junio
                contadorDias1 = 122 - dia + dia1; //(ago+sep+oct+nov) - dias transcurridos de enero + dias trancurridos de diciembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 9 ) //Si es junio
                contadorDias1 = 91 - dia + dia1; //(sep+oct+nov) - dias transcurridos de enero + dias trancurridos de diciembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 10 ) //Si es junio
                contadorDias1 = 61 - dia + dia1; //(oct+nov) - dias transcurridos de enero + dias trancurridos de diciembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 11 ) //Si es noviembre
                contadorDias1 = 30 - dia + dia1; //noviembre - dias transcurridos de noviembre de fecha 1 + dias transcurridos de diciembre
            else if ( mes == 12 ) //Si es diciembre
                contadorDias1 = abs( dia - dia1 ); //Calcula los dias de diferencia y asigna el valor absoluto a contadorDias1. Al obtener el valor absoluto nos aseguramos de que si el resultado es negativo lo convierte en positivo porque la distancia de dias aunque sea negativa sigue siendo igual

            //Luego, verificamos si el año actual es bisiesto para sumarle un dia a contadorDias1 pero antes de febrero porque el dia de mas que provoca un año bisiesto se encuentra en febrero y no despues de los demas meses
            if ( mes <= 2 )
            {
                if ( ( anio1 % 4 == 0 ) && ( ( anio1 % 100 != 0 ) || ( anio1 % 400 == 0 ) ) ) //Si es bisiesto
                    contadorDias1++; //suma un dia, porque antes asumimos que febrero tenia 28 dias y en realidad tiene 29
            } //Fin de if anidado
        } //Fin de if anidado
    } //Fin de if


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------


    //SI ANIO2 ES IGUAL A ANIO, ES DECIR SI EL AÑO DE LA FECHA 2 Y EL AÑO DE LA FECHA ACTUAL SON IGUALES...
    if ( anio2 == anio )
    {
        //Calcula la diferencia de dias dependiendo del mes en que este mes2
        if ( mes2 == 1 ) //Si es enero
        {
            if ( mes == 1 ) //Si es enero
                contadorDias2 = abs( dia - dia2 ); //Calcula los dias de diferencia y asigna el valor absoluto a contadorDias2. Al obtener el valor absoluto nos aseguramos de que si el resultado es negativo lo convierte en positivo porque la distancia de dias aunque sea negativa sigue siendo igual
            else if ( mes == 2 ) //Si es febrero
                contadorDias2 = 31 - dia2 + dia; //Total de dias de enero - dias transcurridos de enero + dias de febrero = dias de diferencia entre la fecha 1 y la fecha actual
                //A partir de aca asume que febrero tiene 28 dias.
            else if ( mes == 3 ) //Si es marzo
                contadorDias2 = 59 - dia2 + dia; //(ene+feb) - dias transcurridos de enero + dias de marzo = dias de diferencia entre la fecha 1 y la fecha actual
                //El algoritmo funciona igual hasta llegar a diciembre
            else if ( mes == 4 ) //Si es abril
                contadorDias2 = 90 - dia2 + dia;
            else if ( mes == 5 ) //Si es mayo
                contadorDias2 = 120 - dia2 + dia;
            else if ( mes == 6 ) //Si es junio
                contadorDias2 = 151 - dia2 + dia;
            else if ( mes == 7 ) //Si es julio
                contadorDias2 = 181 - dia2 + dia;
            else if ( mes == 8 ) //Si es agosto
                contadorDias2 = 212 - dia2 + dia;
            else if ( mes == 9 ) //Si es septiembre
                contadorDias2 = 243 - dia2 + dia;
            else if ( mes == 10 ) //Si es octubre
                contadorDias2 = 273 - dia2 + dia;
            else if ( mes == 11 ) //Si es noviembre
                contadorDias2 = 304 - dia2 + dia;
            else if ( mes == 12 ) //Si es diciembre
                contadorDias2 = 334 - dia2 + dia;

            //Luego, verificamos si el año actual es bisiesto para sumarle un dia a contadorDias2 pero a partir de febrero
            if ( mes > 2 )
                if ( ( anio2 % 4 == 0 ) && ( ( anio2 % 100 != 0 ) || ( anio2 % 400 == 0 ) ) ) //Si es bisiesto
                    contadorDias2++; //suma un dia, porque antes asumimos que febrero tenia 28 dias y en realidad tiene 29
        } //Fin de if anidado

        if ( mes2 == 2 ) //Si es febrero
        {
            if ( mes == 1 ) //Si es enero
                contadorDias2 = 31 - dia + dia2; //Total de dias de enero - dias transcurridos de enero + dias trancurridos de febrero = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 2 ) //Si es febrero
                contadorDias2 = abs( dia - dia2 ); //Calcula los dias de diferencia y asigna el valor absoluto a contadorDias2. Al obtener el valor absoluto nos aseguramos de que si el resultado es negativo lo convierte en positivo porque la distancia de dias aunque sea negativa sigue siendo igual
                //A partir de aca asume que febrero tiene 28 dias
            else if ( mes == 3 ) //Si es marzo
                contadorDias2 = 28 - dia2 + dia; //Total de dias de febrero - dias transcurridos de febrero de fecha 1 + dias transcurridos de marzo = diferencia de dias entre fecha 1 y fecha actual
            else if ( mes == 4 ) //Si es abril
                contadorDias2 = 59 - dia2 + dia; //(ene+feb) - dias transcurridos de febrero de fecha 1 + dias transcurridos de abril
            else if ( mes == 5 ) //Si es mayo
                contadorDias2 = 90 - dia2 + dia; //(ene+feb+mar) - dias transcurridos de febrero de fecha 1 + dias transcurridos de mayo
            else if ( mes == 6 ) //Si es junio
                contadorDias2 = 120 - dia2 + dia; //(ene+feb+mar+abr) - dias transcurridos de febrero de fecha 1 + dias transcurridos de junio
                //El algoritmo funciona igual hasta llegar a diciembre
            else if ( mes == 7 ) //Si es julio
                contadorDias2 = 151 - dia2 + dia;
            else if ( mes == 8 ) //Si es agosto
                contadorDias2 = 181 - dia2 + dia;
            else if ( mes == 9 ) //Si es septiembre
                contadorDias2 = 212 - dia2 + dia;
            else if ( mes == 10 ) //Si es octubre
                contadorDias2 = 243 - dia2 + dia;
            else if ( mes == 11 ) //Si es noviembre
                contadorDias2 = 273 - dia2 + dia;
            else if ( mes == 12 ) //Si es diciembre
                contadorDias2 = 304 - dia2 + dia;

            //Luego, verificamos si el año actual es bisiesto para sumarle un dia a contadorDias2 pero a partir de febrero
            if ( mes > 2 )
            {
                if ( ( anio2 % 4 == 0 ) && ( ( anio2 % 100 != 0 ) || ( anio2 % 400 == 0 ) ) ) //Si es bisiesto
                    contadorDias2++; //suma un dia, porque antes asumimos que febrero tenia 28 dias y en realidad tiene 29
            } //Fin de if anidado
        } //Fin de if anidado

        if ( mes2 == 3 ) //Si es marzo
        {
            if ( mes == 1 ) //Si es enero
                contadorDias2 = 59 - dia + dia2; //(ene+feb) - dias transcurridos de enero + dias trancurridos de marzo = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 2 ) //Si es febrero
                contadorDias2 = 28 - dia + dia2; //febrero - dia trascurridos de febrero + dias transcurridos de marzo = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 3 ) //Si es marzo
                contadorDias2 = abs( dia - dia2 ); //Calcula los dias de diferencia y asigna el valor absoluto a contadorDias2. Al obtener el valor absoluto nos aseguramos de que si el resultado es negativo lo convierte en positivo porque la distancia de dias aunque sea negativa sigue siendo igual
            else if ( mes == 4 ) //Si es abril
                contadorDias2 = 31 - dia2 + dia; //marzo - dias transcurridos de marzo de fecha 1 + dias transcurridos de abr
            else if ( mes == 5 ) //Si es mayo
                contadorDias2 = 61 - dia2 + dia; //(mar+abr) - dias transcurridos de marzo de fecha 1 + dias transcurridos de may
            else if ( mes == 6 ) //Si es junio
                contadorDias2 = 92 - dia2 + dia; //(mar+abr+may) - dias transcurridos de marzo de fecha 1 + dias transcurridos de jun
            else if ( mes == 7 ) //Si es julio
                contadorDias2 = 122 - dia2 + dia; //(mar+abr+may+jun) - dias transcurridos de marzo de fecha 1 + dias transcurridos de jul
                //El algoritmo funciona igual hasta llegar a diciembre
            else if ( mes == 8 ) //Si es agosto
                contadorDias2 = 153 - dia2 + dia;
            else if ( mes == 9 ) //Si es septiembre
                contadorDias2 = 184 - dia2 + dia;
            else if ( mes == 10 ) //Si es octubre
                contadorDias2 = 214 - dia2 + dia;
            else if ( mes == 11 ) //Si es noviembre
                contadorDias2 = 245 - dia2 + dia;
            else if ( mes == 12 ) //Si es diciembre
                contadorDias2 = 275 - dia2 + dia;

            //Luego, verificamos si el año actual es bisiesto para sumarle un dia a contadorDias2 pero antes de febrero porque el dia de mas que provoca un año bisiesto se encuentra en febrero y no despues de los demas meses
            if ( mes <= 2 )
            {
                if ( ( anio2 % 4 == 0 ) && ( ( anio2 % 100 != 0 ) || ( anio2 % 400 == 0 ) ) ) //Si es bisiesto
                    contadorDias2++; //suma un dia, porque antes asumimos que febrero tenia 28 dias y en realidad tiene 29
            } //Fin de if anidado
        } //Fin de if anidado

        if ( mes2 == 4 ) //Si es abril
        {
            //Asume que febrero tiene 28 dias
            if ( mes == 1 ) //Si es enero
                contadorDias2 = 90 - dia + dia2; //(ene+feb+mar) - dias transcurridos de enero + dias trancurridos de abril = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 2 ) //Si es febrero
                contadorDias2 = 59 - dia + dia2; //(feb+mar) - dia trascurridos de febrero + dias transcurridos de abril = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 3 ) //Si es marzo
                contadorDias2 = 31 - dia + dia2; //mar - dia trascurridos de marzo + dias transcurridos de abril = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 4 ) //Si es abril
                contadorDias2 = abs( dia - dia2 ); //Calcula los dias de diferencia y asigna el valor absoluto a contadorDias2. Al obtener el valor absoluto nos aseguramos de que si el resultado es negativo lo convierte en positivo porque la distancia de dias aunque sea negativa sigue siendo igual
            else if ( mes == 5 ) //Si es mayo
                contadorDias2 = 30 - dia2 + dia; //abril - dias transcurridos de abril de fecha 1 + dias transcurridos de mayo
            else if ( mes == 6 ) //Si es junio
                contadorDias2 = 61 - dia2 + dia; //(abr+may) - dias transcurridos de abril de fecha 1 + dias transcurridos de junio
            else if ( mes == 7 ) //Si es julio
                contadorDias2 = 91 - dia2 + dia; //(abr+may+jun) - dias transcurridos de abril de fecha 1 + dias transcurridos de julio
                //El algoritmo funciona igual hasta llegar a diciembre
            else if ( mes == 8 ) //Si es agosto
                contadorDias2 = 122 - dia2 + dia;
            else if ( mes == 9 ) //Si es septiembre
                contadorDias2 = 153 - dia2 + dia;
            else if ( mes == 10 ) //Si es octubre
                contadorDias2 = 183 - dia2 + dia;
            else if ( mes == 11 ) //Si es noviembre
                contadorDias2 = 214 - dia2 + dia;
            else if ( mes == 12 ) //Si es diciembre
                contadorDias2 = 244 - dia2 + dia;

            //Luego, verificamos si el año actual es bisiesto para sumarle un dia a contadorDias2 pero antes de febrero porque el dia de mas que provoca un año bisiesto se encuentra en febrero y no despues de los demas meses
            if ( mes <= 2 )
            {
                if ( ( anio2 % 4 == 0 ) && ( ( anio2 % 100 != 0 ) || ( anio2 % 400 == 0 ) ) ) //Si es bisiesto
                    contadorDias2++; //suma un dia, porque antes asumimos que febrero tenia 28 dias y en realidad tiene 29
            } //Fin de if anidado
        } //Fin de if anidado

        if ( mes2 == 4 ) //Si es abril
        {
            //Asume que febrero tiene 28 dias
            if ( mes == 1 ) //Si es enero
                contadorDias2 = 90 - dia + dia2; //(ene+feb+mar) - dias transcurridos de enero + dias trancurridos de abril = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 2 ) //Si es febrero
                contadorDias2 = 59 - dia + dia2; //(feb+mar) - dia trascurridos de febrero + dias transcurridos de abril = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 3 ) //Si es marzo
                contadorDias2 = 31 - dia + dia2; //mar - dia trascurridos de marzo + dias transcurridos de abril = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 4 ) //Si es abril
                contadorDias2 = abs( dia - dia2 ); //Calcula los dias de diferencia y asigna el valor absoluto a contadorDias2. Al obtener el valor absoluto nos aseguramos de que si el resultado es negativo lo convierte en positivo porque la distancia de dias aunque sea negativa sigue siendo igual
            else if ( mes == 5 ) //Si es mayo
                contadorDias2 = 30 - dia2 + dia; //abril - dias transcurridos de abril de fecha 1 + dias transcurridos de mayo
            else if ( mes == 6 ) //Si es junio
                contadorDias2 = 61 - dia2 + dia; //(abr+may) - dias transcurridos de abril de fecha 1 + dias transcurridos de junio
            else if ( mes == 7 ) //Si es julio
                contadorDias2 = 91 - dia2 + dia; //(abr+may+jun) - dias transcurridos de abril de fecha 1 + dias transcurridos de julio
                //El algoritmo funciona igual hasta llegar a diciembre
            else if ( mes == 8 ) //Si es agosto
                contadorDias2 = 122 - dia2 + dia;
            else if ( mes == 9 ) //Si es septiembre
                contadorDias2 = 153 - dia2 + dia;
            else if ( mes == 10 ) //Si es octubre
                contadorDias2 = 183 - dia2 + dia;
            else if ( mes == 11 ) //Si es noviembre
                contadorDias2 = 214 - dia2 + dia;
            else if ( mes == 12 ) //Si es diciembre
                contadorDias2 = 244 - dia2 + dia;

            //Luego, verificamos si el año actual es bisiesto para sumarle un dia a contadorDias2 pero antes de febrero porque el dia de mas que provoca un año bisiesto se encuentra en febrero y no despues de los demas meses
            if ( mes <= 2 )
            {
                if ( ( anio2 % 4 == 0 ) && ( ( anio2 % 100 != 0 ) || ( anio2 % 400 == 0 ) ) ) //Si es bisiesto
                    contadorDias2++; //suma un dia, porque antes asumimos que febrero tenia 28 dias y en realidad tiene 29
            } //Fin de if anidado
        } //Fin de if anidado

        if ( mes2 == 5 ) //Si es mayo
        {
            //Asume que febrero tiene 28 dias
            if ( mes == 1 ) //Si es enero
                contadorDias2 = 120 - dia + dia2; //(ene+feb+mar+abr) - dias transcurridos de enero + dias trancurridos de mayo = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 2 ) //Si es febrero
                contadorDias2 = 89 - dia + dia2; //(feb+mar+abr) - dia trascurridos de febrero + dias transcurridos de mayo = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 3 ) //Si es marzo
                contadorDias2 = 61 - dia + dia2; //(mar+abr) - dia trascurridos de marzo + dias transcurridos de mayo = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 4 ) //Si es abril
                contadorDias2 = 30 - dia + dia2; //abr - dia trascurridos de abril + dias transcurridos de mayo = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 5 ) //Si es mayo
                contadorDias2 = abs( dia - dia2 ); //Calcula los dias de diferencia y asigna el valor absoluto a contadorDias2. Al obtener el valor absoluto nos aseguramos de que si el resultado es negativo lo convierte en positivo porque la distancia de dias aunque sea negativa sigue siendo igual
            else if ( mes == 6 ) //Si es junio
                contadorDias2 = 31 - dia2 + dia; //may - dias transcurridos de may de fecha 1 + dias transcurridos de junio
            else if ( mes == 7 ) //Si es julio
                contadorDias2 = 61 - dia2 + dia; //(may+jun) - dias transcurridos de may de fecha 1 + dias transcurridos de julio
                //El algoritmo funciona igual hasta llegar a diciembre
            else if ( mes == 8 ) //Si es agosto
                contadorDias2 = 92 - dia2 + dia;
            else if ( mes == 9 ) //Si es septiembre
                contadorDias2 = 123 - dia2 + dia;
            else if ( mes == 10 ) //Si es octubre
                contadorDias2 = 153 - dia2 + dia;
            else if ( mes == 11 ) //Si es noviembre
                contadorDias2 = 184 - dia2 + dia;
            else if ( mes == 12 ) //Si es diciembre
                contadorDias2 = 214 - dia2 + dia;

            //Luego, verificamos si el año actual es bisiesto para sumarle un dia a contadorDias2 pero antes de febrero porque el dia de mas que provoca un año bisiesto se encuentra en febrero y no despues de los demas meses
            if ( mes <= 2 )
            {
                if ( ( anio2 % 4 == 0 ) && ( ( anio2 % 100 != 0 ) || ( anio2 % 400 == 0 ) ) ) //Si es bisiesto
                    contadorDias2++; //suma un dia, porque antes asumimos que febrero tenia 28 dias y en realidad tiene 29
            } //Fin de if anidado
        } //Fin de if anidado

        if ( mes2 == 6 ) //Si es junio
        {
            //Asume que febrero tiene 28 dias
            if ( mes == 1 ) //Si es eneroB
                contadorDias2 = 151 - dia + dia2; //(ene+feb+mar+abr+may) - dias transcurridos de enero + dias trancurridos de junio = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 2 ) //Si es febreroB
                contadorDias2 = 120 - dia + dia2; //(feb+mar+abr+may) - dia trascurridos de febrero + dias transcurridos de junio = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 3 ) //Si es marzo
                contadorDias2 = 92 - dia + dia2; //(mar+abr+may) - dia trascurridos de marzo + dias transcurridos de junio = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 4 ) //Si es abril
                contadorDias2 = 61 - dia + dia2; //(abr+may) - dia trascurridos de abril + dias transcurridos de junio = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 5 ) //Si es mayo
                contadorDias2 = 31 - dia2 + dia; //may - dias transcurridos de mayo de fecha 1 + dias transcurridos de junio
            else if ( mes == 6 ) //Si es junio
                contadorDias2 = abs( dia - dia2 ); //Calcula los dias de diferencia y asigna el valor absoluto a contadorDias2. Al obtener el valor absoluto nos aseguramos de que si el resultado es negativo lo convierte en positivo porque la distancia de dias aunque sea negativa sigue siendo igual
            else if ( mes == 7 ) //Si es julio
                contadorDias2 = 30 - dia2 + dia; //jun - dias transcurridos de junio de fecha 1 + dias transcurridos de julio
                //El algoritmo funciona igual hasta llegar a diciembre
            else if ( mes == 8 ) //Si es agosto
                contadorDias2 = 61 - dia2 + dia;
            else if ( mes == 9 ) //Si es septiembre
                contadorDias2 = 92 - dia2 + dia;
            else if ( mes == 10 ) //Si es octubre
                contadorDias2 = 122 - dia2 + dia;
            else if ( mes == 11 ) //Si es noviembre
                contadorDias2 = 153 - dia2 + dia;
            else if ( mes == 12 ) //Si es diciembre
                contadorDias2 = 183 - dia2 + dia;

            //Luego, verificamos si el año actual es bisiesto para sumarle un dia a contadorDias2 pero antes de febrero porque el dia de mas que provoca un año bisiesto se encuentra en febrero y no despues de los demas meses
            if ( mes <= 2 )
            {
                if ( ( anio2 % 4 == 0 ) && ( ( anio2 % 100 != 0 ) || ( anio2 % 400 == 0 ) ) ) //Si es bisiesto
                    contadorDias2++; //suma un dia, porque antes asumimos que febrero tenia 28 dias y en realidad tiene 29
            } //Fin de if anidado
        } //Fin de if anidado

        if ( mes2 == 7 ) //Si es julio
        {
            //Asume que febrero tiene 28 dias
            if ( mes == 1 ) //Si es eneroB
                contadorDias2 = 181 - dia + dia2; //(ene+feb+mar+abr+may+jun) - dias transcurridos de enero + dias trancurridos de julio = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 2 ) //Si es febreroB
                contadorDias2 = 150 - dia + dia2; //(feb+mar+abr+may+jun) - dia trascurridos de febrero + dias transcurridos de julio = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 3 ) //Si es marzo
                contadorDias2 = 122 - dia + dia2; //(mar+abr+may+jun) - dia trascurridos de marzo + dias transcurridos de julio = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 4 ) //Si es abril
                contadorDias2 = 91 - dia + dia2; //(abr+may+jun) - dia trascurridos de abril + dias transcurridos de julio = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 5 ) //Si es mayo
                contadorDias2 = 61 - dia + dia2; //(may+jun) - dias transcurridos de mayo de fecha 1 + dias transcurridos de julio = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 6 ) //Si es junio
                contadorDias2 = 30 - dia + dia2; //jun - dias transcurridos de junio de fecha 1 + dias transcurridos de julio
            else if ( mes == 7 ) //Si es julio
                contadorDias2 = abs( dia - dia2 ); //Calcula los dias de diferencia y asigna el valor absoluto a contadorDias2. Al obtener el valor absoluto nos aseguramos de que si el resultado es negativo lo convierte en positivo porque la distancia de dias aunque sea negativa sigue siendo igual
            else if ( mes == 8 ) //Si es agosto
                contadorDias2 = 31 - dia2 + dia; //jul - dias transcurridos de julio de fecha 1 + dias transcurridos de agosto
                //El algoritmo funciona igual hasta llegar a diciembre
            else if ( mes == 9 ) //Si es septiembre
                contadorDias2 = 62 - dia2 + dia;
            else if ( mes == 10 ) //Si es octubre
                contadorDias2 = 92 - dia2 + dia;
            else if ( mes == 11 ) //Si es noviembre
                contadorDias2 = 123 - dia2 + dia;
            else if ( mes == 12 ) //Si es diciembre
                contadorDias2 = 153 - dia2 + dia;

            //Luego, verificamos si el año actual es bisiesto para sumarle un dia a contadorDias2 pero antes de febrero porque el dia de mas que provoca un año bisiesto se encuentra en febrero y no despues de los demas meses
            if ( mes <= 2 )
            {
                if ( ( anio2 % 4 == 0 ) && ( ( anio2 % 100 != 0 ) || ( anio2 % 400 == 0 ) ) ) //Si es bisiesto
                    contadorDias2++; //suma un dia, porque antes asumimos que febrero tenia 28 dias y en realidad tiene 29
            } //Fin de if anidado
        } //Fin de if anidado

        if ( mes2 == 8 ) //Si es agosto
        {
            //Asume que febrero tiene 28 dias
            if ( mes == 1 ) //Si es eneroB
                contadorDias2 = 212 - dia + dia2; //(ene+feb+mar+abr+may+jun+jul) - dias transcurridos de enero + dias trancurridos de agosto = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 2 ) //Si es febreroB
                contadorDias2 = 181 - dia + dia2; //(feb+mar+abr+may+jun+jul) - dia trascurridos de febrero + dias transcurridos de agosto = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 3 ) //Si es marzo
                contadorDias2 = 153 - dia + dia2; //(mar+abr+may+jun+jul) - dia trascurridos de marzo + dias transcurridos de agosto = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 4 ) //Si es abril
                contadorDias2 = 122 - dia + dia2; //(abr+may+jun+jul) - dia trascurridos de abril + dias transcurridos de agosto = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 5 ) //Si es mayo
                contadorDias2 = 92 - dia + dia2; //(may+jun+jul) - dias transcurridos de mayo de fecha 1 + dias transcurridos de agosto = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 6 ) //Si es junio
                contadorDias2 = 61 - dia + dia2; //(jun+jul) - dias transcurridos de junio de fecha 1 + dias transcurridos de agosto
            else if ( mes == 7 ) //Si es julio
                contadorDias2 = 31 - dia + dia2; //jul - dias transcurridos de julio de fecha 1 + dias transcurridos de agosto
            else if ( mes == 8 ) //Si es agosto
                contadorDias2 = abs( dia - dia2 ); //Calcula los dias de diferencia y asigna el valor absoluto a contadorDias2. Al obtener el valor absoluto nos aseguramos de que si el resultado es negativo lo convierte en positivo porque la distancia de dias aunque sea negativa sigue siendo igual
            else if ( mes == 9 ) //Si es septiembre
                contadorDias2 = 31 - dia2 + dia; //agosto - dias transcurridos de agosto de fecha 1 + dias transcurridos de septiembre
                //El algoritmo funciona igual hasta llegar a diciembre
            else if ( mes == 10 ) //Si es octubre
                contadorDias2 = 61 - dia2 + dia;
            else if ( mes == 11 ) //Si es noviembre
                contadorDias2 = 92 - dia2 + dia;
            else if ( mes == 12 ) //Si es diciembre
                contadorDias2 = 122 - dia2 + dia;

            //Luego, verificamos si el año actual es bisiesto para sumarle un dia a contadorDias2 pero antes de febrero porque el dia de mas que provoca un año bisiesto se encuentra en febrero y no despues de los demas meses
            if ( mes <= 2 )
            {
                if ( ( anio2 % 4 == 0 ) && ( ( anio2 % 100 != 0 ) || ( anio2 % 400 == 0 ) ) ) //Si es bisiesto
                    contadorDias2++; //suma un dia, porque antes asumimos que febrero tenia 28 dias y en realidad tiene 29
            } //Fin de if anidado
        } //Fin de if anidado

        if ( mes2 == 9 ) //Si es septiembre
        {
            //Asume que febrero tiene 28 dias
            if ( mes == 1 ) //Si es eneroB
                contadorDias2 = 243 - dia + dia2; //(ene+feb+mar+abr+may+jun+jul+ago) - dias transcurridos de enero + dias trancurridos de septiembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 2 ) //Si es febreroB
                contadorDias2 = 212 - dia + dia2; //(feb+mar+abr+may+jun+jul+ago) - dia trascurridos de febrero + dias transcurridos de septiembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 3 ) //Si es marzo
                contadorDias2 = 184 - dia + dia2; //(mar+abr+may+jun+jul+ago) - dia trascurridos de marzo + dias transcurridos de septiembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 4 ) //Si es abril
                contadorDias2 = 153 - dia + dia2; //(abr+may+jun+jul+ago) - dia trascurridos de abril + dias transcurridos de septiembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 5 ) //Si es mayo
                contadorDias2 = 123 - dia + dia2; //(may+jun+jul+ago) - dias transcurridos de mayo de fecha 1 + dias transcurridos de septiembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 6 ) //Si es junio
                contadorDias2 = 92 - dia + dia2; //(jun+jul+ago) - dias transcurridos de junio de fecha 1 + dias transcurridos de septiembre
            else if ( mes == 7 ) //Si es julio
                contadorDias2 = 62 - dia + dia2; //(jul+ago) - dias transcurridos de julio de fecha 1 + dias transcurridos de septiembre
            else if ( mes == 8 ) //Si es agosto
                contadorDias2 = 31 - dia + dia2; //agosto - dias transcurridos de agosto de fecha 1 + dias transcurridos de septiembre
            else if ( mes == 9 ) //Si es septiembre
                contadorDias2 = abs( dia - dia2 ); //Calcula los dias de diferencia y asigna el valor absoluto a contadorDias2. Al obtener el valor absoluto nos aseguramos de que si el resultado es negativo lo convierte en positivo porque la distancia de dias aunque sea negativa sigue siendo igual
            else if ( mes == 10 ) //Si es octubre
                contadorDias2 = 30 - dia2 + dia; //septiembre - dias transcurridos de septiembre de fecha 1 + dias transcurridos de octubre
                //El algoritmo funciona igual hasta llegar a diciembre
            else if ( mes == 11 ) //Si es noviembre
                contadorDias2 = 61 - dia2 + dia;
            else if ( mes == 12 ) //Si es diciembre
                contadorDias2 = 91 - dia2 + dia;

            //Luego, verificamos si el año actual es bisiesto para sumarle un dia a contadorDias2 pero antes de febrero porque el dia de mas que provoca un año bisiesto se encuentra en febrero y no despues de los demas meses
            if ( mes <= 2 )
            {
                if ( ( anio2 % 4 == 0 ) && ( ( anio2 % 100 != 0 ) || ( anio2 % 400 == 0 ) ) ) //Si es bisiesto
                    contadorDias2++; //suma un dia, porque antes asumimos que febrero tenia 28 dias y en realidad tiene 29
            } //Fin de if anidado
        } //Fin de if anidado

        if ( mes2 == 10 ) //Si es octubre
        {
            //Asume que febrero tiene 28 dias
            if ( mes == 1 ) //Si es eneroB
                contadorDias2 = 273 - dia + dia2; //(ene+feb+mar+abr+may+jun+jul+ago+sep) - dias transcurridos de enero + dias trancurridos de octubre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 2 ) //Si es febreroB
                contadorDias2 = 242 - dia + dia2; //(feb+mar+abr+may+jun+jul+ago+sep) - dia trascurridos de febrero + dias transcurridos de octubre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 3 ) //Si es marzo
                contadorDias2 = 214 - dia + dia2; //(mar+abr+may+jun+jul+ago+sep) - dia trascurridos de marzo + dias transcurridos de octubre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 4 ) //Si es abril
                contadorDias2 = 183 - dia + dia2; //(abr+may+jun+jul+ago+sep) - dia trascurridos de abril + dias transcurridos de octubre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 5 ) //Si es mayo
                contadorDias2 = 153 - dia + dia2; //(may+jun+jul+ago+sep) - dias transcurridos de mayo de fecha 1 + dias transcurridos de octubre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 6 ) //Si es junio
                contadorDias2 = 122 - dia + dia2; //(jun+jul+ago+sep) - dias transcurridos de junio de fecha 1 + dias transcurridos de octubre
            else if ( mes == 7 ) //Si es julio
                contadorDias2 = 92 - dia + dia2; //(jul+ago+sep) - dias transcurridos de julio de fecha 1 + dias transcurridos de octubre
            else if ( mes == 8 ) //Si es agosto
                contadorDias2 = 61 - dia + dia2; //(ago+sep) - dias transcurridos de agosto de fecha 1 + dias transcurridos de octubre
            else if ( mes == 9 ) //Si es septiembre
                contadorDias2 = 30 - dia + dia2; //septiembre - dias transcurridos de septiembre de fecha 1 + dias transcurridos de octubre
            else if ( mes == 10 ) //Si es octubre
                contadorDias2 = abs( dia - dia2 ); //Calcula los dias de diferencia y asigna el valor absoluto a contadorDias2. Al obtener el valor absoluto nos aseguramos de que si el resultado es negativo lo convierte en positivo porque la distancia de dias aunque sea negativa sigue siendo igual
            else if ( mes == 11 ) //Si es noviembre
                contadorDias2 = 31 - dia2 + dia; //octubre - dias transcurridos de octubre de fecha 1 + dias transcurridos de noviembre
            else if ( mes == 12 ) //Si es diciembre
                contadorDias2 = 61 - dia2 + dia; //(oct+nov) - dias transcurridos de noviembre de fecha 1 + dias transcurridos de diciembre

            //Luego, verificamos si el año actual es bisiesto para sumarle un dia a contadorDias2 pero antes de febrero porque el dia de mas que provoca un año bisiesto se encuentra en febrero y no despues de los demas meses
            if ( mes <= 2 )
            {
                if ( ( anio2 % 4 == 0 ) && ( ( anio2 % 100 != 0 ) || ( anio2 % 400 == 0 ) ) ) //Si es bisiesto
                    contadorDias2++; //suma un dia, porque antes asumimos que febrero tenia 28 dias y en realidad tiene 29
            } //Fin de if anidado
        } //Fin de if anidado

        if ( mes2 == 11 ) //Si es noviembre
        {
            //Asume que febrero tiene 28 dias
            if ( mes == 1 ) //Si es eneroB
                contadorDias2 = 304 - dia + dia2; //(ene+feb+mar+abr+may+jun+jul+ago+sep+oct) - dias transcurridos de enero + dias trancurridos de noviembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 2 ) //Si es febreroB
                contadorDias2 = 273 - dia + dia2; //(feb+mar+abr+may+jun+jul+ago+sep+oct) - dia trascurridos de febrero + dias transcurridos de noviembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 3 ) //Si es marzo
                contadorDias2 = 245 - dia + dia2; //(mar+abr+may+jun+jul+ago+sep+oct) - dia trascurridos de marzo + dias transcurridos de noviembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 4 ) //Si es abril
                contadorDias2 = 214 - dia + dia2; //(abr+may+jun+jul+ago+sep+oct) - dia trascurridos de abril + dias transcurridos de noviembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 5 ) //Si es mayo
                contadorDias2 = 184 - dia + dia2; //(may+jun+jul+ago+sep+oct) - dias transcurridos de mayo de fecha 1 + dias transcurridos de noviembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 6 ) //Si es junio
                contadorDias2 = 153 - dia + dia2; //(jun+jul+ago+sep+oct) - dias transcurridos de junio de fecha 1 + dias transcurridos de noviembre
            else if ( mes == 7 ) //Si es julio
                contadorDias2 = 123 - dia + dia2; //(jul+ago+sep+oct) - dias transcurridos de julio de fecha 1 + dias transcurridos de noviembre
            else if ( mes == 8 ) //Si es agosto
                contadorDias2 = 92 - dia + dia2; //(ago+sep+oct) - dias transcurridos de agosto de fecha 1 + dias transcurridos de noviembre
            else if ( mes == 9 ) //Si es septiembre
                contadorDias2 = 61 - dia + dia2; //(sep+oct) - dias transcurridos de septiembre de fecha 1 + dias transcurridos de noviembre
            else if ( mes == 10 ) //Si es octubre
                contadorDias2 = 31 - dia + dia2; //octubre - dias transcurridos de octubre de fecha 1 + dias transcurridos de noviembre
            else if ( mes == 11 ) //Si es noviembre
                contadorDias2 = abs( dia - dia2 ); //Calcula los dias de diferencia y asigna el valor absoluto a contadorDias2. Al obtener el valor absoluto nos aseguramos de que si el resultado es negativo lo convierte en positivo porque la distancia de dias aunque sea negativa sigue siendo igual
            else if ( mes == 12 ) //Si es diciembre
                contadorDias2 = 30 - dia2 + dia; //noviembre - dias transcurridos de noviembre de fecha 1 + dias transcurridos de diciembre

            //Luego, verificamos si el año actual es bisiesto para sumarle un dia a contadorDias2 pero antes de febrero porque el dia de mas que provoca un año bisiesto se encuentra en febrero y no despues de los demas meses
            if ( mes <= 2 )
            {
                if ( ( anio2 % 4 == 0 ) && ( ( anio2 % 100 != 0 ) || ( anio2 % 400 == 0 ) ) ) //Si es bisiesto
                    contadorDias2++; //suma un dia, porque antes asumimos que febrero tenia 28 dias y en realidad tiene 29
            } //Fin de if anidado
        } //Fin de if anidado

        if ( mes2 == 12 ) //Si es diciembre
        {
            //Asume que febrero tiene 28 dias
            if ( mes == 1 ) //Si es eneroB
                contadorDias2 = 334 - dia + dia2; //(ene+feb+mar+abr+may+jun+jul+ago+sep+oct+nov) - dias transcurridos de enero + dias trancurridos de diciembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 2 ) //Si es febreroB
                contadorDias2 = 303 - dia + dia2; //(feb+mar+abr+may+jun+jul+ago+sep+oct+nov) - dias transcurridos de enero + dias trancurridos de diciembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 3 ) //Si es marzo
                contadorDias2 = 275 - dia + dia2; //(mar+abr+may+jun+jul+ago+sep+oct+nov) - dias transcurridos de enero + dias trancurridos de diciembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 4 ) //Si es abril
                contadorDias2 = 244 - dia + dia2; //(abr+may+jun+jul+ago+sep+oct+nov) - dias transcurridos de enero + dias trancurridos de diciembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 5 ) //Si es mayo
                contadorDias2 = 214 - dia + dia2; //(may+jun+jul+ago+sep+oct+nov) - dias transcurridos de enero + dias trancurridos de diciembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 6 ) //Si es junio
                contadorDias2 = 183 - dia + dia2; //(jun+jul+ago+sep+oct+nov) - dias transcurridos de enero + dias trancurridos de diciembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 7 ) //Si es junio
                contadorDias2 = 153 - dia + dia2; //(jul+ago+sep+oct+nov) - dias transcurridos de enero + dias trancurridos de diciembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 8 ) //Si es junio
                contadorDias2 = 122 - dia + dia2; //(ago+sep+oct+nov) - dias transcurridos de enero + dias trancurridos de diciembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 9 ) //Si es junio
                contadorDias2 = 91 - dia + dia2; //(sep+oct+nov) - dias transcurridos de enero + dias trancurridos de diciembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 10 ) //Si es junio
                contadorDias2 = 61 - dia + dia2; //(oct+nov) - dias transcurridos de enero + dias trancurridos de diciembre = dias de diferencia entre la fecha 1 y la fecha actual
            else if ( mes == 11 ) //Si es noviembre
                contadorDias2 = 30 - dia + dia2; //noviembre - dias transcurridos de noviembre de fecha 1 + dias transcurridos de diciembre
            else if ( mes == 12 ) //Si es diciembre
                contadorDias2 = abs( dia - dia2 ); //Calcula los dias de diferencia y asigna el valor absoluto a contadorDias2. Al obtener el valor absoluto nos aseguramos de que si el resultado es negativo lo convierte en positivo porque la distancia de dias aunque sea negativa sigue siendo igual

            //Luego, verificamos si el año actual es bisiesto para sumarle un dia a contadorDias2 pero antes de febrero porque el dia de mas que provoca un año bisiesto se encuentra en febrero y no despues de los demas meses
            if ( mes <= 2 )
            {
                if ( ( anio2 % 4 == 0 ) && ( ( anio2 % 100 != 0 ) || ( anio2 % 400 == 0 ) ) ) //Si es bisiesto
                    contadorDias2++; //suma un dia, porque antes asumimos que febrero tenia 28 dias y en realidad tiene 29
            } //Fin de if anidado
        } //Fin de if anidado
    } //Fin de if


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------


    //SI ANIO1 ES MENOR QUE ANIO, ES DECIR SI EL AÑO DE LA FECHA 1 ES MENOR QUE EL AÑO DE LA FECHA ACTUAL
    if ( anio1 < anio )
    {
        aux = anio1; //Almacena una copia de anio1 en aux para luego compararlo

        while ( anio1 <= anio ) //Mientras que anio1 sea menor o igual que anio
        {
            //Este if solo se ejecuta en la primera iteración, ya que aca estamos descontando los dias transcurridos del mes
            if ( anio1 == aux ) //Si anio1 es igual a aux
            {
                //Verifica en que mes del año esta
                //Asume que febrero tiene 28 dias
                if ( mes1 == 1 ) //Si mes1 es enero
                    contadorDias1 = 365 - dia1; //resta los dias de ene(dia1) transcurridos
                else if ( mes1 == 2 ) //Si mes1 es febrero
                    contadorDias1 = 365 - dia1 - 31; //resta los dias de ene(31) y feb transcurridos(dia1)
                else if ( mes1 == 3 ) //Si mes1 es marzo
                    contadorDias1 = 365 - dia1 - 59; //resta los dias de ene,feb(59) y mar transcurridos(dia1)
                else if ( mes1 == 4 ) //Si mes1 es abril
                    contadorDias1 = 365 - dia1 - 90; //resta los dias de ene,feb,mar(90) y abr transcurridos(dia1)
                else if ( mes1 == 5 ) //Si mes1 es mayo
                    contadorDias1 = 365 - dia1 - 120; //resta los dias de ene,feb,mar,abr(120) y mayo transcurridos(dia1)
                else if ( mes1 == 6 ) //Si mes1 es junio
                    contadorDias1 = 365 - dia1 - 151; //resta los dias de ene,feb,mar,abr,may(151) y jun transcurridos(dia1)
                else if ( mes1 == 7 ) //Si mes1 es julio
                    contadorDias1 = 365 - dia1 - 181; //resta los dias de ene,feb,mar,abr,may,jun(181) y jul transcurridos(dia1)
                else if ( mes1 == 8 ) //Si mes1 es agosto
                    contadorDias1 = 365 - dia1 - 212; //resta los dias de ene,feb,mar,abr,may,jun,jul(212) y ago transcurridos(dia1)
                else if ( mes1 == 9 ) //Si mes1 es septiembre
                    contadorDias1 = 365 - dia1 - 243; //resta los dias de ene,feb,mar,abr,may,jun,jul,ago(243) y sep transcurridos(dia1)
                else if ( mes1 == 10 ) //Si mes1 es octubre
                    contadorDias1 = 365 - dia1 - 273; //resta los dias de ene,feb,mar,abr,may,jun,jul,ago,sep(273) y oct transcurridos(dia1)
                else if ( mes1 == 11 ) //Si mes1 es noviembre
                    contadorDias1 = 365 - dia1 - 304; //resta los dias de ene,feb,mar,abr,may,jun,jul,ago,sep,oct(304) y nov transcurridos(dia1)
                else if ( mes1 == 12 ) //Si mes1 es diciembre
                    contadorDias1 = 365 - dia1 - 334; //resta los dias de ene,feb,mar,abr,may,jun,jul,ago,sep,oct,nov(334) y dic transcurridos(dia1)

                //Luego, verificamos si el año actual es bisiesto para sumarle un dia a contadorDias1
                if ( ( anio1 % 4 == 0 ) && ( ( anio1 % 100 != 0 ) || ( anio1 % 400 == 0 ) ) )
                    contadorDias1++; //suma un dia, porque antes asumimos que febrero tenia 28 dias y en realidad tiene 29
            } //Fin de if anidado
            else if ( anio1 > aux && anio1 < anio ) //Si anio1 es mayor que aux (contiene una copia del valor del anio1) y anio1 es menor que anio, suma los dias del siguiente año teniendo en cuenta si son o no años bisiestos
            {
                if ( ( anio1 % 4 == 0 ) && ( ( anio1 % 100 != 0 ) || ( anio1 % 400 == 0 ) ) ) //Si es bisiesto, tiene 366 dias
                    contadorDias1 += 366; //Suma los dias de este año (valor de anio1) bisiesto
                else //De lo contrario, significa que no es bisiesto y tiene 365 dias
                    contadorDias1 += 365; //Suma los dias de este año (valor de anio1) no bisiesto
                //Fin de if...else anidado
            }
            else if ( anio1 == anio ) //Si anio1 y anio son iguales
            {
                if ( mes == 1 ) //Si mes es enero
                    contadorDias1 += dia; //suma los dias de ene transcurridos de la fecha actual
                else if ( mes == 2 ) //Si mes es febrero
                    contadorDias1 += 31 + dia; //suma los dias de ene y los transcurridos de feb
                //A partir de marzo asume que febrero tiene 28 dias
                else if ( mes == 3 ) //Si mes es marzo
                    contadorDias1 += 59 + dia; //suma los dias de ene,feb y los transcurridos de mar
                else if ( mes == 4 ) //Si mes es abril
                    contadorDias1 += 90 + dia; //suma los dias de ene,feb,mar y los transcurridos de abr
                else if ( mes == 5 ) //Si mes es mayo
                    contadorDias1 += 120 + dia; //suma los dias de ene,feb,mar,abr y los transcurridos de may
                else if ( mes == 6 ) //Si mes es junio
                    contadorDias1 += 151 + dia; //suma los dias de ene,feb,mar,abr,may y los transcurridos de jun
                else if ( mes == 7 ) //Si mes es julio
                    contadorDias1 += 181 + dia; //suma los dias de ene,feb,mar,abr,may,jun y los transcurridos de jul
                else if ( mes == 8 ) //Si mes es agosto
                    contadorDias1 += 212 + dia; //suma los dias de ene,feb,mar,abr,may,jun,jul y los transcurridos de ago
                else if ( mes == 9 ) //Si mes es septiembre
                    contadorDias1 += 243 + dia; //suma los dias de ene,feb,mar,abr,may,jun,jul,ago y los transcurridos de sep
                else if ( mes == 10 ) //Si mes es octubre
                    contadorDias1 += 273 + dia; //suma los dias de ene,feb,mar,abr,may,jun,jul,ago,sep y los transcurridos de oct
                else if ( mes == 11 ) //Si mes es noviembre
                    contadorDias1 += 304 + dia; //suma los dias de ene,feb,mar,abr,may,jun,jul,ago,sep,oct y los transcurridos de nov
                else if ( mes == 12 ) //Si mes es diciembre
                    contadorDias1 += 334 + dia; //suma los dias de ene,feb,mar,abr,may,jun,jul,ago,sep,oct,nov y los transcurridos de dic

                //Luego, verificamos si el año actual es bisiesto para sumarle un dia a contadorDias1 pero a partir de marzo
                if ( mes >= 3 )
                {
                    //Verifica si anio es bisiesto o no
                    if ( ( anio1 % 4 == 0 ) && ( ( anio1 % 100 != 0 ) || ( anio1 % 400 == 0 ) ) ) //Si es bisiesto
                        contadorDias1++; //suma un dia, porque antes asumimos que febrero tenia 28 dias y en realidad tiene 29
                } //Fin de if anidado
            } //Fin de if anidado

            anio1++; //Postincrementa anio1 para pasar al siguiente año
        } //Fin de while
        anio1--; //Postdrementa anio1 porque si este if se ejecuta quiere decir que al finalizar el ciclo while anio1 almacena mayor al año actual lo que provocaria que entre en el siguiente if (anio1 > anio) causando errores.
    } //Fin de if


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------


    //SI ANIO1 ES MAYOR QUE ANIO, ES DECIR SI EL AÑO DE LA FECHA 1 ES MAYOR QUE EL AÑO DE LA FECHA ACTUAL
    if ( anio1 > anio )
    {
        aux = anio1; //Almacena una copia de anio1 en aux para luego compararlo

        while ( anio1 >= anio ) //Mientras que anio1 sea mayor o igual que anio
        {
            //Este if solo se ejecuta en la primera iteración, ya que aca estamos descontando los dias transcurridos del mes
            if ( anio1 == aux ) //Si anio1 es igual a aux
            {
                //Verifica en que mes del año esta
                //Asume que febrero tiene 28 dias
                if ( mes1 == 1 ) //Si mes1 es enero
                    contadorDias1 = dia1; //asigna los dias de ene(dia1) transcurridos
                else if ( mes1 == 2 ) //Si mes1 es febrero
                    contadorDias1 = 31 + dia1; //asigna los dias de ene(31) y feb transcurridos(dia1)
                else if ( mes1 == 3 ) //Si mes1 es marzo
                    contadorDias1 = 59 + dia1; //asigna los dias de ene,feb(59) y mar transcurridos(dia1)
                else if ( mes1 == 4 ) //Si mes1 es abril
                    contadorDias1 = 90 + dia1; //asigna los dias de ene,feb,mar(90) y abr transcurridos(dia1)
                else if ( mes1 == 5 ) //Si mes1 es mayo
                    contadorDias1 = 120 + dia1; //asigna los dias de ene,feb,mar,abr(120) y mayo transcurridos(dia1)
                else if ( mes1 == 6 ) //Si mes1 es junio
                    contadorDias1 = 151 + dia1; //asigna los dias de ene,feb,mar,abr,may(151) y jun transcurridos(dia1)
                else if ( mes1 == 7 ) //Si mes1 es julio
                    contadorDias1 = 181 + dia1; //asigna los dias de ene,feb,mar,abr,may,jun(181) y jul transcurridos(dia1)
                else if ( mes1 == 8 ) //Si mes1 es agosto
                    contadorDias1 = 212 + dia1; //asigna los dias de ene,feb,mar,abr,may,jun,jul(212) y ago transcurridos(dia1)
                else if ( mes1 == 9 ) //Si mes1 es septiembre
                    contadorDias1 = 243 + dia1; //asigna los dias de ene,feb,mar,abr,may,jun,jul,ago(243) y sep transcurridos(dia1)
                else if ( mes1 == 10 ) //Si mes1 es octubre
                    contadorDias1 = 273 + dia1; //asigna los dias de ene,feb,mar,abr,may,jun,jul,ago,sep(273) y oct transcurridos(dia1)
                else if ( mes1 == 11 ) //Si mes1 es noviembre
                    contadorDias1 = 304 + dia1; //asigna los dias de ene,feb,mar,abr,may,jun,jul,ago,sep,oct(304) y nov transcurridos(dia1)
                else if ( mes1 == 12 ) //Si mes1 es diciembre
                    contadorDias1 = 334 + dia1; //asigna los dias de ene,feb,mar,abr,may,jun,jul,ago,sep,oct,nov(334) y dic transcurridos(dia1)

                //Luego, verificamos si el año actual es bisiesto para sumarle un dia a contadorDias1
                if ( ( anio1 % 4 == 0 ) && ( ( anio1 % 100 != 0 ) || ( anio1 % 400 == 0 ) ) )
                    contadorDias1++; //suma un dia, porque antes asumimos que febrero tenia 28 dias y en realidad tiene 29
            } //Fin de if anidado
            else if ( anio1 < aux && anio1 > anio ) //Si anio1 es menor que aux (contiene una copia del valor del anio1) y anio1 es mayor que anio, suma los dias del anterior año teniendo en cuenta si son o no años bisiestos
            {
                if ( ( anio1 % 4 == 0 ) && ( ( anio1 % 100 != 0 ) || ( anio1 % 400 == 0 ) ) ) //Si es bisiesto, tiene 366 dias
                    contadorDias1 += 366; //Suma los dias de este año (valor de anio1) bisiesto
                else //De lo contrario, significa que no es bisiesto y tiene 365 dias
                    contadorDias1 += 365; //Suma los dias de este año (valor de anio1) no bisiesto
                //Fin de if...else anidado
            }
            else if ( anio1 == anio ) //Si anio1 y anio son iguales
            {
                //Asume que febrero tiene 28 dias
                if ( mes == 1 ) //Si mes es enero
                    contadorDias1 += 365 - dia; //suma los dias descontando los de ene transcurridos de la fecha actual
                else if ( mes == 2 ) //Si mes es febrero
                    contadorDias1 += 334 - dia; //suma los dias descontando los de ene y los transcurridos de feb
                else if ( mes == 3 ) //Si mes es marzo
                    contadorDias1 += 306 - dia; //suma los dias descontando los de ene,feb y los transcurridos de mar
                else if ( mes == 4 ) //Si mes es abril
                    contadorDias1 += 275 - dia; //suma los dias descontando los de ene,feb,mar y los transcurridos de abr
                else if ( mes == 5 ) //Si mes es mayo
                    contadorDias1 += 245 - dia; //suma los dias descontando los de ene,feb,mar,abr y los transcurridos de may
                else if ( mes == 6 ) //Si mes es junio
                    contadorDias1 += 214 - dia; //suma los dias descontando los de ene,feb,mar,abr,may y los transcurridos de jun
                else if ( mes == 7 ) //Si mes es julio
                    contadorDias1 += 184 - dia; //suma los dias descontando los de ene,feb,mar,abr,may,jun y los transcurridos de jul
                else if ( mes == 8 ) //Si mes es agosto
                    contadorDias1 += 153 - dia; //suma los dias descontando los de ene,feb,mar,abr,may,jun,jul y los transcurridos de ago
                else if ( mes == 9 ) //Si mes es septiembre
                    contadorDias1 += 122 - dia; //suma los dias descontando los de ene,feb,mar,abr,may,jun,jul,ago y los transcurridos de sep
                else if ( mes == 10 ) //Si mes es octubre
                    contadorDias1 += 92 - dia; //suma los dias descontando los de ene,feb,mar,abr,may,jun,jul,ago,sep y los transcurridos de oct
                else if ( mes == 11 ) //Si mes es noviembre
                    contadorDias1 += 61 - dia; //suma los dias descontando los de ene,feb,mar,abr,may,jun,jul,ago,sep,oct y los transcurridos de nov
                else if ( mes == 12 ) //Si mes es diciembre
                    contadorDias1 += 31 - dia; //suma los dias descontando los de ene,feb,mar,abr,may,jun,jul,ago,sep,oct,nov y los transcurridos de dic

                //Luego, verificamos si el año actual es bisiesto para sumarle un dia a contadorDias2 pero antes de febrero
                if ( mes <= 2 )
                {
                    //Verifica si anio es bisiesto o no
                    if ( ( anio2 % 4 == 0 ) && ( ( anio2 % 100 != 0 ) || ( anio2 % 400 == 0 ) ) ) //Si es bisiesto
                        contadorDias2++; //suma un dia, porque antes asumimos que febrero tenia 28 dias y en realidad tiene 29
                } //Fin de if anidado
            } //Fin de if anidado

            anio1--; //Postdecrementa anio1 para pasar al anterior año
        } //Fin de while
    } //Fin de if


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------


    //SI ANIO2 ES MENOR QUE ANIO, ES DECIR SI EL AÑO DE LA FECHA 2 ES MENOR QUE EL AÑO DE LA FECHA ACTUAL
    if ( anio2 < anio )
    {
        aux = anio2; //Almacena una copia de anio2 en aux para luego compararlo

        while ( anio2 <= anio ) //Mientras que anio2 sea menor o igual que anio
        {
            //Este if solo se ejecuta en la primera iteración, ya que aca estamos descontando los dias transcurridos del mes
            if ( anio2 == aux ) //Si anio2 es igual a aux
            {
                //Verifica en que mes del año esta
                //Asume que febrero tiene 28 dias
                if ( mes2 == 1 ) //Si mes2 es enero
                    contadorDias2 = 365 - dia2; //resta los dias de ene(dia2) transcurridos
                else if ( mes2 == 2 ) //Si mes2 es febrero
                    contadorDias2 = 365 - dia2 - 31; //resta los dias de ene(31) y feb transcurridos(dia2)
                else if ( mes2 == 3 ) //Si mes2 es marzo
                    contadorDias2 = 365 - dia2 - 59; //resta los dias de ene,feb(59) y mar transcurridos(dia2)
                else if ( mes2 == 4 ) //Si mes2 es abril
                    contadorDias2 = 365 - dia2 - 90; //resta los dias de ene,feb,mar(90) y abr transcurridos(dia2)
                else if ( mes2 == 5 ) //Si mes2 es mayo
                    contadorDias2 = 365 - dia2 - 120; //resta los dias de ene,feb,mar,abr(120) y mayo transcurridos(dia2)
                else if ( mes2 == 6 ) //Si mes2 es junio
                    contadorDias2 = 365 - dia2 - 151; //resta los dias de ene,feb,mar,abr,may(151) y jun transcurridos(dia2)
                else if ( mes2 == 7 ) //Si mes2 es julio
                    contadorDias2 = 365 - dia2 - 181; //resta los dias de ene,feb,mar,abr,may,jun(181) y jul transcurridos(dia2)
                else if ( mes2 == 8 ) //Si mes2 es agosto
                    contadorDias2 = 365 - dia2 - 212; //resta los dias de ene,feb,mar,abr,may,jun,jul(212) y ago transcurridos(dia2)
                else if ( mes2 == 9 ) //Si mes2 es septiembre
                    contadorDias2 = 365 - dia2 - 243; //resta los dias de ene,feb,mar,abr,may,jun,jul,ago(243) y sep transcurridos(dia2)
                else if ( mes2 == 10 ) //Si mes2 es octubre
                    contadorDias2 = 365 - dia2 - 273; //resta los dias de ene,feb,mar,abr,may,jun,jul,ago,sep(273) y oct transcurridos(dia2)
                else if ( mes2 == 11 ) //Si mes2 es noviembre
                    contadorDias2 = 365 - dia2 - 304; //resta los dias de ene,feb,mar,abr,may,jun,jul,ago,sep,oct(304) y nov transcurridos(dia2)
                else if ( mes2 == 12 ) //Si mes2 es diciembre
                    contadorDias2 = 365 - dia2 - 334; //resta los dias de ene,feb,mar,abr,may,jun,jul,ago,sep,oct,nov(334) y dic transcurridos(dia2)

                //Luego, verificamos si el año actual es bisiesto para sumarle un dia a contadorDias2
                if ( ( anio2 % 4 == 0 ) && ( ( anio2 % 100 != 0 ) || ( anio2 % 400 == 0 ) ) )
                    contadorDias2++; //suma un dia, porque antes asumimos que febrero tenia 28 dias y en realidad tiene 29
            } //Fin de if anidado
            else if ( anio2 > aux && anio2 < anio ) //Si anio2 es mayor que aux (contiene una copia del valor del anio2) y anio2 es menor que anio, suma los dias del siguiente año teniendo en cuenta si son o no años bisiestos
            {
                if ( ( anio2 % 4 == 0 ) && ( ( anio2 % 100 != 0 ) || ( anio2 % 400 == 0 ) ) ) //Si es bisiesto, tiene 366 dias
                    contadorDias2 += 366; //Suma los dias de este año (valor de anio2) bisiesto
                else //De lo contrario, significa que no es bisiesto y tiene 365 dias
                    contadorDias2 += 365; //Suma los dias de este año (valor de anio2) no bisiesto
                //Fin de if...else anidado
            }
            else if ( anio2 == anio ) //Si anio2 y anio son iguales
            {
                if ( mes == 1 ) //Si mes es enero
                    contadorDias2 += dia; //suma los dias de ene transcurridos de la fecha actual
                else if ( mes == 2 ) //Si mes es febrero
                    contadorDias2 += 31 + dia; //suma los dias de ene y los transcurridos de feb
                //A partir de marzo asume que febrero tiene 28 dias
                else if ( mes == 3 ) //Si mes es marzo
                    contadorDias2 += 59 + dia; //suma los dias de ene,feb y los transcurridos de mar
                else if ( mes == 4 ) //Si mes es abril
                    contadorDias2 += 90 + dia; //suma los dias de ene,feb,mar y los transcurridos de abr
                else if ( mes == 5 ) //Si mes es mayo
                    contadorDias2 += 120 + dia; //suma los dias de ene,feb,mar,abr y los transcurridos de may
                else if ( mes == 6 ) //Si mes es junio
                    contadorDias2 += 151 + dia; //suma los dias de ene,feb,mar,abr,may y los transcurridos de jun
                else if ( mes == 7 ) //Si mes es julio
                    contadorDias2 += 181 + dia; //suma los dias de ene,feb,mar,abr,may,jun y los transcurridos de jul
                else if ( mes == 8 ) //Si mes es agosto
                    contadorDias2 += 212 + dia; //suma los dias de ene,feb,mar,abr,may,jun,jul y los transcurridos de ago
                else if ( mes == 9 ) //Si mes es septiembre
                    contadorDias2 += 243 + dia; //suma los dias de ene,feb,mar,abr,may,jun,jul,ago y los transcurridos de sep
                else if ( mes == 10 ) //Si mes es octubre
                    contadorDias2 += 273 + dia; //suma los dias de ene,feb,mar,abr,may,jun,jul,ago,sep y los transcurridos de oct
                else if ( mes == 11 ) //Si mes es noviembre
                    contadorDias2 += 304 + dia; //suma los dias de ene,feb,mar,abr,may,jun,jul,ago,sep,oct y los transcurridos de nov
                else if ( mes == 12 ) //Si mes es diciembre
                    contadorDias2 += 334 + dia; //suma los dias de ene,feb,mar,abr,may,jun,jul,ago,sep,oct,nov y los transcurridos de dic

                //Luego, verificamos si el año actual es bisiesto para sumarle un dia a contadorDias2 pero a partir de marzo
                if ( mes >= 3 )
                {
                    //Verifica si anio es bisiesto o no
                    if ( ( anio2 % 4 == 0 ) && ( ( anio2 % 100 != 0 ) || ( anio2 % 400 == 0 ) ) ) //Si es bisiesto
                        contadorDias2++; //suma un dia, porque antes asumimos que febrero tenia 28 dias y en realidad tiene 29
                } //Fin de if anidado
            } //Fin de if anidado

            anio2++; //Postincrementa anio2 para pasar al siguiente año
        } //Fin de while
        anio2--; //Postdrementa anio2 porque si este if se ejecuta quiere decir que al finalizar el ciclo while anio2 almacena un valor mayor al año actual lo que provocaria que entre en el siguiente if (anio2 > anio) causando errores.
    } //Fin de if


//-------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------


    // SI ANIO2 ES MAYOR QUE ANIO, ES DECIR SI EL AÑO DE LA FECHA 2 ES MAYOR QUE EL AÑO DE LA FECHA ACTUAL
    if ( anio2 > anio )
    {
        aux = anio2; //Almacena una copia de anio2 en aux para luego compararlo

        while ( anio2 >= anio ) //Mientras que anio2 sea mayor o igual que anio
        {
            //Este if solo se ejecuta en la primera iteración, ya que aca estamos descontando los dias transcurridos del mes
            if ( anio2 == aux ) //Si anio2 es igual a aux
            {
                //Verifica en que mes del año esta
                //Asume que febrero tiene 28 dias
                if ( mes2 == 1 ) //Si mes2 es enero
                    contadorDias2 = dia2; //asigna los dias de ene(dia2) transcurridos
                else if ( mes2 == 2 ) //Si mes2 es febrero
                    contadorDias2 = 31 + dia2; //asigna los dias de ene(31) y feb transcurridos(dia2)
                else if ( mes2 == 3 ) //Si mes2 es marzo
                    contadorDias2 = 59 + dia2; //asigna los dias de ene,feb(59) y mar transcurridos(dia2)
                else if ( mes2 == 4 ) //Si mes2 es abril
                    contadorDias2 = 90 + dia2; //asigna los dias de ene,feb,mar(90) y abr transcurridos(dia2)
                else if ( mes2 == 5 ) //Si mes2 es mayo
                    contadorDias2 = 120 + dia2; //asigna los dias de ene,feb,mar,abr(120) y mayo transcurridos(dia2)
                else if ( mes2 == 6 ) //Si mes2 es junio
                    contadorDias2 = 151 + dia2; //asigna los dias de ene,feb,mar,abr,may(151) y jun transcurridos(dia2)
                else if ( mes2 == 7 ) //Si mes2 es julio
                    contadorDias2 = 181 + dia2; //asigna los dias de ene,feb,mar,abr,may,jun(181) y jul transcurridos(dia2)
                else if ( mes2 == 8 ) //Si mes2 es agosto
                    contadorDias2 = 212 + dia2; //asigna los dias de ene,feb,mar,abr,may,jun,jul(212) y ago transcurridos(dia2)
                else if ( mes2 == 9 ) //Si mes2 es septiembre
                    contadorDias2 = 243 + dia2; //asigna los dias de ene,feb,mar,abr,may,jun,jul,ago(243) y sep transcurridos(dia2)
                else if ( mes2 == 10 ) //Si mes2 es octubre
                    contadorDias2 = 273 + dia2; //asigna los dias de ene,feb,mar,abr,may,jun,jul,ago,sep(273) y oct transcurridos(dia2)
                else if ( mes2 == 11 ) //Si mes2 es noviembre
                    contadorDias2 = 304 + dia2; //asigna los dias de ene,feb,mar,abr,may,jun,jul,ago,sep,oct(304) y nov transcurridos(dia2)
                else if ( mes2 == 12 ) //Si mes2 es diciembre
                    contadorDias2 = 334 + dia2; //asigna los dias de ene,feb,mar,abr,may,jun,jul,ago,sep,oct,nov(334) y dic transcurridos(dia2)

                //Luego, verificamos si el año actual es bisiesto para sumarle un dia a contadorDias2
                if ( ( anio2 % 4 == 0 ) && ( ( anio2 % 100 != 0 ) || ( anio2 % 400 == 0 ) ) )
                    contadorDias2++; //suma un dia, porque antes asumimos que febrero tenia 28 dias y en realidad tiene 29
            } //Fin de if anidado
            else if ( anio2 < aux && anio2 > anio ) //Si anio2 es menor que aux (contiene una copia del valor del anio2) y anio2 es mayor que anio, suma los dias del anterior año teniendo en cuenta si son o no años bisiestos
            {
                if ( ( anio2 % 4 == 0 ) && ( ( anio2 % 100 != 0 ) || ( anio2 % 400 == 0 ) ) ) //Si es bisiesto, tiene 366 dias
                    contadorDias2 += 366; //Suma los dias de este año (valor de anio2) bisiesto
                else //De lo contrario, significa que no es bisiesto y tiene 365 dias
                    contadorDias2 += 365; //Suma los dias de este año (valor de anio2) no bisiesto
                //Fin de if...else anidado
            }
            else if ( anio2 == anio ) //Si anio2 y anio son iguales
            {
                //Asume que febrero tiene 28 dias
                if ( mes == 1 ) //Si mes es enero
                    contadorDias2 += 365 - dia; //suma los dias descontando los de ene transcurridos de la fecha actual
                else if ( mes == 2 ) //Si mes es febrero
                    contadorDias2 += 334 - dia; //suma los dias descontando los de ene y los transcurridos de feb
                else if ( mes == 3 ) //Si mes es marzo
                    contadorDias2 += 306 - dia; //suma los dias descontando los de ene,feb y los transcurridos de mar
                else if ( mes == 4 ) //Si mes es abril
                    contadorDias2 += 275 - dia; //suma los dias descontando los de ene,feb,mar y los transcurridos de abr
                else if ( mes == 5 ) //Si mes es mayo
                    contadorDias2 += 245 - dia; //suma los dias descontando los de ene,feb,mar,abr y los transcurridos de may
                else if ( mes == 6 ) //Si mes es junio
                    contadorDias2 += 214 - dia; //suma los dias descontando los de ene,feb,mar,abr,may y los transcurridos de jun
                else if ( mes == 7 ) //Si mes es julio
                    contadorDias2 += 184 - dia; //suma los dias descontando los de ene,feb,mar,abr,may,jun y los transcurridos de jul
                else if ( mes == 8 ) //Si mes es agosto
                    contadorDias2 += 153 - dia; //suma los dias descontando los de ene,feb,mar,abr,may,jun,jul y los transcurridos de ago
                else if ( mes == 9 ) //Si mes es septiembre
                    contadorDias2 += 122 - dia; //suma los dias descontando los de ene,feb,mar,abr,may,jun,jul,ago y los transcurridos de sep
                else if ( mes == 10 ) //Si mes es octubre
                    contadorDias2 += 92 - dia; //suma los dias descontando los de ene,feb,mar,abr,may,jun,jul,ago,sep y los transcurridos de oct
                else if ( mes == 11 ) //Si mes es noviembre
                    contadorDias2 += 61 - dia; //suma los dias descontando los de ene,feb,mar,abr,may,jun,jul,ago,sep,oct y los transcurridos de nov
                else if ( mes == 12 ) //Si mes es diciembre
                    contadorDias2 += 31 - dia; //suma los dias descontando los de ene,feb,mar,abr,may,jun,jul,ago,sep,oct,nov y los transcurridos de dic

                //Luego, verificamos si el año actual es bisiesto para sumarle un dia a contadorDias2 pero antes de febrero
                if ( mes <= 2 )
                {
                    //Verifica si anio es bisiesto o no
                    if ( ( anio2 % 4 == 0 ) && ( ( anio2 % 100 != 0 ) || ( anio2 % 400 == 0 ) ) ) //Si es bisiesto
                        contadorDias2++; //suma un dia, porque antes asumimos que febrero tenia 28 dias y en realidad tiene 29
                } //Fin de if anidado
            } //Fin de if anidado

            anio2--; //Postdecrementa anio2 para pasar al anterior año
        } //Fin de while
    } //Fin de if
} //Fin de calcularDistanciaEnDias

//Función que compara segun la distancia en dias de las fechas cual es la más cercana a la fecha actual
void Fecha::compararFechas()
{
    //COMPARA CUAL DE LAS DOS FECHAS ES LA MAS CERCANA A LA FECHA ACTUAL
    if ( contadorDias1 < contadorDias2 ) //Si contadorDias1 es menor que contadorDias2
    {
        cout << "\nLa FECHA 1 es la mas cercana a " << anio << "/" << mes << "/" << dia << "."
            << "\nPorque la fecha 1 tiene " << contadorDias1 << " dias de cercania y "
            << "la fecha 2 tiene " << contadorDias2 << " dias de cercania con la fecha actual." << endl;
    }
    else if ( contadorDias1 > contadorDias2 ) //Si contadorDias1 es mayor que contadorDias2
    {
        cout << "\nLa FECHA 2 es la mas cercana a " << anio << "/" << mes << "/" << dia << "."
            << "\nPorque la fecha 2 tiene " << contadorDias2 << " dias de cercania y "
            << "la fecha 1 tiene " << contadorDias1 << " dias de cercania con la fecha actual." << endl;
    }
    else if ( contadorDias1 == contadorDias2 )
    {
        cout << "\nNinguna fecha es mas cercana a " << anio << "/" << mes << "/" << dia << "."
            << "\nPorque ambas fechas tienen la misma cercania con la fecha actual. La fecha 1 tiene " << contadorDias1
            << " dias de cercania y la fecha 2 tiene " << contadorDias2 << " dias de cercania con la fecha actual." << endl;
    }
} //Fin de compararFechas