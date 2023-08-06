#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cout << "Ingrese el valor de n: \n";
    cin >> n;
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++){
            if (j<=i) {
                cout << "*";
            }
        }
        cout << endl;
    }
    
    return 0;
}