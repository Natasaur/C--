#include<iostream>
#include<cmath>
using namespace std;
/*Elaborar un algoritmo que permita leer el tamaño de un angulo en grados e imprima el seno, coseno y el arco tangente. Deben convertirse los grados leídos a radianes e imprima el seno, coseno y el arco tangente. Deben convertirse los grados leídos a radianes.*/
float ang;
int main(){
    cout << "Ingrese el ángulo en grados: \n";
    cin >> ang;
    ang=ang*2*M_PI/180;
    cout << "Seno: " << sin(ang) << endl;
    cout << "Coseno: " << cos(ang) << endl;
    cout << "Arco tangente: " << 1/tan(ang) << endl;
    return 0;
}