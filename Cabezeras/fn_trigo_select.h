#include<iostream>
#include<cmath>
using namespace std;
void fn_trigo_select(){
    float ang,tangente,secante,cotangente,cosecante;
    int op;
    cout << "Seleccione una opción: " << endl << "1. Grados" << endl << "2. Radianes" << endl;
    cin >> op;
    switch (op){
    case 1:
        cout << "Ingrese el valor del ángulo: \n";
        cin >> ang;
        ang=ang*2*M_PI/180;
        tangente=tan(ang);
        secante=1/cos(ang);
        cotangente=1/tangente;
        cosecante=1/sin(ang);
        cout << "Tangente: " << tangente << endl;
        cout << "Secante: " << secante << endl;
        cout << "Cotangente: " << cotangente << endl;
        cout << "Cosecante: " << cosecante << endl;
        break;
    case 2:
        cout << "Ingrese el valor del ángulo: \n";
        cin >> ang;
        tangente=tan(ang);
        secante=1/cos(ang);
        cotangente=1/tangente;
        cosecante=1/sin(ang);
        cout << "Tangente: " << tangente << endl;
        cout << "Secante: " << secante << endl;
        cout << "Cotangente: " << cotangente << endl;
        cout << "Cosecante: " << cosecante << endl;
        break;
    default:
        break;
    }
    //return 0;
}