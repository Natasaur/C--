#include<iostream>
#include<cmath>
using namespace std;
/*Elaborar un algortimo que permita leer el tamaño de un ángulo en grados e imprima la tangente, cotangente, secante y cosecante.*/

void fn_trigo_v2() {
    float ang;
    cout << "Ingrese el ángulo en grados: \n";
    cin >> ang;
    ang=ang*2*M_PI/180;
    cout << "Tangente: " << tan(ang) << endl;
    cout << "Cotangente: " << 1/tan(ang) << endl;
    cout << "Secante: " << 1/cos(ang) << endl;
    cout << "Cosecante: " << 1/sin(ang) << endl;
    //return 0;
}