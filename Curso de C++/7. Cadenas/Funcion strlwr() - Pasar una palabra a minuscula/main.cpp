#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char palabra[] = "NARUTO";

    // convierte el valor de palabra a minusculas
    cout << strlwr( palabra ) << endl;

    cin.ignore();
    cin.get();
    return 0;
}