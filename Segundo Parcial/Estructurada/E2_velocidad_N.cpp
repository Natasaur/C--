#include<iostream>
using namespace std;
int main() {
    float v,d,t;
    cout << "Ingrese el valor de la distancia: \n";
    cin >> d;
    cout << "Ingrese el valor de la tiempo: \n";
    cin >> t;
    v=d/t;
    cout << "V = " << v << endl;
    return 0;
}