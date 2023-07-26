#include <iostream>
#include <cmath>
/*Hacer un algoritmo que imprima el valor de Y a partir de la ecuación
Y=3x^2+7x-15 solicitando el dato de x.*/
using namespace std;

void Y_ecuacion(){
    int x,y;
    cout << "Ingrese el valor de X: \n";
    cin >> x;
    y=3*x^2+7*x-15;
    cout << "El valor de Y es de " << y << ".";
    //return 0;
}