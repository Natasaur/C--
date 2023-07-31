#include<iostream>
#include<cmath>
using namespace std;
/*Elaborar un algoritmo que permita leer los valores de X, Y, W, y Z e imprima el valor de F.*/

void xywz(){
    int x,y,z,w,b;
    float f;
    cout << "Ingrese el valor de X: \n";
    cin >> x;
    cout << "Ingrese el valor de Y: \n";
    cin >> y;
    cout << "Ingrese el valor de Z: \n";
    cin >> z;
    cout << "Ingrese el valor de W: \n";
    cin >> w;
    cout << "Ingrese el valor de B: \n";
    cin >> b;
    f=(pow(4*pow(x,2)*pow(y,2)*sqrt(2*z*w),2))/((4*pow(x,1/2))/(pow(b,3/4)));
    cout << "F = " << f << endl;
    //return 0;
}