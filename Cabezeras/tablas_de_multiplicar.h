#include<iostream>
using namespace std;
void tablas_de_multiplicar() {
    int n,i;
    cout << "Ingrese el número a calcular: \n";
    cin >> n;
    for ( i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n*i << endl;
    }
    //return 0;
}