#include<iostream>
using namespace std;
int main(){
    int n,resultado,cont;
    resultado=1;
    cout << "Ingrese el valor a calcular el factorial: \n";
    cin >> n;
    for (cont = 1; cont <= n; cont++){
        resultado=resultado*cont;
    }
    cout << resultado << endl;
    return resultado;
}