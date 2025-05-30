// AYED Ejercicio 19.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
/*
 * Se ingresan por teclado varios valores enteros (de a uno a la vez) ingresando un valor negativo para indicar que finalizó la carga de datos. Se pide informar :
    1. Cuántos valores v fueron ingresados tal que v<=12.
    2. Cuántos valores v fueron ingresados tal que 12<v<=24.
    3. Cuántos valores v fueron ingresados tal que 24<v<=36.
    4. Cuántos valores v fueron ingresados tal que v==0 (cero).
 */

#include <iostream>
using namespace std;

int main()
{
    int v;
    unsigned int menorQue12 = 0, entre12y24 = 0, entre24y36 = 0, igualQue0 = 0; //Contadores

    //Pide y recibe un numero
    cout << "Ingrese un valor: ";
    cin >> v;

    while ( v >= 0 )
    {
        if ( v <= 12 )
            menorQue12++;
        else if ( v > 12 && v <= 24 )
            entre12y24++;
        else if ( v > 24 && v <= 36 )
            entre24y36++;
        if ( v == 0 ) //Este if va aparte porque si v es menor que 12, v podria ser 0, por lo tanto tendriamos que incrementar ambos contadores
            igualQue0++;

        //Pide y recibe de nuevo un numero
        cout << "Ingrese un valor: ";
        cin >> v;
    }

    cout << "\nValores de v<=12: " << menorQue12 << endl;
    cout << "Valores de 12<v<=24: " << entre12y24 << endl;
    cout << "Valores de 24<v<=36: " << entre24y36 << endl;
    cout << "Valores de v==0: " << igualQue0 << endl;

    return 0;
}