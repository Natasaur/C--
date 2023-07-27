#include<iostream>
#include<cmath>
using namespace std;
/*Elaborar un algortimo que permita leer el tamaño de un ángulo en radianes e imprima la tangente, cotangente, secante y cosecante.*/

void fn_trigo() {
    float ang;
    cout << "Ingrese el ángulo en radianes: \n";
    cin >> ang;
    cout << "Tangente: " << tan(ang) << endl;
    cout << "Cotangente: " << 1/tan(ang) << endl;
    cout << "Secante: " << 1/cos(ang) << endl;
    cout << "Cosecante: " << 1/sin(ang) << endl;
    //return 0;
}