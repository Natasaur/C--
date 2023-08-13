/*b^2-4ac*/
#include<iostream>
using namespace std;
int main() {
    float a,b,c,d;
    cout << "Ingrese el valor de a: \n";
    cin >> a;
    cout << "Ingrese el valor de b: \n";
    cin >> b;
    cout << "Ingrese el valor de c: \n";
    cin >> c;
    d=pow(b,2)-4*a*c;
    if (d==0) {
        cout << "La función tiene raíz única.\n"
    }else if (d>0) {
        cout << "La función tiene raíces reales.\n"
    }else if (d<0) {
        cout << "La función tiene raíces complejas.\n"
    }    
    return 0;
}