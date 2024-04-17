#include <iostream>
#include "problemas.h"

using namespace std;

int main()
{

    int opcion;

    cout << "-----------------------" << endl;
    cout << "|Menu                  |" << endl;
    cout << "|1. Problema 1         |" << endl;
    cout << "|2. Problema 2         |" << endl;
    cout << "|3. Problema 3         |" << endl;
    cout << "|4. Problema 4         |" << endl;
    cout << "|5. Problema 5         |" << endl;
    cout << "-----------------------" << endl;

    cin >> opcion;

    switch(opcion) { 

        case 1:
            problema1();
            break;
        case 2:
            //nada
            break;
        case 3:
            //nada
            break;
        case 4:
            // nada
            break;
        default: 
            cout << "Nada" << endl;
    } 

    return 0;
}
