#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e,f;
    float x,y,i;
    cout << "Ingrese el valor de a: \n";
    cin >> a;
    cout << "Ingrese el valor de b: \n";
    cin >> b;
    cout << "Ingrese el valor de c: \n";
    cin >> c;
    cout << "Ingrese el valor de d: \n";
    cin >> d;
    cout << "Ingrese el valor de e: \n";
    cin >> e;
    cout << "Ingrese el valor de f: \n";
    cin >> f;
    i=a*e-b*d;
    if (i==0) {
        cout << "El ejercicio no tiene solución.\n";
    }else{
        x=(c*e-b*f)/(a*e-b*d);
        y=(a*f-c*d)/(a*e-b*d);
        cout << "X = " << x << endl << "Y = " << y << endl;
    }
    return 0;
}
