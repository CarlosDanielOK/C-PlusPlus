#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char nombre[] = "naruto";

    // convierte el valor de nombre a mayusculas
    cout << strupr( nombre ) << endl;

    cin.ignore();
    cin.get();
    return 0;
}