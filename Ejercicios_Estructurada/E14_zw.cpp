#include<iostream>
#include<cmath>
using namespace std;
/*Elaborar un algoritmo que lea el valor de w e imprima el de z.*/
float w,z;
int main(){
    cout << "Ingrese el valor de W: \n";
    cin >> w;
    z=(1/(sqrt(2*M_PI)))*pow(M_E,-(pow(w,2))/2);
    cout << "Z = " << z;
    return 0;
}