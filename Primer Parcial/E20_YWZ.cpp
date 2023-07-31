#include<iostream>
#include<cmath>
using namespace std;
/*Elaborar un algoritmo que permita leer valores para A y B e imprima Y, Z y W.*/
float a,b,y,z,w;
int main(){
    cout << "Ingrese el valor de A: \n";
    cin >> a;
    cout << "Ingrese el valor de B: \n";
    cin >> b;
    y=3*pow(a,2)*pow(b,2)*sqrt(2*a);
    w=sqrt(pow(2,a)*a)*y;
    z=(12*sqrt(a))/pow(b,3/4);
    cout << "Y: " << y << endl;
    cout << "W: " << w << endl;
    cout << "Z: " << z << endl;
    return 0;
}