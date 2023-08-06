#include<iostream>
using namespace std;
int main() {
    int n,i,mayor,menor,num;
    //mayor=0;
    cout << "¿Cuántos valores desea ingresar?\n";
    cin >> n;
    cout << "Ingrese los números: \n";
    for ( i = 1; i <= n; i++) {
        cin >> num;
        if (i==1){
            menor=num;
            mayor=num;
        }else if (num>mayor){
            mayor=num;
        }else if (num<menor){
            menor=num;
        }
    }
    cout << "Mayor: " << mayor << endl << "Menor: " << menor << endl;
    return 0;
}