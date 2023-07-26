#include<iostream>
#include<cmath>
using namespace std;
/*Elaborar un algoritmo que lea un ángulo en grados e imprima el seno hiperbólico, coseno hiperbólico, tangente hiperbólica y secante. Deben convertirse los grados leídos a radianes antes de hacer los cálculos.*/
float ang,sin_h,cos_h,tan_h,secante;
int main() {
    cout << "Ingresa el ángulo en grados: \n";
    cin >> ang;
    ang=ang*2*M_PI/180;
    sin_h=(pow(M_E,ang)-pow(M_E,-ang))/2;
    cos_h=(pow(M_E,ang)+pow(M_E,-ang))/2;
    tan_h=sin_h/cos_h;
    secante=1/cos(ang);
    cout << "Seno Hiperbólico: " << sin_h << endl;
    cout << "Coseno Hiperbólico: " << cos_h << endl;
    cout << "Tangente Hiperbólica: " << tan_h << endl;
    cout << "Secante: " << secante;
    return 0;
}