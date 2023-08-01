#include<iostream>
using namespace std;
void fuerza_N() {
    float f,m,a;
    cout << "Ingrese el valor de la aceleración: \n";
    cin >> a;
    cout << "Ingrese el valor de la masa: \n";
    cin >> m;
    f=a*m;
    cout << "F = " << f << endl;
    //return 0;
}