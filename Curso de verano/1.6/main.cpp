#include <iostream>
using namespace std;

int main()
{
    int edad;

    cout << "Digite su edad: ";
    cin >> edad;

    if ( edad <= 12 )
        cout << "Menor." << endl;
    else
        if ( edad >= 13 && edad <= 18 )
            cout << "Cadete." << endl;
        else
            if ( edad > 18 && edad <= 26 )
                cout << "Juvenil." << endl;
            else
                cout << "Mayor." << endl;

    cin.ignore();
    cin.get();
    return 0;
} // fin de main