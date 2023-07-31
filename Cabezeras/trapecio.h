#include<iostream>
using namespace std;
void trapecio() {
    int a,b;
    cout << "Ingrese el ángulo A: \n";
    cin >> a;
    cout << "Ingrese el ángulo B: \n";
    cin >> b;
    if (a==b){
        cout << "Es un Trapecio Isóceles.\n";
    }else{
        cout << "No es un Trapecio Isóceles.\n";
    }
    //return 0;
}