#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n,i;
    cout << "Ingrese el valor de n: \n";
    cin >> n;
    for ( i = 1; i <= n; i++) {
        if (i%2==0) {
            cout << i << " es par.\n";
        }else{
            cout << i << " es impar.\n";
        }
    }
    return 0;
}