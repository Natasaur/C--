#include<iostream>
#include<cmath>
using namespace std;
/*Elaborar un algoritmo que lea el radio de una esfera y calcule e imprima el volumen y area.*/

void esfera(){
    float v,r,a;
    cout << "Ingrese el valor del radio: \n";
    cin >> r;
    v=4/3*M_PI*pow(r,3);
    a=4*M_PI*pow(r,2);
    cout << "Radio: " << r << endl << "Volumen: " << v << endl << "Área: " << a << endl;
    //return 0;
}