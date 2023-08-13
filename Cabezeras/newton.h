#include<iostream>
using namespace std;
void newton(){
    int op;
    float f,m,a;
    op=0;
    cout << "¿Qué deseas calcular?\n";
    cout << "1. Fuerza\n";
    cout << "2. Masa\n";
    cout << "3. Aceleración\n";
    cin >> op;
    switch (op)
    {
    case 1:
        cout << "Ingrese el valor de la masa: \n";
        cin >> m;
        cout << "Ingresa el valor de la aceleración\n";
        cin >> a;
        f=m*a;
        cout << "Fuerza: " << f << " N\n";
        break;
    case 2:
        cout << "Ingrese el valor de la fuerza: \n";
        cin >> f;
        cout << "Ingresa el valor de la aceleración\n";
        cin >> a;
        m=f/a;
        cout << "Masa: " << m << " Kg\n";
        break;
    case 3:
        cout << "Ingrese el valor de la masa: \n";
        cin >> m;
        cout << "Ingresa el valor de la aceleración\n";
        cin >> f;
        a=f/m;
        cout << "Aceleración: " << f << " m/s\n";
        break;
    
    default:
        cout << "No ha seleccionado una opción disponible.\n";
        break;
    }
    //return 0;
}