#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,i;
    cout << "Ingrese el valor de n: \n";
    cin >> n;
    for ( i = 1; i <= n; i++) {
        cout << i << " ^ " << i << " = " << pow(i,i) << endl;
    }
    return 0;
}
